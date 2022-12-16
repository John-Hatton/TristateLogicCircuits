//
// Created by physiker on 12/16/2022.
//

#include "Decoders/TwoToFourLineDecoder.h"

TwoToFourLineDecoder::TwoToFourLineDecoder() {

    zeroNot = new NotGate();
    oneNot = new NotGate();
    output0TriAnd = new TriInputAndGate();
    output1TriAnd = new TriInputAndGate();
    output2TriAnd = new TriInputAndGate();
    output3TriAnd = new TriInputAndGate();

}

LogicState::eLogicState TwoToFourLineDecoder::getInputBitZero() const {
    return inputBitZero;
}

void TwoToFourLineDecoder::setInputBitZero(LogicState::eLogicState inputBitZero) {
    TwoToFourLineDecoder::inputBitZero = inputBitZero;
}

LogicState::eLogicState TwoToFourLineDecoder::getInputBitOne() const {
    return inputBitOne;
}

void TwoToFourLineDecoder::setInputBitOne(LogicState::eLogicState inputBitOne) {
    TwoToFourLineDecoder::inputBitOne = inputBitOne;
}

LogicState::eLogicState TwoToFourLineDecoder::getEnableInput() const {
    return enableInput;
}

void TwoToFourLineDecoder::setEnableInput(LogicState::eLogicState enableInput) {
    TwoToFourLineDecoder::enableInput = enableInput;
}

LogicState::eLogicState TwoToFourLineDecoder::getOutput0() const {
    return output0;
}

void TwoToFourLineDecoder::setOutput0(LogicState::eLogicState output0) {
    TwoToFourLineDecoder::output0 = output0;
}

LogicState::eLogicState TwoToFourLineDecoder::getOutput1() const {
    return output1;
}

void TwoToFourLineDecoder::setOutput1(LogicState::eLogicState output1) {
    TwoToFourLineDecoder::output1 = output1;
}

LogicState::eLogicState TwoToFourLineDecoder::getOutput2() const {
    return output2;
}

void TwoToFourLineDecoder::setOutput2(LogicState::eLogicState output2) {
    TwoToFourLineDecoder::output2 = output2;
}

LogicState::eLogicState TwoToFourLineDecoder::getOutput3() const {
    return output3;
}

void TwoToFourLineDecoder::setOutput3(LogicState::eLogicState output3) {
    TwoToFourLineDecoder::output3 = output3;
}

NotGate *TwoToFourLineDecoder::getZeroNot() const {
    return zeroNot;
}

void TwoToFourLineDecoder::setZeroNot(NotGate *zeroNot) {
    TwoToFourLineDecoder::zeroNot = zeroNot;
}

NotGate *TwoToFourLineDecoder::getOneNot() const {
    return oneNot;
}

void TwoToFourLineDecoder::setOneNot(NotGate *oneNot) {
    TwoToFourLineDecoder::oneNot = oneNot;
}

TriInputAndGate *TwoToFourLineDecoder::getOutput0TriAnd() const {
    return output0TriAnd;
}

void TwoToFourLineDecoder::setOutput0TriAnd(TriInputAndGate *output0TriAnd) {
    TwoToFourLineDecoder::output0TriAnd = output0TriAnd;
}

TriInputAndGate *TwoToFourLineDecoder::getOutput1TriAnd() const {
    return output1TriAnd;
}

void TwoToFourLineDecoder::setOutput1TriAnd(TriInputAndGate *output1TriAnd) {
    TwoToFourLineDecoder::output1TriAnd = output1TriAnd;
}

TriInputAndGate *TwoToFourLineDecoder::getOutput2TriAnd() const {
    return output2TriAnd;
}

void TwoToFourLineDecoder::setOutput2TriAnd(TriInputAndGate *output2TriAnd) {
    TwoToFourLineDecoder::output2TriAnd = output2TriAnd;
}

TriInputAndGate *TwoToFourLineDecoder::getOutput3TriAnd() const {
    return output3TriAnd;
}

void TwoToFourLineDecoder::setOutput3TriAnd(TriInputAndGate *output3TriAnd) {
    TwoToFourLineDecoder::output3TriAnd = output3TriAnd;
}

std::vector<LogicState::eLogicState> TwoToFourLineDecoder::currentState() {

    zeroNot->setInput(inputBitZero);
    oneNot->setInput(inputBitOne);

    output0TriAnd->setInputX(zeroNot->answer());
    output0TriAnd->setInputY(oneNot->answer());
    output0TriAnd->setInputZ(enableInput);
    output0 = output0TriAnd->answer();

    output1TriAnd->setInputX(inputBitZero);
    output1TriAnd->setInputY(oneNot->answer());
    output1TriAnd->setInputZ(enableInput);
    output1 = output1TriAnd->answer();

    output2TriAnd->setInputX(zeroNot->answer());
    output2TriAnd->setInputY(inputBitOne);
    output2TriAnd->setInputZ(enableInput);
    output2 = output2TriAnd->answer();

    output3TriAnd->setInputX(inputBitZero);
    output3TriAnd->setInputY(inputBitOne);
    output3TriAnd->setInputZ(enableInput);
    output3 = output3TriAnd->answer();

    return {output3, output2, output1, output0};
}
