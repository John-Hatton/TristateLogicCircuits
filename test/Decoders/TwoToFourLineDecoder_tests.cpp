//
// Created by physiker on 12/16/2022.
//

#include <gtest/gtest.h>

#include "../../source/Decoders/TwoToFourLineDecoder.cpp"

TEST(TwoToFourLineDecoder_TESTS, TwoToFourLineDecoder_InputBitZero_OFF__InputBitOne_OFF__Enable_ON__Output__F_F_F_T__Test)
{
// 1. Setup

    TwoToFourLineDecoder* myTwoToFourLineDecoder = new TwoToFourLineDecoder();

// 2. Code

    myTwoToFourLineDecoder->setInputBitZero(LogicState::OFF);
    myTwoToFourLineDecoder->setInputBitOne(LogicState::OFF);
    myTwoToFourLineDecoder->setEnableInput(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::OFF,LogicState::ON};
    auto actual = myTwoToFourLineDecoder->currentState();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TwoToFourLineDecoder_TESTS, TwoToFourLineDecoder_InputBitZero_ON__InputBitOne_OFF__Enable_ON__Output__F_F_T_F__Test)
{
// 1. Setup

    TwoToFourLineDecoder* myTwoToFourLineDecoder = new TwoToFourLineDecoder();

// 2. Code

    myTwoToFourLineDecoder->setInputBitZero(LogicState::ON);
    myTwoToFourLineDecoder->setInputBitOne(LogicState::OFF);
    myTwoToFourLineDecoder->setEnableInput(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::OFF,LogicState::ON,LogicState::OFF};
    auto actual = myTwoToFourLineDecoder->currentState();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TwoToFourLineDecoder_TESTS, TwoToFourLineDecoder_InputBitZero_OFF__InputBitOne_ON__Enable_ON__Output__F_T_F_F__Test)
{
// 1. Setup

    TwoToFourLineDecoder* myTwoToFourLineDecoder = new TwoToFourLineDecoder();

// 2. Code

    myTwoToFourLineDecoder->setInputBitZero(LogicState::OFF);
    myTwoToFourLineDecoder->setInputBitOne(LogicState::ON);
    myTwoToFourLineDecoder->setEnableInput(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::OFF,LogicState::ON,LogicState::OFF,LogicState::OFF};
    auto actual = myTwoToFourLineDecoder->currentState();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TwoToFourLineDecoder_TESTS, TwoToFourLineDecoder_InputBitZero_ON__InputBitOne_ON__Enable_ON__Output__T_F_F_F__Test)
{
// 1. Setup

    TwoToFourLineDecoder* myTwoToFourLineDecoder = new TwoToFourLineDecoder();

// 2. Code

    myTwoToFourLineDecoder->setInputBitZero(LogicState::ON);
    myTwoToFourLineDecoder->setInputBitOne(LogicState::ON);
    myTwoToFourLineDecoder->setEnableInput(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::ON,LogicState::OFF,LogicState::OFF,LogicState::OFF};
    auto actual = myTwoToFourLineDecoder->currentState();

// 3. Test

    EXPECT_EQ(actual, expected);
}