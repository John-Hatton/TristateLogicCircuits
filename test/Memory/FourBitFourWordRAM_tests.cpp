//
// Created by physiker on 12/16/2022.
//

#include <gtest/gtest.h>

#include "../../source/Memory/FourBitFourWordRAM.cpp"

TEST(FourBitFourWordRAM_TESTS, FourBitFourWordRAM__WE_ON__CS_ON__ADDR0_OFF_ADDR1_OFF____D3_OFF__D2_OFF__D1_OFF__D0_OFF__Output3_DISABLED__Output2_DISABLED__Output1_DISABLED__Output0_DISABLED_Test)
{
    // 1. Setup

    FourBitFourWordRAM* myFourBitFourWordRAM = new FourBitFourWordRAM();

    // 2. Code

    myFourBitFourWordRAM->setWriteEnable(LogicState::ON); // Disables write input
    myFourBitFourWordRAM->setChipSelect(LogicState::ON); // Disables read output

    myFourBitFourWordRAM->setAddr0(LogicState::OFF);
    myFourBitFourWordRAM->setAddr1(LogicState::OFF); // ADDR 00

    myFourBitFourWordRAM->setData0(LogicState::OFF);
    myFourBitFourWordRAM->setData1(LogicState::OFF);
    myFourBitFourWordRAM->setData2(LogicState::OFF);
    myFourBitFourWordRAM->setData3(LogicState::OFF);

    std::vector<LogicState::eLogicState> expected = {LogicState::DISABLED, LogicState::DISABLED,LogicState::DISABLED, LogicState::DISABLED };
    auto actual = myFourBitFourWordRAM->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(FourBitFourWordRAM_TESTS, FourBitFourWordRAM__WE_OFF__CS_OFF__ADDR0_OFF_ADDR1_OFF____D3_OFF__D2_ON__D1_OFF__D0_ON__Output3_OFF__Output2_ON__Output1_OFF__Output0_ON___Test)
{
    // 1. Setup

    FourBitFourWordRAM* myFourBitFourWordRAM = new FourBitFourWordRAM();

    // 2. Code

    myFourBitFourWordRAM->setWriteEnable(LogicState::OFF);
    myFourBitFourWordRAM->setChipSelect(LogicState::OFF);

    myFourBitFourWordRAM->setAddr0(LogicState::OFF);
    myFourBitFourWordRAM->setAddr1(LogicState::OFF); // ADDR 00

    myFourBitFourWordRAM->setData0(LogicState::ON);
    myFourBitFourWordRAM->setData1(LogicState::OFF);
    myFourBitFourWordRAM->setData2(LogicState::ON);
    myFourBitFourWordRAM->setData3(LogicState::OFF);


    std::vector<LogicState::eLogicState> expected = {LogicState::OFF, LogicState::ON,LogicState::OFF, LogicState::ON };
    auto actual = myFourBitFourWordRAM->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}