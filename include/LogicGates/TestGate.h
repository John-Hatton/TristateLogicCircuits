//
// Created by snake on 12/15/2022.
//
#pragma once
#include "LogicState.h"

class TestGate {

private:

    LogicState::eLogicState testInput0;

    LogicState::eLogicState testOutput0;

public:

    TestGate();

    LogicState::eLogicState getTestInput0() const;

    void setTestInput0(LogicState::eLogicState testInput0);

    LogicState::eLogicState getTestOutput0() const;

    void setTestOutput0(LogicState::eLogicState testOutput0);

    LogicState::eLogicState fooBar();


};
