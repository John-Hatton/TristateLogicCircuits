//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/TriInputAndGate.cpp"

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_DISABLED__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_DISABLED__InputZ_OFF__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_DISABLED__InputZ_ON__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::DISABLED;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_OFF__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_ON__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_DISABLED__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_DISABLED__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_OFF__InputZ_OFF__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_ON__InputZ_ON__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::DISABLED;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}


TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_DISABLED__InputZ_OFF__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_DISABLED__InputZ_ON__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::DISABLED;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_OFF__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_ON__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_DISABLED__InputZ_OFF__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_DISABLED__InputZ_ON__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::DISABLED);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_OFF__InputZ_ON__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_DISABLED__InputY_ON__InputZ_OFF__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::DISABLED);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_ON__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_OFF__InputZ_DISABLED__OutputDISABLED_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::DISABLED);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_OFF__InputZ_OFF__OutputOFF_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_OFF__InputZ_ON__OutputOFF_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_OFF__InputZ_OFF__OutputOFF_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_ON__InputZ_ON__OutputOFF_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_ON__InputZ_OFF__OutputOFF_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_OFF__InputY_ON__InputZ_OFF__OutputOFF_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::OFF);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::OFF);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_OFF__InputZ_ON__OutputOFF_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::OFF);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::OFF;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(TriInputAndGate_TESTS, TriInputAndGate_InputX_ON__InputY_ON__InputZ_ON__OutputON_Test)
{
// 1. Setup

    TriInputAndGate* myTriInputAndGate = new TriInputAndGate();

// 2. Code

    myTriInputAndGate->setInputX(LogicState::ON);
    myTriInputAndGate->setInputY(LogicState::ON);
    myTriInputAndGate->setInputZ(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myTriInputAndGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}