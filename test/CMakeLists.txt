project(Google_Tests)

# adding the Google_Tests_run target
add_executable(TristateLogicCircuits_Tests
        LogicGates/TriStateBufferGate_tests.cpp
        LogicGates/TestGate_tests.cpp LogicGates/AndGate_tests.cpp LogicGates/OrGate_tests.cpp)

target_link_libraries(TristateLogicCircuits_Tests TristateLogicCircuits gtest gtest_main)