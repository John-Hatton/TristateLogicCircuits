//
// Created by physiker on 3/18/2023.
//

#include <gtest/gtest.h>

#include "../../source/Memory/SIPO_Register.cpp"

TEST(SIPO_Register_TESTS, SIPO_Register__Initialization_Test1)
{
    // 1. Setup

    SIPO_Register* mySIPO_Register = new SIPO_Register();

    // 2. Code

    mySIPO_Register->setSerialDataInput(LogicState::ON);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);



    std::vector<LogicState::eLogicState> expected = {LogicState::DISABLED, LogicState::DISABLED,LogicState::DISABLED, LogicState::DISABLED };
    auto actual = mySIPO_Register->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}


//

TEST(SIPO_Register_TESTS, SIPO_Register__QA_QH_outputs_disable)
{
    // 1. Setup

    SIPO_Register* mySIPO_Register = new SIPO_Register();

    // 2. Code

    mySIPO_Register->setSerialDataInput(LogicState::ON);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);
    mySIPO_Register->setInvOutputEnableInput(LogicState::ON);




    std::vector<LogicState::eLogicState> expected = {
            LogicState::DISABLED, LogicState::DISABLED,LogicState::DISABLED,LogicState::DISABLED,
            LogicState::DISABLED, LogicState::DISABLED,LogicState::DISABLED,LogicState::DISABLED};
    auto actual = mySIPO_Register->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}

TEST(SIPO_Register_TESTS, SIPO_Register__DATASHEET_Test) {
    // 1. Setup

    SIPO_Register *mySIPO_Register = new SIPO_Register();

    // 2. Code

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setInvOutputEnableInput(LogicState::OFF); // Only need once

    mySIPO_Register->currentState(); // one-half clock pulse

    mySIPO_Register->setSerialDataInput(LogicState::ON); // insignificant
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState(); // one-full clock pulse ... etc

    mySIPO_Register->setSerialDataInput(LogicState::ON);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState();

    // R-Clock pulses begin .... ie, one bit saved. YAY!

    // QA

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);

    mySIPO_Register->currentState();

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);


    // By this point, the clock goes high, but we've already changed the value of the q-output
    // of the first d_flip_flop to false... so when we try to store the bit that was in dflA,
    // i.e. shift the bit over one, it has already been canceled out, so a 0 will be shifted.

    mySIPO_Register->currentState();



    // QB

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);

    mySIPO_Register->currentState();

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState();

    // QC

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);

    mySIPO_Register->currentState();

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState();


    // QD

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);

    mySIPO_Register->currentState();

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState();

    // QE

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);

    mySIPO_Register->currentState();

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState();

    // QF

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);

    mySIPO_Register->currentState();

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState();

    // QG

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);

    mySIPO_Register->currentState();

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState();

    // QH

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::OFF);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::ON);

    mySIPO_Register->currentState();

    mySIPO_Register->setSerialDataInput(LogicState::OFF);
    mySIPO_Register->setShiftRegisterClockInput(LogicState::ON);
    mySIPO_Register->setStorageRegisterClockInput(LogicState::OFF);

    mySIPO_Register->currentState();



    std::vector<LogicState::eLogicState> expected = {
            LogicState::DISABLED, LogicState::DISABLED, LogicState::DISABLED, LogicState::DISABLED,
            LogicState::DISABLED, LogicState::DISABLED, LogicState::DISABLED, LogicState::DISABLED};
    auto actual = mySIPO_Register->currentState();

    // 3. Test

    EXPECT_EQ(actual, expected);
}