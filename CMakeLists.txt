cmake_minimum_required(VERSION 2.6)

set(PROJECT_NAME ATM)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

set(HEADER
    Dispatcher.h
    Component.h
    Bank.h
    Message.h
    MessagePort.h
    Components/cardcomponent.h
    Components/pinverificationcomponent.h
    Components/atm_actioncomponent.h
    Components/insufficientmoneycomponent.h
    atm_dispatcher.h
)

set(SOURCE
    Bank.cpp
    Components/cardcomponent.cpp
    Components/pinverificationcomponent.cpp
    Components/atm_actioncomponent.cpp
    Components/insufficientmoneycomponent.cpp
    atm_dispatcher.cpp
)

set(TARGET_GTEST

)

# TESTS
set(GTEST_LIBRARY "$ENV{GTEST_LIBRARY}")
set(GTEST_INCLUDE_DIR "$ENV{GTEST_INCLUDE_DIR}")
set(GTEST_MAIN_LIBRARY "$ENV{GTEST_MAIN_LIBRARY}")
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_executable(${PROJECT_NAME} main.cpp ${HEADER} ${SOURCE})


add_executable(runUnitTests ${TARGET_GTEST} ${SOURCE})
target_link_libraries(runUnitTests ${GTEST_LIBRARY} ${GTEST_MAIN_LIBRARY})
