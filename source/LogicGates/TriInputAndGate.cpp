//
// Created by snake on 12/15/2022.
//

#include "LogicGates/TriInputAndGate.h"


TriInputAndGate::TriInputAndGate() {

}

LogicState::eLogicState TriInputAndGate::getInputX() const {
    return inputX;
}

void TriInputAndGate::setInputX(LogicState::eLogicState inputX) {
    TriInputAndGate::inputX = inputX;
}

LogicState::eLogicState TriInputAndGate::getInputY() const {
    return inputY;
}

void TriInputAndGate::setInputY(LogicState::eLogicState inputY) {
    TriInputAndGate::inputY = inputY;
}

LogicState::eLogicState TriInputAndGate::getInputZ() const {
    return inputZ;
}

void TriInputAndGate::setInputZ(LogicState::eLogicState inputZ) {
    TriInputAndGate::inputZ = inputZ;
}

LogicState::eLogicState TriInputAndGate::getOutput() const {
    return output;
}

void TriInputAndGate::setOutput(LogicState::eLogicState output) {
    TriInputAndGate::output = output;
}

LogicState::eLogicState TriInputAndGate::answer() {

    // Case 1 D,D,D
    if (inputX == LogicState::DISABLED && inputY == LogicState::DISABLED && inputZ == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    // Case 2 D,D,F
    else if (inputX == LogicState::DISABLED && inputY == LogicState::DISABLED && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case 3 D,D,T
    else if (inputX == LogicState::DISABLED && inputY == LogicState::DISABLED && inputZ == LogicState::ON)
    {
        output = LogicState::DISABLED;
        return output;
    }
    // Case 4 D,F,D
    else if (inputX == LogicState::DISABLED && inputY == LogicState::OFF && inputZ == LogicState::DISABLED)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case 5 D,T,D
    else if (inputX == LogicState::DISABLED && inputY == LogicState::ON && inputZ == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    // Case 6 F,D,D
    else if (inputX == LogicState::OFF && inputY == LogicState::DISABLED && inputZ == LogicState::DISABLED)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case 7 T,D,D
    else if (inputX == LogicState::ON && inputY == LogicState::DISABLED && inputZ == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    // Case 8 D,F,F
    else if (inputX == LogicState::DISABLED && inputY == LogicState::OFF && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case 9 D,T,T
    else if (inputX == LogicState::DISABLED && inputY == LogicState::ON && inputZ == LogicState::ON)
    {
        output = LogicState::DISABLED;
        return output;
    }
    // Case10 F,D,F
    else if (inputX == LogicState::OFF && inputY == LogicState::DISABLED && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case11 T,D,T
    else if (inputX == LogicState::ON && inputY == LogicState::DISABLED && inputZ == LogicState::ON)
    {
        output = LogicState::DISABLED;
        return output;
    }
    // Case12 F,F,D
    else if (inputX == LogicState::OFF && inputY == LogicState::OFF && inputZ == LogicState::DISABLED)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case13 T,T,D
    else if (inputX == LogicState::ON && inputY == LogicState::ON && inputZ == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    // Case14 T,D,F
    else if (inputX == LogicState::ON && inputY == LogicState::DISABLED && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case15 F,D,T
    else if (inputX == LogicState::OFF && inputY == LogicState::DISABLED && inputZ == LogicState::ON)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case16 D,F,T
    else if (inputX == LogicState::DISABLED && inputY == LogicState::OFF && inputZ == LogicState::ON)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case17 D,T,F
    else if (inputX == LogicState::DISABLED && inputY == LogicState::ON && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case18 F,T,D
    else if (inputX == LogicState::OFF && inputY == LogicState::ON && inputZ == LogicState::DISABLED)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case19 T,F,D
    else if (inputX == LogicState::ON && inputY == LogicState::OFF && inputZ == LogicState::DISABLED)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case20 F,F,F
    else if (inputX == LogicState::OFF && inputY == LogicState::OFF && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case21 F,F,T
    else if (inputX == LogicState::OFF && inputY == LogicState::OFF && inputZ == LogicState::ON)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case22 T,F,F
    else if (inputX == LogicState::ON && inputY == LogicState::OFF && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case23 F,T,T
    else if (inputX == LogicState::OFF && inputY == LogicState::ON && inputZ == LogicState::ON)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case24 T,T,F
    else if (inputX == LogicState::ON && inputY == LogicState::ON && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case25 F,T,F
    else if (inputX == LogicState::OFF && inputY == LogicState::ON && inputZ == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case26 T,F,T
    else if (inputX == LogicState::ON && inputY == LogicState::OFF && inputZ == LogicState::ON)
    {
        output = LogicState::OFF;
        return output;
    }
    // Case27 T,T,T
    else if (inputX == LogicState::ON && inputY == LogicState::ON && inputZ == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }

    std::cout<<"Something very wrong has happened with the Tri-InputAndGate" << std::endl;
    return LogicState::DISABLED; // Something very wrong has happened...
}
