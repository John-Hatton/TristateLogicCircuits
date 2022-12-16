//
// Created by snake on 12/15/2022.
//
#pragma once
#include "LogicState.h"
#include "LogicGates/NotGate.h"
#include "LogicGates/AndGate.h"
#include "LogicGates/NorGate.h"

class D_FlipFlop {

private:

    LogicState::eLogicState dataInput;

    LogicState::eLogicState enableInput;

    LogicState::eLogicState outputQ;

    NotGate* notGate;

    AndGate* andGateOne;

    AndGate* andGateTwo;

    NorGate* norGateOne;

    NorGate* norGateTwo;

public:

    D_FlipFlop();

    LogicState::eLogicState getDataInput() const;

    void setDataInput(LogicState::eLogicState dataInput);

    LogicState::eLogicState getEnableInput() const;

    void setEnableInput(LogicState::eLogicState enableInput);

    LogicState::eLogicState getOutputQ() const;

    void setOutputQ(LogicState::eLogicState outputQ);

    NotGate *getNotGate() const;

    void setNotGate(NotGate *notGate);

    AndGate *getAndGateOne() const;

    void setAndGateOne(AndGate *andGateOne);

    AndGate *getAndGateTwo() const;

    void setAndGateTwo(AndGate *andGateTwo);

    NorGate *getNorGateOne() const;

    void setNorGateOne(NorGate *norGateOne);

    NorGate *getNorGateTwo() const;

    void setNorGateTwo(NorGate *norGateTwo);

    LogicState::eLogicState answer();

};
