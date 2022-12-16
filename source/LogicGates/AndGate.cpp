//
// Created by snake on 12/15/2022.
//

#include "LogicGates/AndGate.h"

AndGate::AndGate() = default;

LogicState::eLogicState AndGate::getInputX() const {
    return inputX;
}

void AndGate::setInputX(LogicState::eLogicState inputX) {
    AndGate::inputX = inputX;
}

LogicState::eLogicState AndGate::getInputY() const {
    return inputY;
}

void AndGate::setInputY(LogicState::eLogicState inputY) {
    AndGate::inputY = inputY;
}

LogicState::eLogicState AndGate::getOutput() const {
    return output;
}

void AndGate::setOutput(LogicState::eLogicState output) {
    AndGate::output = output;
}

LogicState::eLogicState AndGate::answer()
{

    if (inputX == LogicState::DISABLED && inputY == LogicState::DISABLED)
    {
        return LogicState::DISABLED;
    }
    else if (inputX == LogicState::DISABLED && inputY != LogicState::DISABLED)
    {
        if (inputY == LogicState::OFF)
        {
            return LogicState::OFF;
        }
        else
        {
            return LogicState::DISABLED;
        }
    }
    else if (inputX != LogicState::DISABLED && inputY == LogicState::DISABLED)
    {
        if (inputX == LogicState::OFF)
        {
            return LogicState::OFF;
        }
        else
        {
            return LogicState::DISABLED;
        }
    }
    else // Both inputX and inputY do NOT have DISABLED inputs...
    {
        if (inputX == LogicState::OFF && inputY == LogicState::OFF)
        {
            return LogicState::OFF;
        }
        else if (inputX == LogicState::ON && inputY == LogicState::OFF)
        {
            return LogicState::OFF;
        }
        else if (inputX == LogicState::OFF && inputY == LogicState::ON)
        {
            return LogicState::OFF;
        }
        else
        {
            return LogicState::ON;
        }

    }
}
