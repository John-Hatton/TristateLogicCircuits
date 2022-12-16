//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/Adders/FullAdder.cpp"

TEST(FullAdder_TESTS, FullAdder_InputX_OFF__InputY_OFF__CarryIn_OFF____Output_F_F__Test)
{
    // 1. Setup

    FullAdder* myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(LogicState::OFF);
    myFullAdder->setInputY(LogicState::OFF);
    myFullAdder->setCarryIn(LogicState::OFF);


    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF};
    auto actual = myFullAdder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(FullAdder_TESTS, FullAdder_InputX_ON__InputY_OFF__CarryIn_OFF____Output__F_T__Test)
{
    // 1. Setup

    FullAdder* myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(LogicState::ON);
    myFullAdder->setInputY(LogicState::OFF);
    myFullAdder->setCarryIn(LogicState::OFF);


    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::ON};
    auto actual = myFullAdder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(FullAdder_TESTS, FullAdder_InputX_OFF__InputY_ON__CarryIn_OFF____Output_F_T__Test)
{
    // 1. Setup

    FullAdder* myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(LogicState::OFF);
    myFullAdder->setInputY(LogicState::ON);
    myFullAdder->setCarryIn(LogicState::OFF);


    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::ON};
    auto actual = myFullAdder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(FullAdder_TESTS, FullAdder_InputX_ON__InputY_ON__CarryIn_OFF____Output_T_F__Test)
{
    // 1. Setup

    FullAdder* myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(LogicState::ON);
    myFullAdder->setInputY(LogicState::ON);
    myFullAdder->setCarryIn(LogicState::OFF);


    std::vector<LogicState::eLogicState> expected = {LogicState::ON, LogicState::OFF};
    auto actual = myFullAdder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(FullAdder_TESTS, FullAdder_InputX_ON__InputY_ON__CarryIn_ON____Output_T_T__Test)
{
    // 1. Setup

    FullAdder* myFullAdder = new FullAdder();

    // 2. Code

    myFullAdder->setInputX(LogicState::ON);
    myFullAdder->setInputY(LogicState::ON);
    myFullAdder->setCarryIn(LogicState::ON);


    std::vector<LogicState::eLogicState> expected = {LogicState::ON, LogicState::ON};
    auto actual = myFullAdder->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}