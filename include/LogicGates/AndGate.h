//
// Created by snake on 12/15/2022.
//
#pragma once
#include "LogicState.h"

class AndGate {

private:
    LogicState::eLogicState inputX;

    LogicState::eLogicState inputY;

    LogicState::eLogicState output;

public:
    AndGate();

    LogicState::eLogicState getInputX() const;

    void setInputX(LogicState::eLogicState inputX);

    LogicState::eLogicState getInputY() const;

    void setInputY(LogicState::eLogicState inputY);

    LogicState::eLogicState getOutput() const;

    void setOutput(LogicState::eLogicState output);


    LogicState::eLogicState answer();

};

