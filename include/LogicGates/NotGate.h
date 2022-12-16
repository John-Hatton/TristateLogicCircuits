//
// Created by snake on 12/15/2022.
//
#pragma once
#include "LogicState.h"

class NotGate {

private:
    LogicState::eLogicState input;

    LogicState::eLogicState output;

public:

    NotGate();

    LogicState::eLogicState getInput() const;

    void setInput(LogicState::eLogicState input);

    LogicState::eLogicState getOutput() const;

    void setOutput(LogicState::eLogicState output);

    LogicState::eLogicState answer();

};
