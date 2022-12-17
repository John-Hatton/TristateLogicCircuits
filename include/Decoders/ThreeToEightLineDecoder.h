//
// Created by snake on 12/17/2022.
//
#pragma once
#include "TwoToFourLineDecoder.h"
#include "LogicGates/AndGate.h"

class ThreeToEightLineDecoder {

private:

    LogicState::eLogicState input0;

    LogicState::eLogicState input1;

    LogicState::eLogicState input2;


    LogicState::eLogicState writeEnable;


    NotGate* decZeroWriteEnableNot;

    AndGate* decZeroWriteEnableAnd;

    AndGate* decOneWriteEnableAnd;


    TwoToFourLineDecoder* decoderZero;

    TwoToFourLineDecoder* decoderOne;


    LogicState::eLogicState output0;

    LogicState::eLogicState output1;

    LogicState::eLogicState output2;

    LogicState::eLogicState output3;

    LogicState::eLogicState output4;

    LogicState::eLogicState output5;

    LogicState::eLogicState output6;

    LogicState::eLogicState output7;



public:

    ThreeToEightLineDecoder();

    LogicState::eLogicState getInput0() const;

    void setInput0(LogicState::eLogicState input0);

    LogicState::eLogicState getInput1() const;

    void setInput1(LogicState::eLogicState input1);

    LogicState::eLogicState getInput2() const;

    void setInput2(LogicState::eLogicState input2);

    LogicState::eLogicState getWriteEnable() const;

    void setWriteEnable(LogicState::eLogicState writeEnable);

    NotGate *getDecZeroWriteEnableNot() const;

    void setDecZeroWriteEnableNot(NotGate *decZeroWriteEnableNot);

    AndGate *getDecZeroWriteEnableAnd() const;

    void setDecZeroWriteEnableAnd(AndGate *decZeroWriteEnableAnd);

    AndGate *getDecOneWriteEnableAnd() const;

    void setDecOneWriteEnableAnd(AndGate *decOneWriteEnableAnd);

    TwoToFourLineDecoder *getDecoderZero() const;

    void setDecoderZero(TwoToFourLineDecoder *decoderZero);

    TwoToFourLineDecoder *getDecoderOne() const;

    void setDecoderOne(TwoToFourLineDecoder *decoderOne);

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

    std::vector<LogicState::eLogicState> currentState();

};
