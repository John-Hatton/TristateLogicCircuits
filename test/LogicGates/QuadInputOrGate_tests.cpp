//
// Created by physiker on 12/16/2022.
//

#include <gtest/gtest.h>

#include "../../source/LogicGates/QuadInputOrGate.cpp"

//TTTT
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTTT__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::ON);
    myQuadInputOrGate->setInputD(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TTTF
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTTF__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::ON);
    myQuadInputOrGate->setInputD(LogicState::OFF);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TTTD
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTTD__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::ON);
    myQuadInputOrGate->setInputD(LogicState::DISABLED);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TTFT
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTFT__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::OFF);
    myQuadInputOrGate->setInputD(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TTFF
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTFF__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::OFF);
    myQuadInputOrGate->setInputD(LogicState::OFF);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TTFD
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTFD__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::OFF);
    myQuadInputOrGate->setInputD(LogicState::DISABLED);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TTDT
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTDT__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::DISABLED);
    myQuadInputOrGate->setInputD(LogicState::ON);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TTDF
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTDF__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::DISABLED);
    myQuadInputOrGate->setInputD(LogicState::OFF);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TTDD
TEST(QuadInputOrGate_TESTS, QuadInputOrGate_TTDD__Output_T_Test)
{
// 1. Setup

    QuadInputOrGate* myQuadInputOrGate = new QuadInputOrGate();

// 2. Code

    myQuadInputOrGate->setInputA(LogicState::ON);
    myQuadInputOrGate->setInputB(LogicState::ON);
    myQuadInputOrGate->setInputC(LogicState::DISABLED);
    myQuadInputOrGate->setInputD(LogicState::DISABLED);

    auto expected = LogicState::ON;
    auto actual = myQuadInputOrGate->answer();

// 3. Test

    EXPECT_EQ(actual, expected);
}
//TFTT
//TFTF
//TFTD
//TFFT
//TFFF
//TFFD
//TFDT
//TFDF
//TFDD
//TDTT
//TDTF
//TDTD
//TDFT
//TDFF
//TDFD
//TDDT
//TDDF
//TDDD
//FTTT
//FTTF
//FTTD
//FTFT
//FTFF
//FTFD
//FTDT
//FTDF
//FTDD
//FFTT
//FFTF
//FFTD
//FFFT
//FFFF
//FFFD
//FFDT
//FFDF
//FFDD
//FDTT
//FDTF
//FDTD
//FDFT
//FDFF
//FDFD
//FDDT
//FDDF
//FDDD
//DTTT
//DTTF
//DTTD
//DTFT
//DTFF
//DTFD
//DTDT
//DTDF
//DTDD
//DFTT
//DFTF
//DFTD
//DFFT
//DFFF
//DFFD
//DFDT
//DFDF
//DFDD
//DDTT
//DDTF
//DDTD
//DDFT
//DDFF
//DDFD
//DDDT
//DDDF
//DDDD