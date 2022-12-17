//
// Created by physiker on 12/17/2022.
//

#include <gtest/gtest.h>

#include "../../source/Decoders/FourToSixteenLineDecoder.cpp"

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_OFF_d2_OFF_d1_OFF_d0_OFF___Enable_ON__Output___F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_T__Test)
{
// 1. Setup

FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataB(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataC(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataD(LogicState::OFF);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                 LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                 LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                 LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::ON};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_OFF_d2_OFF_d1_OFF_d0_ON___Enable_ON__Output___F_F_F_F_F_F_F_F_F_F_F_F_F_F_T_F__Test)
{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::ON);
    myFourToSixteenLineDecoder->setDataB(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataC(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataD(LogicState::OFF);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::ON,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_OFF_d2_OFF_d1_ON_d0_OFF___Enable_ON__Output___F_F_F_F_F_F_F_F_F_F_F_F_F_T_F_F__Test)
{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataB(LogicState::ON);
    myFourToSixteenLineDecoder->setDataC(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataD(LogicState::OFF);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::ON,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_OFF_d2_OFF_d1_ON_d0_ON___Enable_ON__Output___F_F_F_F_F_F_F_F_F_F_F_F_T_F_F_F__Test)
{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::ON);
    myFourToSixteenLineDecoder->setDataB(LogicState::ON);
    myFourToSixteenLineDecoder->setDataC(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataD(LogicState::OFF);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_OFF_d2_ON_d1_OFF_d0_OFF___Enable_ON__Output___F_F_F_F_F_F_F_F_F_F_F_T_F_F_F_F__Test)
{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataB(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataC(LogicState::ON);
    myFourToSixteenLineDecoder->setDataD(LogicState::OFF);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_OFF_d2_ON_d1_OFF_d0_ON___Enable_ON__Output___F_F_F_F_F_F_F_F_F_F_T_F_F_F_F_F__Test)
{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::ON);
    myFourToSixteenLineDecoder->setDataB(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataC(LogicState::ON);
    myFourToSixteenLineDecoder->setDataD(LogicState::OFF);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_OFF_d2_ON_d1_ON_d0_OFF___Enable_ON__Output___F_F_F_F_F_F_F_F_F_T_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataB(LogicState::ON);
    myFourToSixteenLineDecoder->setDataC(LogicState::ON);
    myFourToSixteenLineDecoder->setDataD(LogicState::OFF);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::ON,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_OFF_d2_ON_d1_ON_d0_ON___Enable_ON__Output___F_F_F_F_F_F_F_F_T_F_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::ON);
    myFourToSixteenLineDecoder->setDataB(LogicState::ON);
    myFourToSixteenLineDecoder->setDataC(LogicState::ON);
    myFourToSixteenLineDecoder->setDataD(LogicState::OFF);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::ON,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_ON_d2_OFF_d1_OFF_d0_OFF___Enable_ON__Output___F_F_F_F_F_F_F_T_F_F_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataB(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataC(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataD(LogicState::ON);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_ON_d2_OFF_d1_OFF_d0_ON___Enable_ON__Output___F_F_F_F_F_F_T_F_F_F_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::ON);
    myFourToSixteenLineDecoder->setDataB(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataC(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataD(LogicState::ON);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_ON_d2_OFF_d1_ON_d0_OFF___Enable_ON__Output___F_F_F_F_F_T_F_F_F_F_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataB(LogicState::ON);
    myFourToSixteenLineDecoder->setDataC(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataD(LogicState::ON);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::ON,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_ON_d2_ON_d1_OFF_d0_OFF___Enable_ON__Output___F_F_F_T_F_F_F_F_F_F_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataB(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataC(LogicState::ON);
    myFourToSixteenLineDecoder->setDataD(LogicState::ON);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::ON,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_ON_d2_ON_d1_OFF_d0_ON___Enable_ON__Output___F_F_T_F_F_F_F_F_F_F_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::ON);
    myFourToSixteenLineDecoder->setDataB(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataC(LogicState::ON);
    myFourToSixteenLineDecoder->setDataD(LogicState::ON);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::ON, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_ON_d2_ON_d1_ON_d0_OFF___Enable_ON__Output___F_T_F_F_F_F_F_F_F_F_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::OFF);
    myFourToSixteenLineDecoder->setDataB(LogicState::ON);
    myFourToSixteenLineDecoder->setDataC(LogicState::ON);
    myFourToSixteenLineDecoder->setDataD(LogicState::ON);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::ON,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}

TEST(FourToSixteenLineDecoder_TESTS, FourToSixteenLineDecoder___d3_ON_d2_ON_d1_ON_d0_ON___Enable_ON__Output___T_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F__Test)

{
// 1. Setup

    FourToSixteenLineDecoder* myFourToSixteenLineDecoder = new FourToSixteenLineDecoder();

// 2. Code

    myFourToSixteenLineDecoder->setDataA(LogicState::ON);
    myFourToSixteenLineDecoder->setDataB(LogicState::ON);
    myFourToSixteenLineDecoder->setDataC(LogicState::ON);
    myFourToSixteenLineDecoder->setDataD(LogicState::ON);

    myFourToSixteenLineDecoder->setWriteEnable(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::ON,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF, LogicState::OFF,
                                                     LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::OFF};

    auto actual = myFourToSixteenLineDecoder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);

}