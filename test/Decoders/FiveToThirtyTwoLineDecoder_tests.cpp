//
// Created by physiker on 12/17/2022.
//

#include <gtest/gtest.h>

#include "../../source/Decoders/FiveToThirtyTwoLineDecoder.cpp"

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

TEST(FiveToThirtyTwoLineDecoder_TESTS, FiveToThirtyTwoLineDecoder___inputs_TFFFF___Enable_ON__Output___F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F_T_F_F_F_F_F_F_F_F_F_F_F_F_F_F_F__Test)
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