//
// Created by snake on 12/15/2022.
//
#include "LogicGates/XorGate.h"

XorGate::XorGate() {

}

LogicState::eLogicState XorGate::getInputX() const {
    return inputX;
}

void XorGate::setInputX(LogicState::eLogicState inputX) {
    XorGate::inputX = inputX;
}

LogicState::eLogicState XorGate::getInputY() const {
    return inputY;
}

void XorGate::setInputY(LogicState::eLogicState inputY) {
    XorGate::inputY = inputY;
}

LogicState::eLogicState XorGate::getOutput() const {
    return output;
}

void XorGate::setOutput(LogicState::eLogicState output) {
    XorGate::output = output;
}



LogicState::eLogicState XorGate::answer()
{
    if (inputX == LogicState::DISABLED || inputY == LogicState::DISABLED)
    {
        // Case 1 D,D
        if (inputX == LogicState::DISABLED && inputY == LogicState::DISABLED)
        {
            output = LogicState::DISABLED;
            return output;
        }
        // Case 2 D,F
        else if (inputX == LogicState::DISABLED && inputY == LogicState::OFF)
        {
            output = LogicState::ON;
            return output;
        }
        // Case 3 F,D
        else if (inputX == LogicState::OFF && inputY == LogicState::DISABLED)
        {
            output = LogicState::ON;
            return output;
        }
        // Case 4 D,T
        else if (inputX == LogicState::DISABLED && inputY == LogicState::ON)
        {
            output = LogicState::DISABLED;
            return output;
        }
        // Case 5 T,D
        else if (inputX == LogicState::ON && inputY == LogicState::DISABLED)
        {
            output = LogicState::DISABLED;
            return output;
        }
    }
    // Neither input was Disabled:
    else
    {
        // Case 6 F,F
        if (inputX == LogicState::OFF && inputY == LogicState::OFF)
        {
            output = LogicState::OFF;
            return output;
        }
        // Case 7 F,T
        else if (inputX == LogicState::OFF && inputY == LogicState::ON)
        {
            output = LogicState::ON;
            return output;
        }
        // Case 8 T,F
        else if (inputX == LogicState::ON && inputY == LogicState::OFF)
        {
            output = LogicState::ON;
            return output;
        }
        // Case 9 T,T
        else if (inputX == LogicState::ON && inputY == LogicState::ON)
        {
            output = LogicState::OFF;
            return output;
        }
    }
    std::cout<<"Something has gone very wrong with XorGate" << std::endl;
    return LogicState::DISABLED;
}

