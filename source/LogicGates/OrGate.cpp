//
// Created by snake on 12/15/2022.
//

#include "LogicGates/OrGate.h"

OrGate::OrGate() {

}

LogicState::eLogicState OrGate::getInputX() const {
    return inputX;
}

void OrGate::setInputX(LogicState::eLogicState inX) {
    inputX = inX;
}

LogicState::eLogicState OrGate::getInputY() const {
    return inputY;
}

void OrGate::setInputY(LogicState::eLogicState inY) {
    inputY = inY;
}

LogicState::eLogicState OrGate::getOutput() const {
    return output;
}

void OrGate::setOutput(LogicState::eLogicState out) {
    output = out;
}

LogicState::eLogicState OrGate::answer() {

    // If Both inputs are Disabled

    if (inputX == LogicState::DISABLED && inputY == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }

    // If one or the other inputs are disabled

    if (inputX == LogicState::DISABLED || inputY == LogicState::DISABLED)
    {
        if (inputX == LogicState::ON && inputY == LogicState::DISABLED)
        {
            output = LogicState::ON;
            return output;
        }
        else if (inputX == LogicState::DISABLED && inputY == LogicState::ON)
        {
            output = LogicState::ON;
            return output;
        }
        else if (inputX == LogicState::OFF && inputY == LogicState::DISABLED)
        {
            output = LogicState::DISABLED;
            return output;
        }
        else if (inputX == LogicState::DISABLED && inputY == LogicState::OFF)
        {
            output = LogicState::DISABLED;
            return output;
        }
    }
    else
    {
        // Neither input contained DISABLED...

        if (inputX == LogicState::ON || inputY == LogicState::ON)
        {
            output = LogicState::ON;
            return output;
        }
        else if (inputX == LogicState::OFF && inputY == LogicState::OFF)
        {
            output = LogicState::OFF;
            return output;
        }
    }
    std::cout << "An Error has occured, OrGate is defaulting to Disabled..." << std::endl;
    return LogicState::DISABLED; // Should only output when something went wrong.
}
