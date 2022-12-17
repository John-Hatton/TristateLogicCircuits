//
// Created by snake on 12/16/2022.
//
#pragma once
#include "LogicState.h"

class QuadInputOrGate {

private:

    LogicState::eLogicState inputA;
    LogicState::eLogicState inputB;
    LogicState::eLogicState inputC;
    LogicState::eLogicState inputD;

    LogicState::eLogicState output;



public:

    QuadInputOrGate();

    LogicState::eLogicState getInputA() const;

    void setInputA(LogicState::eLogicState inputA);

    LogicState::eLogicState getInputB() const;

    void setInputB(LogicState::eLogicState inputB);

    LogicState::eLogicState getInputC() const;

    void setInputC(LogicState::eLogicState inputC);

    LogicState::eLogicState getInputD() const;

    void setInputD(LogicState::eLogicState inputD);

    LogicState::eLogicState getOutput() const;

    void setOutput(LogicState::eLogicState output);

    LogicState::eLogicState answer();

};
