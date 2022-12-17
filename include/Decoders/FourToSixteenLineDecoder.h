//
// Created by snake on 12/17/2022.
//
#pragma once
#include "TwoToFourLineDecoder.h"

class FourToSixteenLineDecoder {

private:

    LogicState::eLogicState dataA;
    LogicState::eLogicState dataB;
    LogicState::eLogicState dataC;
    LogicState::eLogicState dataD;

    LogicState::eLogicState writeEnable;


    TwoToFourLineDecoder* enableDecoder;

    TwoToFourLineDecoder* decoder0;
    TwoToFourLineDecoder* decoder1;
    TwoToFourLineDecoder* decoder2;
    TwoToFourLineDecoder* decoder3;

    LogicState::eLogicState output0;

    LogicState::eLogicState output1;
    LogicState::eLogicState output2;
    LogicState::eLogicState output3;
    LogicState::eLogicState output4;
    LogicState::eLogicState output5;
    LogicState::eLogicState output6;
    LogicState::eLogicState output7;
    LogicState::eLogicState output8;
    LogicState::eLogicState output9;
    LogicState::eLogicState output10;
    LogicState::eLogicState output11;
    LogicState::eLogicState output12;
    LogicState::eLogicState output13;
    LogicState::eLogicState output14;
    LogicState::eLogicState output15;


public:

    FourToSixteenLineDecoder();

    LogicState::eLogicState getDataA() const;

    void setDataA(LogicState::eLogicState dataA);

    LogicState::eLogicState getDataB() const;

    void setDataB(LogicState::eLogicState dataB);

    LogicState::eLogicState getDataC() const;

    void setDataC(LogicState::eLogicState dataC);

    LogicState::eLogicState getDataD() const;

    void setDataD(LogicState::eLogicState dataD);

    LogicState::eLogicState getWriteEnable() const;

    void setWriteEnable(LogicState::eLogicState writeEnable);

    TwoToFourLineDecoder *getEnableDecoder() const;

    void setEnableDecoder(TwoToFourLineDecoder *enableDecoder);

    TwoToFourLineDecoder *getDecoder0() const;

    void setDecoder0(TwoToFourLineDecoder *decoder0);

    TwoToFourLineDecoder *getDecoder1() const;

    void setDecoder1(TwoToFourLineDecoder *decoder1);

    TwoToFourLineDecoder *getDecoder2() const;

    void setDecoder2(TwoToFourLineDecoder *decoder2);

    TwoToFourLineDecoder *getDecoder3() const;

    void setDecoder3(TwoToFourLineDecoder *decoder3);

    LogicState::eLogicState getOutput0() const;

    void setOutput0(LogicState::eLogicState output0);

    LogicState::eLogicState getOutput1() const;

    void setOutput1(LogicState::eLogicState output1);

    LogicState::eLogicState getOutput2() const;

    void setOutput2(LogicState::eLogicState output2);

    LogicState::eLogicState getOutput3() const;

    void setOutput3(LogicState::eLogicState output3);

    LogicState::eLogicState getOutput4() const;

    void setOutput4(LogicState::eLogicState output4);

    LogicState::eLogicState getOutput5() const;

    void setOutput5(LogicState::eLogicState output5);

    LogicState::eLogicState getOutput6() const;

    void setOutput6(LogicState::eLogicState output6);

    LogicState::eLogicState getOutput7() const;

    void setOutput7(LogicState::eLogicState output7);

    LogicState::eLogicState getOutput8() const;

    void setOutput8(LogicState::eLogicState output8);

    LogicState::eLogicState getOutput9() const;

    void setOutput9(LogicState::eLogicState output9);

    LogicState::eLogicState getOutput10() const;

    void setOutput10(LogicState::eLogicState output10);

    LogicState::eLogicState getOutput11() const;

    void setOutput11(LogicState::eLogicState output11);

    LogicState::eLogicState getOutput12() const;

    void setOutput12(LogicState::eLogicState output12);

    LogicState::eLogicState getOutput13() const;

    void setOutput13(LogicState::eLogicState output13);

    LogicState::eLogicState getOutput14() const;

    void setOutput14(LogicState::eLogicState output14);

    LogicState::eLogicState getOutput15() const;

    void setOutput15(LogicState::eLogicState output15);

    std::vector<LogicState::eLogicState> currentState();

};
