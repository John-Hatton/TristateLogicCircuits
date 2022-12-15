//
// Created by physiker on 12/15/2022.
//
#pragma once

#include "LogicState.h"


class TriStateBufferGate {

private:

    LogicState::eLogicState dataInput;

    LogicState::eLogicState enableInput;



public:

    TriStateBufferGate();

    LogicState::eLogicState getDataInput() const;

    void setDataInput(LogicState::eLogicState dataInput);

    LogicState::eLogicState getEnableInput() const;

    void setEnableInput(LogicState::eLogicState enableInput);

    LogicState::eLogicState answer();

};
