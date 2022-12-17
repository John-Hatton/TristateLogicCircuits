//
// Created by snake on 12/17/2022.
//

#include "Decoders/ThreeToEightLineDecoder.h"

ThreeToEightLineDecoder::ThreeToEightLineDecoder() {

    decZeroWriteEnableNot = new NotGate();
    decZeroWriteEnableAnd = new AndGate();
    decOneWriteEnableAnd = new AndGate();
    decoderZero = new TwoToFourLineDecoder();
    decoderOne = new TwoToFourLineDecoder();

}


LogicState::eLogicState ThreeToEightLineDecoder::getInput0() const {
    return input0;
}

void ThreeToEightLineDecoder::setInput0(LogicState::eLogicState input0) {
    ThreeToEightLineDecoder::input0 = input0;
}

LogicState::eLogicState ThreeToEightLineDecoder::getInput1() const {
    return input1;
}

void ThreeToEightLineDecoder::setInput1(LogicState::eLogicState input1) {
    ThreeToEightLineDecoder::input1 = input1;
}

LogicState::eLogicState ThreeToEightLineDecoder::getInput2() const {
    return input2;
}

void ThreeToEightLineDecoder::setInput2(LogicState::eLogicState input2) {
    ThreeToEightLineDecoder::input2 = input2;
}

LogicState::eLogicState ThreeToEightLineDecoder::getWriteEnable() const {
    return writeEnable;
}

void ThreeToEightLineDecoder::setWriteEnable(LogicState::eLogicState writeEnable) {
    ThreeToEightLineDecoder::writeEnable = writeEnable;
}

NotGate *ThreeToEightLineDecoder::getDecZeroWriteEnableNot() const {
    return decZeroWriteEnableNot;
}

void ThreeToEightLineDecoder::setDecZeroWriteEnableNot(NotGate *decZeroWriteEnableNot) {
    ThreeToEightLineDecoder::decZeroWriteEnableNot = decZeroWriteEnableNot;
}

AndGate *ThreeToEightLineDecoder::getDecZeroWriteEnableAnd() const {
    return decZeroWriteEnableAnd;
}

void ThreeToEightLineDecoder::setDecZeroWriteEnableAnd(AndGate *decZeroWriteEnableAnd) {
    ThreeToEightLineDecoder::decZeroWriteEnableAnd = decZeroWriteEnableAnd;
}

AndGate *ThreeToEightLineDecoder::getDecOneWriteEnableAnd() const {
    return decOneWriteEnableAnd;
}

void ThreeToEightLineDecoder::setDecOneWriteEnableAnd(AndGate *decOneWriteEnableAnd) {
    ThreeToEightLineDecoder::decOneWriteEnableAnd = decOneWriteEnableAnd;
}

TwoToFourLineDecoder *ThreeToEightLineDecoder::getDecoderZero() const {
    return decoderZero;
}

void ThreeToEightLineDecoder::setDecoderZero(TwoToFourLineDecoder *decoderZero) {
    ThreeToEightLineDecoder::decoderZero = decoderZero;
}

TwoToFourLineDecoder *ThreeToEightLineDecoder::getDecoderOne() const {
    return decoderOne;
}

void ThreeToEightLineDecoder::setDecoderOne(TwoToFourLineDecoder *decoderOne) {
    ThreeToEightLineDecoder::decoderOne = decoderOne;
}

LogicState::eLogicState ThreeToEightLineDecoder::getOutput0() const {
    return output0;
}

void ThreeToEightLineDecoder::setOutput0(LogicState::eLogicState output0) {
    ThreeToEightLineDecoder::output0 = output0;
}

LogicState::eLogicState ThreeToEightLineDecoder::getOutput1() const {
    return output1;
}

void ThreeToEightLineDecoder::setOutput1(LogicState::eLogicState output1) {
    ThreeToEightLineDecoder::output1 = output1;
}

LogicState::eLogicState ThreeToEightLineDecoder::getOutput2() const {
    return output2;
}

void ThreeToEightLineDecoder::setOutput2(LogicState::eLogicState output2) {
    ThreeToEightLineDecoder::output2 = output2;
}

LogicState::eLogicState ThreeToEightLineDecoder::getOutput3() const {
    return output3;
}

void ThreeToEightLineDecoder::setOutput3(LogicState::eLogicState output3) {
    ThreeToEightLineDecoder::output3 = output3;
}

LogicState::eLogicState ThreeToEightLineDecoder::getOutput4() const {
    return output4;
}

void ThreeToEightLineDecoder::setOutput4(LogicState::eLogicState output4) {
    ThreeToEightLineDecoder::output4 = output4;
}

LogicState::eLogicState ThreeToEightLineDecoder::getOutput5() const {
    return output5;
}

void ThreeToEightLineDecoder::setOutput5(LogicState::eLogicState output5) {
    ThreeToEightLineDecoder::output5 = output5;
}

LogicState::eLogicState ThreeToEightLineDecoder::getOutput6() const {
    return output6;
}

void ThreeToEightLineDecoder::setOutput6(LogicState::eLogicState output6) {
    ThreeToEightLineDecoder::output6 = output6;
}

LogicState::eLogicState ThreeToEightLineDecoder::getOutput7() const {
    return output7;
}

void ThreeToEightLineDecoder::setOutput7(LogicState::eLogicState output7) {
    ThreeToEightLineDecoder::output7 = output7;
}

std::vector<LogicState::eLogicState> ThreeToEightLineDecoder::currentState() {

    decZeroWriteEnableNot->setInput(input2);
    decZeroWriteEnableAnd->setInputX(decZeroWriteEnableNot->answer());
    decZeroWriteEnableAnd->setInputY(writeEnable);

    decOneWriteEnableAnd->setInputX(writeEnable);
    decOneWriteEnableAnd->setInputY(input2);

    decoderZero->setInputBitZero(input0);
    decoderZero->setInputBitOne(input1);
    decoderZero->setEnableInput(decZeroWriteEnableAnd->answer());
    decoderZero->currentState();

    decoderOne->setInputBitZero(input0);
    decoderOne->setInputBitOne(input1);
    decoderOne->setEnableInput(decOneWriteEnableAnd->answer());
    decoderOne->currentState();

    output0 = decoderZero->getOutput0();
    output1 = decoderZero->getOutput1();
    output2 = decoderZero->getOutput2();
    output3 = decoderZero->getOutput3();

    output4 = decoderOne->getOutput0();
    output5 = decoderOne->getOutput1();
    output6 = decoderOne->getOutput2();
    output7 = decoderOne->getOutput3();


    return {output7, output6, output5, output4,
            output3, output2, output1, output0};
}
