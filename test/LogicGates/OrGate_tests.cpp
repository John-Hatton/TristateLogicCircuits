//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/OrGate.cpp"

TEST(OrGate_TESTS, OrGate_InputX_DISABLED__InputY_DISABLED__Output_DISABLED__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::DISABLED);
    myOrGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(OrGate_TESTS, OrGate_InputX_OFF__InputY_DISABLED__Output_DISABLED__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::OFF);
    myOrGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(OrGate_TESTS, OrGate_InputX_DISABLED__InputY_OFF__Output_DISABLED__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::DISABLED);
    myOrGate->setInputY(LogicState::OFF);

    auto expected = LogicState::DISABLED;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(OrGate_TESTS, OrGate_InputX_OFF__InputY_OFF__Output_OFF__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::OFF);
    myOrGate->setInputY(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(OrGate_TESTS, OrGate_InputX_DISABLED__InputY_ON__Output_ON__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::DISABLED);
    myOrGate->setInputY(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(OrGate_TESTS, OrGate_InputX_ON__InputY_DISABLED__Output_ON__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::ON);
    myOrGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::ON;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(OrGate_TESTS, OrGate_InputX_ON__InputY_OFF__Output_ON__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::ON);
    myOrGate->setInputY(LogicState::OFF);

    auto expected = LogicState::ON;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(OrGate_TESTS, OrGate_InputX_OFF__InputY_ON__Output_ON__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::OFF);
    myOrGate->setInputY(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(OrGate_TESTS, OrGate_InputX_ON__InputY_ON__Output_ON__Test)
{
    // 1. Setup

    OrGate* myOrGate = new OrGate();

    // 2. Code

    myOrGate->setInputX(LogicState::ON);
    myOrGate->setInputY(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myOrGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}