//
// Created by physiker on 12/17/2022.
//

#include <gtest/gtest.h>

#include "../../source/Decoders/ThreeToEightLineDecoder.cpp"

TEST(ThreeToEightLineDecoder_TESTS, ThreeToEightLineDecoder___d2_OFF_d1_OFF_d0_OFF___Enable_ON__Output___F_F_F_F_F_F_F_T__Test)
{
// 1. Setup

    ThreeToEightLineDecoder* myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

// 2. Code

    myThreeToEightLineDecoder->setInput0(LogicState::OFF);
    myThreeToEightLineDecoder->setInput1(LogicState::OFF);
    myThreeToEightLineDecoder->setInput2(LogicState::OFF);

    myThreeToEightLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::ON};

    auto actual = myThreeToEightLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(ThreeToEightLineDecoder_TESTS, ThreeToEightLineDecoder___d2_OFF_d1_OFF_d0_ON___Enable_ON__Output___F_F_F_F_F_F_T_F__Test)
{
// 1. Setup

    ThreeToEightLineDecoder* myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

// 2. Code

    myThreeToEightLineDecoder->setInput0(LogicState::ON);
    myThreeToEightLineDecoder->setInput1(LogicState::OFF);
    myThreeToEightLineDecoder->setInput2(LogicState::OFF);

    myThreeToEightLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::ON,LogicState::OFF};

    auto actual = myThreeToEightLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(ThreeToEightLineDecoder_TESTS, ThreeToEightLineDecoder___d2_OFF_d1_ON_d0_OFF___Enable_ON__Output___F_F_F_F_F_T_F_F__Test)
{
// 1. Setup

    ThreeToEightLineDecoder* myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

// 2. Code

    myThreeToEightLineDecoder->setInput0(LogicState::OFF);
    myThreeToEightLineDecoder->setInput1(LogicState::ON);
    myThreeToEightLineDecoder->setInput2(LogicState::OFF);

    myThreeToEightLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::ON,LogicState::OFF,LogicState::OFF};

    auto actual = myThreeToEightLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(ThreeToEightLineDecoder_TESTS, ThreeToEightLineDecoder___d2_OFF_d1_ON_d0_ON___Enable_ON__Output___F_F_F_F_T_F_F_F__Test)
{
// 1. Setup

    ThreeToEightLineDecoder* myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

// 2. Code

    myThreeToEightLineDecoder->setInput0(LogicState::ON);
    myThreeToEightLineDecoder->setInput1(LogicState::ON);
    myThreeToEightLineDecoder->setInput2(LogicState::OFF);

    myThreeToEightLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myThreeToEightLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(ThreeToEightLineDecoder_TESTS, ThreeToEightLineDecoder___d2_ON_d1_OFF_d0_OFF___Enable_ON__Output___F_F_F_T_F_F_F_F__Test)
{
// 1. Setup

    ThreeToEightLineDecoder* myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

// 2. Code

    myThreeToEightLineDecoder->setInput0(LogicState::OFF);
    myThreeToEightLineDecoder->setInput1(LogicState::OFF);
    myThreeToEightLineDecoder->setInput2(LogicState::ON);

    myThreeToEightLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myThreeToEightLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(ThreeToEightLineDecoder_TESTS, ThreeToEightLineDecoder___d2_ON_d1_OFF_d0_ON___Enable_ON__Output___F_F_T_F_F_F_F_F__Test)
{
// 1. Setup

    ThreeToEightLineDecoder* myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

// 2. Code

    myThreeToEightLineDecoder->setInput0(LogicState::ON);
    myThreeToEightLineDecoder->setInput1(LogicState::OFF);
    myThreeToEightLineDecoder->setInput2(LogicState::ON);

    myThreeToEightLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myThreeToEightLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(ThreeToEightLineDecoder_TESTS, ThreeToEightLineDecoder___d2_ON_d1_ON_d0_OFF___Enable_ON__Output___F_T_F_F_F_F_F_F__Test)
{
// 1. Setup

    ThreeToEightLineDecoder* myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

// 2. Code

    myThreeToEightLineDecoder->setInput0(LogicState::OFF);
    myThreeToEightLineDecoder->setInput1(LogicState::ON);
    myThreeToEightLineDecoder->setInput2(LogicState::ON);

    myThreeToEightLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::ON,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myThreeToEightLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(ThreeToEightLineDecoder_TESTS, ThreeToEightLineDecoder___d2_ON_d1_ON_d0_ON___Enable_ON__Output___T_F_F_F_F_F_F_F__Test)
{
// 1. Setup

    ThreeToEightLineDecoder* myThreeToEightLineDecoder = new ThreeToEightLineDecoder();

// 2. Code

    myThreeToEightLineDecoder->setInput0(LogicState::ON);
    myThreeToEightLineDecoder->setInput1(LogicState::ON);
    myThreeToEightLineDecoder->setInput2(LogicState::ON);

    myThreeToEightLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::ON,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myThreeToEightLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}