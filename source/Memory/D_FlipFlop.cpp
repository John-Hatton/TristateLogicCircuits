//
// Created by physiker on 12/15/2022.
//

#include "Memory/D_FlipFlop.h"

D_FlipFlop::D_FlipFlop() {

    notGate = new NotGate();
    andGateOne = new AndGate();
    andGateTwo = new AndGate();
    norGateOne = new NorGate();
    norGateTwo = new NorGate();

}

LogicState::eLogicState D_FlipFlop::getDataInput() const {
    return dataInput;
}

void D_FlipFlop::setDataInput(LogicState::eLogicState dataInput) {
    D_FlipFlop::dataInput = dataInput;
}

LogicState::eLogicState D_FlipFlop::getEnableInput() const {
    return enableInput;
}

void D_FlipFlop::setEnableInput(LogicState::eLogicState enableInput) {
    D_FlipFlop::enableInput = enableInput;
}

LogicState::eLogicState D_FlipFlop::getOutputQ() const {
    return outputQ;
}

void D_FlipFlop::setOutputQ(LogicState::eLogicState outputQ) {
    D_FlipFlop::outputQ = outputQ;
}

LogicState::eLogicState D_FlipFlop::getOutputQBar() const {
    return outputQBar;
}

void D_FlipFlop::setOutputQBar(LogicState::eLogicState ouputQBar) {
    D_FlipFlop::outputQBar = ouputQBar;
}

NotGate *D_FlipFlop::getNotGate() const {
    return notGate;
}

void D_FlipFlop::setNotGate(NotGate *notGate) {
    D_FlipFlop::notGate = notGate;
}

AndGate *D_FlipFlop::getAndGateOne() const {
    return andGateOne;
}

void D_FlipFlop::setAndGateOne(AndGate *andGateOne) {
    D_FlipFlop::andGateOne = andGateOne;
}

AndGate *D_FlipFlop::getAndGateTwo() const {
    return andGateTwo;
}

void D_FlipFlop::setAndGateTwo(AndGate *andGateTwo) {
    D_FlipFlop::andGateTwo = andGateTwo;
}

NorGate *D_FlipFlop::getNorGateOne() const {
    return norGateOne;
}

void D_FlipFlop::setNorGateOne(NorGate *norGateOne) {
    D_FlipFlop::norGateOne = norGateOne;
}

NorGate *D_FlipFlop::getNorGateTwo() const {
    return norGateTwo;
}

void D_FlipFlop::setNorGateTwo(NorGate *norGateTwo) {
    D_FlipFlop::norGateTwo = norGateTwo;
}

LogicState::eLogicState D_FlipFlop::answer() {

    notGate->setInput(dataInput);

    andGateOne->setInputX(notGate->answer());
    andGateOne->setInputY(enableInput);

    andGateTwo->setInputX(enableInput);
    andGateTwo->setInputY(dataInput);

    norGateOne->setInputX(andGateOne->answer());
    norGateTwo->setInputY(andGateTwo->answer());

    // Default state of inputs is LS::DISABLED. We need
    // to trick the NOR Gates, so they don't output DISABLED...
    norGateOne->setInputY(LogicState::OFF);
    norGateTwo->setInputX(LogicState::OFF);
    norGateOne->setInputY(norGateTwo->answer());
    norGateTwo->setInputX(norGateOne->answer());

    outputQ = norGateOne->answer();
    outputQBar = norGateTwo->answer();

    return outputQ;
}
