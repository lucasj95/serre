# !!! WARNING !!! AUTO-GENERATED FILE, PLEASE DO NOT MODIFY IT AND USE
# https://docs.platformio.org/page/projectconf/section_env_build.html#build-flags
#
# If you need to override existing CMake configuration or add extra,
# please create `CMakeListsUser.txt` in the root of project.
# The `CMakeListsUser.txt` will not be overwritten by PlatformIO.

cmake_minimum_required(VERSION 3.13)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)

project("untitled" C CXX)

include(CMakeListsPrivate.txt)

if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/CMakeListsUser.txt)
include(CMakeListsUser.txt)
endif()

add_custom_target(
    Production ALL
    COMMAND platformio -c clion run "$<$<NOT:$<CONFIG:All>>:-e${CMAKE_BUILD_TYPE}>"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(
    Debug ALL
    COMMAND platformio -c clion run --target debug "$<$<NOT:$<CONFIG:All>>:-e${CMAKE_BUILD_TYPE}>"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(Z_DUMMY_TARGET ${SRC_LIST} src/model/SerreModel.cpp src/model/SerreModel.h src/model/SerreConfigModel.cpp src/model/SerreConfigModel.h src/model/InputConfigModel.cpp src/model/InputConfigModel.h src/model/Serre.cpp src/model/Serre.h src/model/SerreConfig.cpp src/model/SerreConfig.h src/model/InputSensorConfig.cpp src/model/InputSensorConfig.h src/sensor/TemperatureSensor.cpp src/sensor/TemperatureSensor.h src/handler/ResistanceHandler.cpp src/handler/ResistanceHandler.h src/model/OutputHandlerConfig.cpp src/model/OutputHandlerConfig.h src/handler/AbstractHandler.cpp src/handler/AbstractHandler.h)
