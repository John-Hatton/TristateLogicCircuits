//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/TestGate.cpp"

TEST(TestGate_TESTS, TestGate_Input_Output_Test0)
{
    // 1. Setup

    TestGate* myTestGate = new TestGate();

    // 2. Code

    myTestGate->setTestInput0(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myTestGate->fooBar();

    // 3. Test

    EXPECT_EQ(actual, expected);
}


TEST(TestGate_TESTS, TestGate_Input_Output_Test1)
{
    // 1. Setup

    TestGate* myTestGate = new TestGate();

    // 2. Code

    myTestGate->setTestInput0(LogicState::ON);
    myTestGate->setTestInput0(LogicState::DISABLED);

    auto expected = LogicState::DISABLED;
    auto actual = myTestGate->fooBar();

    // 3. Test

    EXPECT_EQ(actual, expected);
}