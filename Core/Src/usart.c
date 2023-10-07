/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file    usart.c
 * @brief   This file provides code for the configuration
 *          of the USART instances.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "eeprom.h"
#include "delay.h"
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "usart.h"

/* USER CODE BEGIN 0 */
uint8_t UART_RX_BUF[1];
uint8_t UART_RX_DATA[256] = {0};
uint8_t UART_RX_DATA_len = 0;
uint8_t UART_RX_start_flag = 0;

extern osSemaphoreId_t UART_RX_SEMAHandle;
/* USER CODE END 0 */

UART_HandleTypeDef huart2;
DMA_HandleTypeDef hdma_usart2_rx;
DMA_HandleTypeDef hdma_usart2_tx;

/* USART2 init function */

void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  huart2.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart2.Init.ClockPrescaler = UART_PRESCALER_DIV1;
  huart2.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_SetTxFifoThreshold(&huart2, UART_TXFIFO_THRESHOLD_1_8) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_SetRxFifoThreshold(&huart2, UART_RXFIFO_THRESHOLD_1_8) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_UARTEx_DisableFifoMode(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

void HAL_UART_MspInit(UART_HandleTypeDef* uartHandle)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};
  if(uartHandle->Instance==USART2)
  {
  /* USER CODE BEGIN USART2_MspInit 0 */

  /* USER CODE END USART2_MspInit 0 */

  /** Initializes the peripherals clocks
  */
    PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USART2;
    PeriphClkInit.Usart2ClockSelection = RCC_USART2CLKSOURCE_HSI;
    if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
    {
      Error_Handler();
    }

    /* USART2 clock enable */
    __HAL_RCC_USART2_CLK_ENABLE();

    __HAL_RCC_GPIOB_CLK_ENABLE();
    /**USART2 GPIO Configuration
    PB3     ------> USART2_TX
    PB4     ------> USART2_RX
    */
    GPIO_InitStruct.Pin = GPIO_PIN_3|GPIO_PIN_4;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = GPIO_AF7_USART2;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* USART2 DMA Init */
    /* USART2_RX Init */
    hdma_usart2_rx.Instance = DMA1_Channel1;
    hdma_usart2_rx.Init.Request = DMA_REQUEST_USART2_RX;
    hdma_usart2_rx.Init.Direction = DMA_PERIPH_TO_MEMORY;
    hdma_usart2_rx.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_usart2_rx.Init.MemInc = DMA_MINC_ENABLE;
    hdma_usart2_rx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
    hdma_usart2_rx.Init.MemDataAlignment = DMA_MDATAALIGN_BYTE;
    hdma_usart2_rx.Init.Mode = DMA_CIRCULAR;
    hdma_usart2_rx.Init.Priority = DMA_PRIORITY_LOW;
    if (HAL_DMA_Init(&hdma_usart2_rx) != HAL_OK)
    {
      Error_Handler();
    }

    __HAL_LINKDMA(uartHandle,hdmarx,hdma_usart2_rx);

    /* USART2_TX Init */
    hdma_usart2_tx.Instance = DMA1_Channel2;
    hdma_usart2_tx.Init.Request = DMA_REQUEST_USART2_TX;
    hdma_usart2_tx.Init.Direction = DMA_MEMORY_TO_PERIPH;
    hdma_usart2_tx.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_usart2_tx.Init.MemInc = DMA_MINC_ENABLE;
    hdma_usart2_tx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
    hdma_usart2_tx.Init.MemDataAlignment = DMA_MDATAALIGN_BYTE;
    hdma_usart2_tx.Init.Mode = DMA_NORMAL;
    hdma_usart2_tx.Init.Priority = DMA_PRIORITY_LOW;
    if (HAL_DMA_Init(&hdma_usart2_tx) != HAL_OK)
    {
      Error_Handler();
    }

    __HAL_LINKDMA(uartHandle,hdmatx,hdma_usart2_tx);

    /* USART2 interrupt Init */
    HAL_NVIC_SetPriority(USART2_IRQn, 5, 0);
    HAL_NVIC_EnableIRQ(USART2_IRQn);
  /* USER CODE BEGIN USART2_MspInit 1 */

  /* USER CODE END USART2_MspInit 1 */
  }
}

