#include "ctiic.h"
// #include "syscall.h"
//////////////////////////////////////////////////////////////////////////////////
// 本程序只供学习使用，未经作者许可，不得用于其它任何用途
//  ALIENTEK STM32F407开发板
// 电容触摸屏-IIC 驱动代码
// 正点原子@ALIENTEK
// 技术论坛:www.openedv.com
// 创建日期:2014/5/7
// 版本：V1.1
// 版权所有，盗版必究。
//  Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//  All rights reserved
//********************************************************************************
// 修改说明
//  V1.1 20140721
//  1,修改IIC_ReadByte函数,读数据更快.
//  2,修改IIC_Wait_Ack函数,以支持MDK的-O2优化.
//////////////////////////////////////////////////////////////////////////////////
// G431 150MHz 优化的时序，i2c频率约540KHz
// 20：760KHz, 30: 550KHz, 42: 400KHz

// 控制I2C速度的延时
void IIC_Delay(void)
{
	for (int i = 0; i < 20; i++) // 150M G431
		__NOP();
}
// 电容触摸芯片IIC接口初始化
void IIC_Init(void)
{
	IIC_Stop();
}
// 产生IIC起始信号
void IIC_Start(void)
{
	IIC_SDA_OUT();
	IIC_SDA(1);
	IIC_SCL(1);
	IIC_Delay();
	IIC_SDA(0); // START:when CLK is high,DATA change form high to low
	IIC_Delay();
	IIC_SCL(0); // 钳住I2C总线，准备发送或接收数据
				// IIC_Delay();
}
// 产生IIC停止信号
void IIC_Stop(void)
{
	IIC_SDA_OUT();
	// IIC_SCL(0);
	IIC_SDA(0);
	IIC_Delay();
	IIC_SCL(1);
	IIC_Delay();
	IIC_SDA(1); // STOP:when CLK is high DATA change form low to high
	IIC_Delay();
}
// 等待应答信号到来
// 返回值：0，接收应答失败
//         1，接收应答成功
u8 IIC_Wait_Ack(void)
{
	u8 ucErrTime = 0;
	u8 rack = 0;
	IIC_SDA_IN();
	IIC_SDA(1);
	IIC_Delay();
	IIC_SCL(1);
	IIC_Delay();

	while (IIC_READ_SDA)
	{
		ucErrTime++;

		if (ucErrTime > 12)
		{
			IIC_Stop();
			rack = 1;
			break;
		}
	}

	IIC_SCL(0); // 时钟输出0
	IIC_Delay();
	IIC_SDA_OUT();
	return rack;
}
// 产生ACK应答
void IIC_Ack(void)
{
	IIC_SDA_OUT();
	IIC_SDA(0);
	IIC_Delay();
	IIC_SCL(1);
	IIC_Delay();
	IIC_SCL(0);
	IIC_Delay();
	IIC_SDA(1);
	IIC_Delay();
}
// 不产生ACK应答
void IIC_NAck(void)
{
	IIC_SDA_OUT();
	IIC_SDA(1);
	IIC_Delay();
	IIC_SCL(1);
	IIC_Delay();
	IIC_SCL(0);
	IIC_Delay();
}
u8 IIC_SendByte_ack(u8 txd)
{
	u8 t;
	IIC_SDA_OUT();
	// IIC_SCL(0);
	for (t = 0; t < 8; t++)
	{
		IIC_SDA((txd & 0x80) >> 7);
		IIC_Delay();
		IIC_SCL(1);
		IIC_Delay();
		IIC_SCL(0);
		txd <<= 1;
	}
	IIC_SDA(1);

	return IIC_Wait_Ack();
}
// IIC发送一个字节
// 返回从机有无应答节
// 1，有应答
// 0，无应答
void IIC_SendByte(u8 txd)
{
	u8 t;
	IIC_SDA_OUT();
	// IIC_SCL(0);
	for (t = 0; t < 8; t++)
	{
		IIC_SDA((txd & 0x80) >> 7);
		IIC_Delay();
		IIC_SCL(1);
		IIC_Delay();
		IIC_SCL(0);
		txd <<= 1;
	}
	IIC_SDA(1);
	// IIC_Delay();
}
// 读1个字节，ack=1时，发送ACK，ack=0，发送nACK
u8 IIC_ReadByte(u8 ack)
{
	u8 i, receive = 0;
	IIC_SDA_IN();
	IIC_SDA(1);
	for (i = 0; i < 8; i++)
	{
		receive <<= 1;
		IIC_SCL(1);
		IIC_Delay();

		if (IIC_READ_SDA)
			receive++;
		IIC_SCL(0);
		IIC_Delay();
	}
	// IIC_Delay();
	if (ack == 0)
		IIC_NAck(); // 发送nACK
	else
		IIC_Ack(); // 发送ACK
	return receive;
}