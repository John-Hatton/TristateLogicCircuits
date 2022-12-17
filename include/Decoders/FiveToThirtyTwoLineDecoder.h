//
// Created by snake on 12/17/2022.
//
#pragma once
#include "ThreeToEightLineDecoder.h"

class FiveToThirtyTwoLineDecoder {

private:

    LogicState::eLogicState input0;
    LogicState::eLogicState input1;
    LogicState::eLogicState input2;
    LogicState::eLogicState input3;
    LogicState::eLogicState input4;

    LogicState::eLogicState writeEnable;

    TwoToFourLineDecoder* twoToFourEnableDecoder;

    ThreeToEightLineDecoder* decoder0;
    ThreeToEightLineDecoder* decoder1;
    ThreeToEightLineDecoder* decoder2;
    ThreeToEightLineDecoder* decoder3;


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
    LogicState::eLogicState output16;
    LogicState::eLogicState output17;
    LogicState::eLogicState output18;
    LogicState::eLogicState output19;
    LogicState::eLogicState output20;
    LogicState::eLogicState output21;
    LogicState::eLogicState output22;
    LogicState::eLogicState output23;
    LogicState::eLogicState output24;
    LogicState::eLogicState output25;
    LogicState::eLogicState output26;
    LogicState::eLogicState output27;
    LogicState::eLogicState output28;
    LogicState::eLogicState output29;
    LogicState::eLogicState output30;
    LogicState::eLogicState output31;



public:

    FiveToThirtyTwoLineDecoder();

    LogicState::eLogicState getInput0() const;

    void setInput0(LogicState::eLogicState input0);

    LogicState::eLogicState getInput1() const;

    void setInput1(LogicState::eLogicState input1);

    LogicState::eLogicState getInput2() const;

    void setInput2(LogicState::eLogicState input2);

    LogicState::eLogicState getInput3() const;

    void setInput3(LogicState::eLogicState input3);

    LogicState::eLogicState getInput4() const;

    void setInput4(LogicState::eLogicState input4);

    LogicState::eLogicState getWriteEnable() const;

    void setWriteEnable(LogicState::eLogicState writeEnable);

    TwoToFourLineDecoder *getTwoToFourEnableDecoder() const;

    void setTwoToFourEnableDecoder(TwoToFourLineDecoder *twoToFourEnableDecoder);

    ThreeToEightLineDecoder *getDecoder0() const;

    void setDecoder0(ThreeToEightLineDecoder *decoder0);

    ThreeToEightLineDecoder *getDecoder1() const;

    void setDecoder1(ThreeToEightLineDecoder *decoder1);

    ThreeToEightLineDecoder *getDecoder2() const;

    void setDecoder2(ThreeToEightLineDecoder *decoder2);

    ThreeToEightLineDecoder *getDecoder3() const;

    void setDecoder3(ThreeToEightLineDecoder *decoder3);

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

    LogicState::eLogicState getOutput16() const;

    void setOutput16(LogicState::eLogicState output16);

    LogicState::eLogicState getOutput17() const;

    void setOutput17(LogicState::eLogicState output17);

    LogicState::eLogicState getOutput18() const;

    void setOutput18(LogicState::eLogicState output18);

    LogicState::eLogicState getOutput19() const;

    void setOutput19(LogicState::eLogicState output19);

    LogicState::eLogicState getOutput20() const;

    void setOutput20(LogicState::eLogicState output20);

    LogicState::eLogicState getOutput21() const;

    void setOutput21(LogicState::eLogicState output21);

    LogicState::eLogicState getOutput22() const;

    void setOutput22(LogicState::eLogicState output22);

    LogicState::eLogicState getOutput23() const;

    void setOutput23(LogicState::eLogicState output23);

    LogicState::eLogicState getOutput24() const;

    void setOutput24(LogicState::eLogicState output24);

    LogicState::eLogicState getOutput25() const;

    void setOutput25(LogicState::eLogicState output25);

    LogicState::eLogicState getOutput26() const;

    void setOutput26(LogicState::eLogicState output26);

    LogicState::eLogicState getOutput27() const;

    void setOutput27(LogicState::eLogicState output27);

    LogicState::eLogicState getOutput28() const;

    void setOutput28(LogicState::eLogicState output28);

    LogicState::eLogicState getOutput29() const;

    void setOutput29(LogicState::eLogicState output29);

    LogicState::eLogicState getOutput30() const;

    void setOutput30(LogicState::eLogicState output30);

    LogicState::eLogicState getOutput31() const;

    void setOutput31(LogicState::eLogicState output31);

    std::vector<LogicState::eLogicState> currentState();


};