void HAL_UART_MspDeInit(UART_HandleTypeDef* uartHandle)
{

  if(uartHandle->Instance==USART2)
  {
  /* USER CODE BEGIN USART2_MspDeInit 0 */

  /* USER CODE END USART2_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_USART2_CLK_DISABLE();

    /**USART2 GPIO Configuration
    PB3     ------> USART2_TX
    PB4     ------> USART2_RX
    */
    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_3|GPIO_PIN_4);

    /* USART2 DMA DeInit */
    HAL_DMA_DeInit(uartHandle->hdmarx);
    HAL_DMA_DeInit(uartHandle->hdmatx);

    /* USART2 interrupt Deinit */
    HAL_NVIC_DisableIRQ(USART2_IRQn);
  /* USER CODE BEGIN USART2_MspDeInit 1 */

  /* USER CODE END USART2_MspDeInit 1 */
  }
}

/* USER CODE BEGIN 1 */
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  if (UART_RX_BUF[0] == '$')
  {
    UART_RX_DATA_len = 0;
    // UART_RX_DATA[UART_RX_DATA_len] = UART_RX_BUF[0];
    UART_RX_start_flag = 1;
    // UART_RX_DATA_len++;
  }
  else if (UART_RX_start_flag == 1)
  {
    if (UART_RX_BUF[0] == '#')
    {
      // led_toggle(LED_PC7);
      UART_RX_start_flag = 0;
      // HAL_UART_Transmit_DMA(&huart1, UART_RX_DATA, UART_RX_DATA_len);
      /*
        数据解析和指令执行
      */
      xSemaphoreGiveFromISR(UART_RX_SEMAHandle, NULL);
      UART_RX_DATA_len = 0;
      // HAL_NVIC_SystemReset();//重启
    }
    else
    {
      UART_RX_DATA[UART_RX_DATA_len] = UART_RX_BUF[0];
      UART_RX_DATA_len++;
    }
  }
  HAL_UART_Receive_DMA(&huart2, &UART_RX_BUF[0], 1);
}

void Parse_RX(void)
{
  char *temp = NULL;
  char *cmd[3]; // 指令最多三个参数，逗号分隔
  uint8_t i = 0;
  temp = strtok((char *)UART_RX_DATA, ",");
  // char strBuf[20] = {0};
  while (temp && i < 3)
  {
    cmd[i] = temp;
    ++i;
    temp = strtok(NULL, ",");
  }

  if (strcmp(cmd[0], "info") == 0 && i == 1) // info指令，没有参数
  {
    printf("DataROM Version is: 0x%X\r\n", AT24CXX_ReadOneByte(0x000));
    if (rom_getDeviceMode())
      printf("device is anchor\r\n");
    else
      printf("device is tag\r\n");
    printf("device address is: 0x%04X\r\n", rom_getDeviceAddr());
  }
  if (strcmp(cmd[0], "set") == 0 && i == 3) // set指令，2个参数
  {
    if (strcmp(cmd[1], "mode") == 0) // 设置设备类型，基站还是标签
    {
      // printf("set device mode\r\n");
      if (strcmp(cmd[2], "A") == 0)
      {
        printf("set device as Anchor\r\n");
        rom_setDeviceMode(1);
      }
      else if (strcmp(cmd[2], "T") == 0)
      {
        printf("set device as Tag\r\n");
        rom_setDeviceMode(0);
      }
    }
    else if (strcmp(cmd[1], "addr") == 0) // 设置设备地址，0x开头的十六进制格式
    {
      uint16_t addr_temp = (u16)strtol(cmd[2], NULL, 0);
      printf("set device address: 0x%04X\r\n", addr_temp);
      AT24CXX_WriteLenByte(UWB_PARAM_DEVICEADDR, addr_temp, 2);
    }
  }
}
/* USER CODE END 1 */
