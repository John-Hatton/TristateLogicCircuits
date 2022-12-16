//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/AndGate.cpp"

TEST(AndGate_TESTS, AndGate_InputX_DISABLED__InputY_DISABLED__OutputDISABLED_Test)
{
    // 1. Setup

    AndGate* myAndGate = new AndGate();

    // 2. Code

    myAndGate->setInputX(LogicState::DISABLED);
    myAndGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(AndGate_TESTS, AndGate_InputX_DISABLED__InputY_ON__OutputDISABLED_Test)
{
    // 1. Setup

    AndGate* myAndGate = new AndGate();

    // 2. Code

    myAndGate->setInputX(LogicState::DISABLED);
    myAndGate->setInputY(LogicState::ON);

    auto expected = LogicState::DISABLED;
    auto actual = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(AndGate_TESTS, AndGate_InputX_DISABLED__InputY_OFF__OutputDISABLED_Test)
{
    // 1. Setup

    AndGate* myAndGate = new AndGate();

    // 2. Code

    myAndGate->setInputX(LogicState::DISABLED);
    myAndGate->setInputY(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(AndGate_TESTS, AndGate_InputX_OFF__InputY_OFF__OutputDISABLED_Test)
{
    // 1. Setup

    AndGate* myAndGate = new AndGate();

    // 2. Code

    myAndGate->setInputX(LogicState::OFF);
    myAndGate->setInputY(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}


TEST(AndGate_TESTS, AndGate_InputX_OFF__InputY_ON__OutputDISABLED_Test)
{
    // 1. Setup

    AndGate* myAndGate = new AndGate();

    // 2. Code

    myAndGate->setInputX(LogicState::OFF);
    myAndGate->setInputY(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(AndGate_TESTS, AndGate_InputX_ON__InputY_ON__OutputDISABLED_Test)
{
    // 1. Setup

    AndGate* myAndGate = new AndGate();

    // 2. Code

    myAndGate->setInputX(LogicState::ON);
    myAndGate->setInputY(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myAndGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

