//
// Created by snake on 12/15/2022.
//
#pragma once
#include "LogicState.h"

class TriInputAndGate {

private:

    LogicState::eLogicState inputX;

    LogicState::eLogicState inputY;

    LogicState::eLogicState inputZ;

    LogicState::eLogicState output;


public:
    TriInputAndGate();

    LogicState::eLogicState getInputX() const;

    void setInputX(LogicState::eLogicState inputX);

    LogicState::eLogicState getInputY() const;

    void setInputY(LogicState::eLogicState inputY);

    LogicState::eLogicState getInputZ() const;

    void setInputZ(LogicState::eLogicState inputZ);

    LogicState::eLogicState getOutput() const;

    void setOutput(LogicState::eLogicState output);

    LogicState::eLogicState answer();
};
