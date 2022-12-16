//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/NotGate.cpp"

TEST(NotGate_TESTS, NotGate_Input_DISABLED__Output_DISABLED__Test)
{
// 1. Setup

NotGate* myNotGate = new NotGate();

// 2. Code

    myNotGate->setInput(LogicState::DISABLED);

auto expected = LogicState::DISABLED;
auto actual = myNotGate->answer();

// 3. Test

EXPECT_EQ(actual, expected);
}

TEST(NotGate_TESTS, NotGate_Input_OFF__Output_ON__Test)
{
// 1. Setup

    NotGate* myNotGate = new NotGate();

// 2. Code

    myNotGate->setInput(LogicState::OFF);

    auto expected = LogicState::ON;
    auto actual = myNotGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NotGate_TESTS, NotGate_Input_ON__Output_OFF__Test)
{
// 1. Setup

    NotGate* myNotGate = new NotGate();

// 2. Code

    myNotGate->setInput(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myNotGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}