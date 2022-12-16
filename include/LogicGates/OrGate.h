//
// Created by snake on 12/15/2022.
//
#pragma once
#include "LogicState.h"

class OrGate {

private:
    LogicState::eLogicState inputX;

    LogicState::eLogicState inputY;

    LogicState::eLogicState output;

public:
    OrGate();

    LogicState::eLogicState getInputX() const;

    void setInputX(LogicState::eLogicState inX);

    LogicState::eLogicState getInputY() const;

    void setInputY(LogicState::eLogicState inY);

    LogicState::eLogicState getOutput() const;

    void setOutput(LogicState::eLogicState out);


    LogicState::eLogicState answer();
};
