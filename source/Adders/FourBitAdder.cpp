//
// Created by John on 10/8/2023.
//
#include <Adders/FourBitAdder.h>


FourBitAdder::FourBitAdder() {
    BitZeroAdder = new FullAdder();
    BitOneAdder = new FullAdder();
    BitTwoAdder = new FullAdder();
    BitThreeAdder = new FullAdder();
}

LogicState::eLogicState FourBitAdder::getInputBitX0() const {
    return InputBitX0;
}

void FourBitAdder::setInputBitX0(LogicState::eLogicState inputBitX0) {
    InputBitX0 = inputBitX0;
}

LogicState::eLogicState FourBitAdder::getInputBitX1() const {
    return InputBitX1;
}

void FourBitAdder::setInputBitX1(LogicState::eLogicState inputBitX1) {
    InputBitX1 = inputBitX1;
}

LogicState::eLogicState FourBitAdder::getInputBitX2() const {
    return InputBitX2;
}

void FourBitAdder::setInputBitX2(LogicState::eLogicState inputBitX2) {
    InputBitX2 = inputBitX2;
}

LogicState::eLogicState FourBitAdder::getInputBitX3() const {
    return InputBitX3;
}

void FourBitAdder::setInputBitX3(LogicState::eLogicState inputBitX3) {
    InputBitX3 = inputBitX3;
}

LogicState::eLogicState FourBitAdder::getInputBitY0() const {
    return InputBitY0;
}

void FourBitAdder::setInputBitY0(LogicState::eLogicState inputBitY0) {
    InputBitY0 = inputBitY0;
}

LogicState::eLogicState FourBitAdder::getInputBitY1() const {
    return InputBitY1;
}

void FourBitAdder::setInputBitY1(LogicState::eLogicState inputBitY1) {
    InputBitY1 = inputBitY1;
}

LogicState::eLogicState FourBitAdder::getInputBitY2() const {
    return InputBitY2;
}

void FourBitAdder::setInputBitY2(LogicState::eLogicState inputBitY2) {
    InputBitY2 = inputBitY2;
}

LogicState::eLogicState FourBitAdder::getInputBitY3() const {
    return InputBitY3;
}

void FourBitAdder::setInputBitY3(LogicState::eLogicState inputBitY3) {
    InputBitY3 = inputBitY3;
}

LogicState::eLogicState FourBitAdder::getOutputBit0() const {
    return OutputBit0;
}

void FourBitAdder::setOutputBit0(LogicState::eLogicState outputBit0) {
    OutputBit0 = outputBit0;
}

LogicState::eLogicState FourBitAdder::getOutputBit1() const {
    return OutputBit1;
}

void FourBitAdder::setOutputBit1(LogicState::eLogicState outputBit1) {
    OutputBit1 = outputBit1;
}

LogicState::eLogicState FourBitAdder::getOutputBit2() const {
    return OutputBit2;
}

void FourBitAdder::setOutputBit2(LogicState::eLogicState outputBit2) {
    OutputBit2 = outputBit2;
}

LogicState::eLogicState FourBitAdder::getOutputBit3() const {
    return OutputBit3;
}

void FourBitAdder::setOutputBit3(LogicState::eLogicState outputBit3) {
    OutputBit3 = outputBit3;
}

LogicState::eLogicState FourBitAdder::getCarryOutBit() const {
    return CarryOutBit;
}

void FourBitAdder::setCarryOutBit(LogicState::eLogicState carryOutBit) {
    CarryOutBit = carryOutBit;
}

std::vector<LogicState::eLogicState> FourBitAdder::CurrentState()
{
    std::vector<LogicState::eLogicState> output {};

    BitZeroAdder->setInputX(InputBitX0);
    BitZeroAdder->setInputY(InputBitY0);
    BitZeroAdder->currentState();

    BitOneAdder->setInputX(InputBitX1);
    BitOneAdder->setInputY(InputBitY1);
    BitOneAdder->setCarryIn(BitZeroAdder->getCarryOut());
    BitOneAdder->currentState();

    BitTwoAdder->setInputX(InputBitX2);
    BitTwoAdder->setInputY(InputBitY2);
    BitTwoAdder->setCarryIn(BitOneAdder->getCarryOut());
    BitTwoAdder->currentState();

    BitThreeAdder->setInputX(InputBitX3);
    BitThreeAdder->setInputY(InputBitY3);
    BitThreeAdder->setCarryIn(BitTwoAdder->getCarryOut());
    BitThreeAdder->currentState();

    OutputBit0 = BitZeroAdder->getSumOut();
    OutputBit1 = BitOneAdder->getSumOut();
    OutputBit2 = BitTwoAdder->getSumOut();
    OutputBit3 = BitThreeAdder->getSumOut();
    CarryOutBit = BitThreeAdder->getCarryOut();

    output = {CarryOutBit, OutputBit3, OutputBit2, OutputBit1, OutputBit0};
    return output;
}