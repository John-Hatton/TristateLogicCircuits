//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/TriStateBufferGate.cpp"

TEST(TriStateBufferGate_TESTS, TriStateBufferGate__dataInput_ON__enableInput_ON__Output_DISABLED_Test0)
{
    // 1. Setup

    TriStateBufferGate* myTriStateBufferGate = new TriStateBufferGate();

    // 2. Code

    myTriStateBufferGate->setDataInput(LogicState::ON);
    myTriStateBufferGate->setEnableInput(LogicState::ON); // Should make the TriStateBufferGate act as a resistor...

    auto expected = LogicState::DISABLED;
    auto actual = myTriStateBufferGate->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}