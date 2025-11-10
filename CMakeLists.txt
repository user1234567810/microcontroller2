# Generated Cmake Pico project file
cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.2.0)
set(toolchainVersion 14_2_Rel1)
set(picotoolVersion 2.2.0-a4)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico CACHE STRING "Board type")

# Include the Pico SDK
include(pico_sdk_import.cmake)

# Define the project and supported languages
project(microcontroller2 C CXX ASM)

# Initialise the Pico SDK
pico_sdk_init()

# Add the main executable and source files
add_executable(microcontroller2 
    main.c 
    sensor.c 
    led_array.c 
    display.c )

pico_set_program_name(microcontroller2 "microcontroller2")
pico_set_program_version(microcontroller2 "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(microcontroller2 0)
pico_enable_stdio_usb(microcontroller2 1)

# Link the executable with Pico standard library and hardware libraries
target_link_libraries(microcontroller2
        pico_stdlib
        hardware_gpio 
        hardware_i2c )

# Add the standard include files to the build
target_include_directories(microcontroller2 PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

pico_add_extra_outputs(microcontroller2)
