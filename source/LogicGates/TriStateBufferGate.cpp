//
// Created by snake on 12/15/2022.
//

#include "LogicGates/TriStateBufferGate.h"

TriStateBufferGate::TriStateBufferGate() {

}


LogicState::eLogicState TriStateBufferGate::getDataInput() const {
    return dataInput;
}

void TriStateBufferGate::setDataInput(LogicState::eLogicState dataInput) {
    TriStateBufferGate::dataInput = dataInput;
}

LogicState::eLogicState TriStateBufferGate::getEnableInput() const {
    return enableInput;
}

void TriStateBufferGate::setEnableInput(LogicState::eLogicState enableInput) {
    TriStateBufferGate::enableInput = enableInput;
}

LogicState::eLogicState TriStateBufferGate::getOutput() const {
    return output;
}

void TriStateBufferGate::setOutput(LogicState::eLogicState output) {
    TriStateBufferGate::output = output;
}

LogicState::eLogicState TriStateBufferGate::answer() {
    if (enableInput == LogicState::ON)
    {
        // If the enable Input is ON, we want to set the output of the
        //  buffer to DISABLED!
        output = LogicState::DISABLED;
        return output;
    }
    else if (enableInput == LogicState::OFF && dataInput == LogicState::ON)
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
