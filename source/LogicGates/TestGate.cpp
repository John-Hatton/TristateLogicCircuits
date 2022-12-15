//
// Created by snake on 12/15/2022.
//

#include "LogicGates/TestGate.h"


TestGate::TestGate() {

}

LogicState::eLogicState TestGate::getTestInput0() const {
    return testInput0;
}

void TestGate::setTestInput0(LogicState::eLogicState testInput0) {
    TestGate::testInput0 = testInput0;
}

LogicState::eLogicState TestGate::getTestOutput0() const {
    return testOutput0;
}

void TestGate::setTestOutput0(LogicState::eLogicState testOutput0) {
    TestGate::testOutput0 = testOutput0;
}

LogicState::eLogicState TestGate::fooBar() {

    if (testInput0 == LogicState::DISABLED)
    {
        return LogicState::DISABLED;
    }
    else if (testInput0 == LogicState::ON)
    {
        return LogicState::ON;
    }
    else
    {
        return LogicState::OFF;
    }
}

