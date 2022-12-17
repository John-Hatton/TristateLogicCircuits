project(Google_Tests)

# adding the Google_Tests_run target
add_executable(TristateLogicCircuits_Tests
        LogicGates/TriStateBufferGate_tests.cpp
        LogicGates/TestGate_tests.cpp
        LogicGates/AndGate_tests.cpp
        LogicGates/OrGate_tests.cpp
        LogicGates/XorGate_tests.cpp
        Adders/FullAdder_tests.cpp
        LogicGates/NorGate_tests.cpp
        LogicGates/NotGate_tests.cpp
        Memory/D_FlipFlop_tests.cpp
        LogicGates/TriInputAndGate_tests.cpp Decoders/TwoToFourLineDecoder_tests.cpp LogicGates/QuadInputOrGate_tests.cpp Memory/FourBitFourWordRAM_tests.cpp)

target_link_libraries(TristateLogicCircuits_Tests TristateLogicCircuits gtest gtest_main)