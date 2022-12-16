//
// Created by snake on 12/15/2022.
//

#include "LogicGates/NotGate.h"

NotGate::NotGate() {

}

LogicState::eLogicState NotGate::getInput() const {
    return input;
}

void NotGate::setInput(LogicState::eLogicState input) {
    NotGate::input = input;
}

LogicState::eLogicState NotGate::getOutput() const {
    return output;
}

void NotGate::setOutput(LogicState::eLogicState output) {
    NotGate::output = output;
}

LogicState::eLogicState NotGate::answer() {

    if (input == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    else
    {
        if (input == LogicState::OFF)
        {
            output = LogicState::ON;
            return output;
        }
        else
        {
            output = LogicState::OFF;
            return output;
        }
    }
}

