//
// Created by snake on 12/15/2022.
//
#pragma once
#include "LogicState.h"

class NorGate {

private:
    LogicState::eLogicState inputX;
public:
    LogicState::eLogicState getInputX() const;

    void setInputX(LogicState::eLogicState inputX);

    LogicState::eLogicState getInputY() const;

    void setInputY(LogicState::eLogicState inputY);

    LogicState::eLogicState getOutput() const;

    void setOutput(LogicState::eLogicState output);

private:

    LogicState::eLogicState inputY;

    LogicState::eLogicState output;

public:
    NorGate();


    LogicState::eLogicState answer();
};
