//
// Created by physiker on 12/17/2022.
//

#include <gtest/gtest.h>

#include "../../source/Decoders/FiveToThirtyTwoLineDecoder.cpp"

// FIRST
TEST(FiveToThirtyTwoLineDecoder_TESTS, FiveToThirtyTwoLineDecoder___inputs_FFFFF___Enable_ON__Output___F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_T__Test)
{
    // 1. Setup

    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // 2. Code

    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_1_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 00001
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_2_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 00010
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::ON, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_3_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 00011
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 4
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_4_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 00100
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 5
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_5_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 00101
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 6
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_6_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 00110
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::ON, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 7
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_7_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 00111
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 8
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_8_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 01000
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 9
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_9_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 01001
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 10
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_10_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 01010
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::ON, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 11
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_11_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 01011
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Test case for output 12
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_12_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 01100
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_13_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 01101
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_14_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 01110
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::ON, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_15_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 01111
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::OFF);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 16
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_16)
{
    // 1. Setup

    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // 2. Code

    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

// Output Test 17
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_17_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 10001
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 18
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_18_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 10010
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::ON, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 19
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_19_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 10011
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 20
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_20_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 10100
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 21
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_21_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 10101
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 22
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_22_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 10110
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::ON, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 23
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_23_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 10111
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 24
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_24_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 11000
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 25
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_25_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 11001
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 26
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_26_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 11010
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::ON, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 27
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_27_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 11011
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 28
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_28_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 11100
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 29
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_29_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 11101
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 30
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_30_Test) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 11110
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::OFF);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::ON, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}

// Output Test 31 (0-31 possible...)
TEST(FiveToThirtyTwoLineDecoder_TESTS, Output_31_Test_LAST) {
    FiveToThirtyTwoLineDecoder* myFiveToThirtyTwoLineDecoder = new FiveToThirtyTwoLineDecoder();

    // Set input to 11110
    myFiveToThirtyTwoLineDecoder->setInput0(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput1(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput2(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput3(LogicState::ON);
    myFiveToThirtyTwoLineDecoder->setInput4(LogicState::ON);

    myFiveToThirtyTwoLineDecoder->setWriteEnable(LogicState::ON);

    std::vector<LogicState::eLogicState> expected = {LogicState::ON, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF};

    auto actual = myFiveToThirtyTwoLineDecoder->currentState();

    EXPECT_EQ(actual, expected);
}