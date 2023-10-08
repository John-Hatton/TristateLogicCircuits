//
// Created by snake on 12/15/2022.
//

#include "Adders/FullAdder.h"

FullAdder::FullAdder() {

    xorGateOne = new XorGate();
    xorGateTwo = new XorGate();
    andGateOne = new AndGate();
    andGateTwo = new AndGate();
    orGate = new OrGate();

    carryIn = LogicState::OFF; // Default behavior of Carry In, unless populated elsewhere.

}

LogicState::eLogicState FullAdder::getInputX() const {
    return inputX;
}

void FullAdder::setInputX(LogicState::eLogicState inputX) {
    FullAdder::inputX = inputX;
}

LogicState::eLogicState FullAdder::getInputY() const {
    return inputY;
}

void FullAdder::setInputY(LogicState::eLogicState inputY) {
    FullAdder::inputY = inputY;
}

LogicState::eLogicState FullAdder::getCarryIn() const {
    return carryIn;
}

void FullAdder::setCarryIn(LogicState::eLogicState carryIn) {
    FullAdder::carryIn = carryIn;
}

LogicState::eLogicState FullAdder::getSumOut() const {
    return sumOut;
}

void FullAdder::setSumOut(LogicState::eLogicState sumOut) {
    FullAdder::sumOut = sumOut;
}

LogicState::eLogicState FullAdder::getCarryOut() const {
    return carryOut;
}

void FullAdder::setCarryOut(LogicState::eLogicState carryOut) {
    FullAdder::carryOut = carryOut;
}

XorGate *FullAdder::getXorGateOne() const {
    return xorGateOne;
}

void FullAdder::setXorGateOne(XorGate *xorGateOne) {
    FullAdder::xorGateOne = xorGateOne;
}

XorGate *FullAdder::getXorGateTwo() const {
    return xorGateTwo;
}

void FullAdder::setXorGateTwo(XorGate *xorGateTwo) {
    FullAdder::xorGateTwo = xorGateTwo;
}

AndGate *FullAdder::getAndGateOne() const {
    return andGateOne;
}

void FullAdder::setAndGateOne(AndGate *andGateOne) {
    FullAdder::andGateOne = andGateOne;
}

AndGate *FullAdder::getAndGateTwo() const {
    return andGateTwo;
}

void FullAdder::setAndGateTwo(AndGate *andGateTwo) {
    FullAdder::andGateTwo = andGateTwo;
}

OrGate *FullAdder::getOrGate() const {
    return orGate;
}

void FullAdder::setOrGate(OrGate *orGate) {
    FullAdder::orGate = orGate;
}

std::vector<LogicState::eLogicState> FullAdder::currentState() {

    xorGateOne->setInputX(inputX);
    xorGateOne->setInputY(inputY);

    andGateOne->setInputX(inputX);
    andGateOne->setInputY(inputY);

    xorGateTwo->setInputX(xorGateOne->answer());
    xorGateTwo->setInputY(carryIn);
    sumOut = xorGateTwo->answer();

    andGateTwo->setInputX(xorGateOne->answer());
    andGateTwo->setInputY(carryIn);

    orGate->setInputX(andGateTwo->answer());
    orGate->setInputY(andGateOne->answer());
    carryOut = orGate->answer();

    return {carryOut,sumOut};
}


