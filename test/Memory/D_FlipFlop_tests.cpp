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

TEST(D_FlipFlop_TESTS, D_FlipFlop__DataInput_DISABLED__enableInput_ON___OutputQ_DISABLEDx__Test)
{
    // 1. Setup

    D_FlipFlop* myD_FlipFlop = new D_FlipFlop();

    // 2. Code

    myD_FlipFlop->setDataInput(LogicState::DISABLED);
    myD_FlipFlop->setEnableInput(LogicState::ON);


    LogicState::eLogicState expected = LogicState::DISABLED;
    auto actual = myD_FlipFlop->answer();

    // 3. Test

    EXPECT_EQ(actual, expected);
}
