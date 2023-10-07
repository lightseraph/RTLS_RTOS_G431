Import("env")

env.AddPostAction(
    "$BUILD_DIR/${PROGNAME}.elf",
    env.VerboseAction(" ".join([
        "$OBJCOPY", "-O", "ihex", "-R", ".eeprom",
        "$BUILD_DIR/${PROGNAME}.elf", "$BUILD_DIR/${PROGNAME}.hex"
    ]), "Building $BUILD_DIR/${PROGNAME}.hex")
)

env.Append(
    LINKFLAGS=[
        "-mthumb",
        "-mfloat-abi=hard",
        "-mfpu=fpv4-sp-d16",
        "-mcpu=cortex-m4"
    ]
)