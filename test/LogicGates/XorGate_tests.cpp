//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/XorGate.cpp"

TEST(XorGate_TESTS, XorGate_InputX_DISABLED__InputY_DISABLED__Output_DISABLED__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::DISABLED);
    myXorGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(XorGate_TESTS, XorGate_InputX_DISABLED__InputY_OFF__Output_ON__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::OFF);
    myXorGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::ON;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(XorGate_TESTS, XorGate_InputX_OFF__InputY_DISABLED__Output_ON__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::DISABLED);
    myXorGate->setInputY(LogicState::OFF);

    auto expected = LogicState::ON;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(XorGate_TESTS, XorGate_InputX_DISABLED__InputY_ON__Output_DISABLED__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::DISABLED);
    myXorGate->setInputY(LogicState::ON);

    auto expected = LogicState::DISABLED;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(XorGate_TESTS, XorGate_InputX_ON__InputY_DISABLED__Output_DISABLED__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::ON);
    myXorGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(XorGate_TESTS, XorGate_InputX_OFF__InputY_OFF__Output_ON__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::OFF);
    myXorGate->setInputY(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(XorGate_TESTS, XorGate_InputX_OFF__InputY_ON__Output_ON__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::OFF);
    myXorGate->setInputY(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(XorGate_TESTS, XorGate_InputX_ON__InputY_OFF__Output_ON__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::ON);
    myXorGate->setInputY(LogicState::OFF);

    auto expected = LogicState::ON;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(XorGate_TESTS, XorGate_InputX_ON__InputY_ON__Output_OFF__Test)
{
    // 1. Setup

    XorGate* myXorGate = new XorGate();

    // 2. Code

    myXorGate->setInputX(LogicState::ON);
    myXorGate->setInputY(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myXorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}