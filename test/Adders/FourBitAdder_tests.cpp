//
// Created by John on 10/8/2023.
//
#include <gtest/gtest.h>
#include <Adders/FourBitAdder.h>

TEST(FourBitAdder_TESTS, FourBitAdder_Input_x0001__y0000____Output_00001__Test)
{
    // 1. Setup

    FourBitAdder* myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputBitX0(LogicState::ON);
    myFourBitAdder->setInputBitX1(LogicState::OFF);
    myFourBitAdder->setInputBitX2(LogicState::OFF);
    myFourBitAdder->setInputBitX3(LogicState::OFF);

    myFourBitAdder->setInputBitY0(LogicState::OFF);
    myFourBitAdder->setInputBitY1(LogicState::OFF);
    myFourBitAdder->setInputBitY2(LogicState::OFF);
    myFourBitAdder->setInputBitY3(LogicState::OFF);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON};
    auto actual = myFourBitAdder->CurrentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(FourBitAdder_TESTS, FourBitAdder_Input_x0000__y0001____Output_00001__Test)
{
    // 1. Setup

    FourBitAdder* myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputBitX0(LogicState::OFF);
    myFourBitAdder->setInputBitX1(LogicState::OFF);
    myFourBitAdder->setInputBitX2(LogicState::OFF);
    myFourBitAdder->setInputBitX3(LogicState::OFF);

    myFourBitAdder->setInputBitY0(LogicState::ON);
    myFourBitAdder->setInputBitY1(LogicState::OFF);
    myFourBitAdder->setInputBitY2(LogicState::OFF);
    myFourBitAdder->setInputBitY3(LogicState::OFF);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON};
    auto actual = myFourBitAdder->CurrentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(FourBitAdder_TESTS, FourBitAdder_Input_x0001__y0001____Output_00010__Test)
{
    // 1. Setup

    FourBitAdder* myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputBitX0(LogicState::ON);
    myFourBitAdder->setInputBitX1(LogicState::OFF);
    myFourBitAdder->setInputBitX2(LogicState::OFF);
    myFourBitAdder->setInputBitX3(LogicState::OFF);

    myFourBitAdder->setInputBitY0(LogicState::ON);
    myFourBitAdder->setInputBitY1(LogicState::OFF);
    myFourBitAdder->setInputBitY2(LogicState::OFF);
    myFourBitAdder->setInputBitY3(LogicState::OFF);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::OFF};
    auto actual = myFourBitAdder->CurrentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(FourBitAdder_TESTS, FourBitAdder_Input_x0001__y0010____Output_00011__Test)
{
    // 1. Setup

    FourBitAdder* myFourBitAdder = new FourBitAdder();

    // 2. Code

    myFourBitAdder->setInputBitX0(LogicState::ON);
    myFourBitAdder->setInputBitX1(LogicState::OFF);
    myFourBitAdder->setInputBitX2(LogicState::OFF);
    myFourBitAdder->setInputBitX3(LogicState::OFF);

    myFourBitAdder->setInputBitY0(LogicState::OFF);
    myFourBitAdder->setInputBitY1(LogicState::ON);
    myFourBitAdder->setInputBitY2(LogicState::OFF);
    myFourBitAdder->setInputBitY3(LogicState::OFF);

    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::OFF, LogicState::OFF, LogicState::ON, LogicState::ON};
    auto actual = myFourBitAdder->CurrentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}