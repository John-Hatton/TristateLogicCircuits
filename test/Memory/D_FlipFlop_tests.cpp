//
// Created by physiker on 12/15/2022.
//

#include <gtest/gtest.h>

#include "../../source/Memory/D_FlipFlop.cpp"

TEST(D_FlipFlop_TESTS, D_FlipFlop__DataInput_OFF__enableInput_OFF___OutputQ_OFF__Test)
{
    // 1. Setup

    D_FlipFlop* myD_FlipFlop = new D_FlipFlop();

    // 2. Code

    myD_FlipFlop->setDataInput(LogicState::OFF);
    myD_FlipFlop->setEnableInput(LogicState::OFF);


    LogicState::eLogicState expected = LogicState::OFF;
    auto actual = myD_FlipFlop->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(D_FlipFlop_TESTS, D_FlipFlop__DataInput_ON__enableInput_OFF___OutputQ_OFF__Test)
{
    // 1. Setup

    D_FlipFlop* myD_FlipFlop = new D_FlipFlop();

    // 2. Code

    myD_FlipFlop->setDataInput(LogicState::ON);
    myD_FlipFlop->setEnableInput(LogicState::OFF);


    LogicState::eLogicState expected = LogicState::OFF;
    auto actual = myD_FlipFlop->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(D_FlipFlop_TESTS, D_FlipFlop__DataInput_ON__enableInput_ON___OutputQ_ON__Test)
{
    // 1. Setup

    D_FlipFlop* myD_FlipFlop = new D_FlipFlop();

    // 2. Code

    myD_FlipFlop->setDataInput(LogicState::ON);
    myD_FlipFlop->setEnableInput(LogicState::ON);


    LogicState::eLogicState expected = LogicState::ON;
    auto actual = myD_FlipFlop->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(D_FlipFlop_TESTS, D_FlipFlop__DataInput_OFF__enableInput_ON_then_DISABLED___OutputQ_DISABLED__Test)
{
    // 1. Setup

    D_FlipFlop* myD_FlipFlop = new D_FlipFlop();

    // 2. Code

    myD_FlipFlop->setDataInput(LogicState::OFF);
    myD_FlipFlop->setEnableInput(LogicState::ON);


    LogicState::eLogicState expected = LogicState::OFF;
    auto actual = myD_FlipFlop->answer(); // FCN Call updates internal variables

    myD_FlipFlop->setEnableInput(LogicState::DISABLED); // Change state of Enable to see if that has any impact
    actual = myD_FlipFlop->answer(); // Call FCN again, to mimic real inputs of D_FlipFlop (mit VierBitRAM z.B.)

    // 3. Test

    EXPECT_EQ(actual, expected); // IT WORKS!!!
}
