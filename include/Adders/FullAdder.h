//
// Created by snake on 12/15/2022.
//
#pragma once

#include <vector>
#include "LogicState.h"
#include "LogicGates/XorGate.h"
#include "LogicGates/AndGate.h"
#include "LogicGates/OrGate.h"


class FullAdder {

private:

    LogicState::eLogicState inputX;

    LogicState::eLogicState inputY;

    LogicState::eLogicState carryIn;

    LogicState::eLogicState sumOut;

    LogicState::eLogicState carryOut;

    XorGate* xorGateOne;

    XorGate* xorGateTwo;

    AndGate* andGateOne;

    AndGate* andGateTwo;

    OrGate* orGate;




public:

    FullAdder();

    LogicState::eLogicState getInputX() const;

    void setInputX(LogicState::eLogicState inputX);

    LogicState::eLogicState getInputY() const;

    void setInputY(LogicState::eLogicState inputY);

    LogicState::eLogicState getCarryIn() const;

    void setCarryIn(LogicState::eLogicState carryIn);

    LogicState::eLogicState getSumOut() const;

    void setSumOut(LogicState::eLogicState sumOut);

    LogicState::eLogicState getCarryOut() const;

    void setCarryOut(LogicState::eLogicState carryOut);

    XorGate *getXorGateOne() const;

    void setXorGateOne(XorGate *xorGateOne);

    XorGate *getXorGateTwo() const;

    void setXorGateTwo(XorGate *xorGateTwo);

    AndGate *getAndGateOne() const;

    void setAndGateOne(AndGate *andGateOne);

    AndGate *getAndGateTwo() const;

    void setAndGateTwo(AndGate *andGateTwo);

    OrGate *getOrGate() const;

    void setOrGate(OrGate *orGate);

    std::vector<LogicState::eLogicState> currentState();
};
