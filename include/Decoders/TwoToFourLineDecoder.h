//
// Created by physiker on 12/16/2022.
//
#pragma once

#include <vector>
#include "LogicState.h"
#include "LogicGates/NotGate.h"
#include "LogicGates/TriInputAndGate.h"

class TwoToFourLineDecoder {

private:

    LogicState::eLogicState inputBitZero;

    LogicState::eLogicState inputBitOne;

    LogicState::eLogicState enableInput;

    LogicState::eLogicState output0;

    LogicState::eLogicState output1;

    LogicState::eLogicState output2;

    LogicState::eLogicState output3;



    NotGate* zeroNot;

    NotGate* oneNot;

    TriInputAndGate* output0TriAnd;

    TriInputAndGate* output1TriAnd;

    TriInputAndGate* output2TriAnd;

    TriInputAndGate* output3TriAnd;

public:

    TwoToFourLineDecoder();

    LogicState::eLogicState getInputBitZero() const;

    void setInputBitZero(LogicState::eLogicState inputBitZero);

    LogicState::eLogicState getInputBitOne() const;

    void setInputBitOne(LogicState::eLogicState inputBitOne);

    LogicState::eLogicState getEnableInput() const;

    void setEnableInput(LogicState::eLogicState enableInput);

    LogicState::eLogicState getOutput0() const;

    void setOutput0(LogicState::eLogicState output0);

    LogicState::eLogicState getOutput1() const;

    void setOutput1(LogicState::eLogicState output1);

    LogicState::eLogicState getOutput2() const;

    void setOutput2(LogicState::eLogicState output2);

    LogicState::eLogicState getOutput3() const;

    void setOutput3(LogicState::eLogicState output3);

    NotGate *getZeroNot() const;

    void setZeroNot(NotGate *zeroNot);

    NotGate *getOneNot() const;

    void setOneNot(NotGate *oneNot);

    TriInputAndGate *getOutput0TriAnd() const;

    void setOutput0TriAnd(TriInputAndGate *output0TriAnd);

    TriInputAndGate *getOutput1TriAnd() const;

    void setOutput1TriAnd(TriInputAndGate *output1TriAnd);

    TriInputAndGate *getOutput2TriAnd() const;

    void setOutput2TriAnd(TriInputAndGate *output2TriAnd);

    TriInputAndGate *getOutput3TriAnd() const;

    void setOutput3TriAnd(TriInputAndGate *output3TriAnd);

    std::vector<LogicState::eLogicState> currentState();

};
