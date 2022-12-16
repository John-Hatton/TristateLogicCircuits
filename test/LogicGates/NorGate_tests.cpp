//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/NorGate.cpp"

TEST(NorGate_TESTS, NorGate_InputX_DISABLED__InputY_DISABLED__Output_DISABLED__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::DISABLED);
    myNorGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NorGate_TESTS, NorGate_InputX_DISABLED__InputY_OFF__Output_DISABLED__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::DISABLED);
    myNorGate->setInputY(LogicState::OFF);

    auto expected = LogicState::DISABLED;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NorGate_TESTS, NorGate_InputX_OFF__InputY_DISABLED__Output_DISABLED__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::OFF);
    myNorGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NorGate_TESTS, NorGate_InputX_DISABLED__InputY_ON__Output_DISABLED__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::DISABLED);
    myNorGate->setInputY(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NorGate_TESTS, NorGate_InputX_ON__InputY_DISABLED__Output_DISABLED__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::ON);
    myNorGate->setInputY(LogicState::DISABLED);

    auto expected = LogicState::OFF;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NorGate_TESTS, NorGate_InputX_OFF__InputY_OFF__Output_ON__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::OFF);
    myNorGate->setInputY(LogicState::OFF);

    auto expected = LogicState::ON;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NorGate_TESTS, NorGate_InputX_ON__InputY_OFF__Output_OFF__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::ON);
    myNorGate->setInputY(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NorGate_TESTS, NorGate_InputX_OFF__InputY_ON__Output_OFF__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::OFF);
    myNorGate->setInputY(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(NorGate_TESTS, NorGate_InputX_ON__InputY_ON__Output_OFF__Test)
{
    // 1. Setup

    NorGate* myNorGate = new NorGate();

    // 2. Code

    myNorGate->setInputX(LogicState::ON);
    myNorGate->setInputY(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myNorGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}