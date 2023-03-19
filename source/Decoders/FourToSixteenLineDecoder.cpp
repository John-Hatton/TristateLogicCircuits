//
// Created by snake on 12/17/2022.
//

#include "Decoders/FourToSixteenLineDecoder.h"


FourToSixteenLineDecoder::FourToSixteenLineDecoder() {

    enableDecoder = new TwoToFourLineDecoder();
    decoder0 = new TwoToFourLineDecoder();
    decoder1 = new TwoToFourLineDecoder();
    decoder2 = new TwoToFourLineDecoder();
    decoder3 = new TwoToFourLineDecoder();

}

LogicState::eLogicState FourToSixteenLineDecoder::getDataA() const {
    return dataA;
}

void FourToSixteenLineDecoder::setDataA(LogicState::eLogicState dataA) {
    FourToSixteenLineDecoder::dataA = dataA;
}

LogicState::eLogicState FourToSixteenLineDecoder::getDataB() const {
    return dataB;
}

void FourToSixteenLineDecoder::setDataB(LogicState::eLogicState dataB) {
    FourToSixteenLineDecoder::dataB = dataB;
}

LogicState::eLogicState FourToSixteenLineDecoder::getDataC() const {
    return dataC;
}

void FourToSixteenLineDecoder::setDataC(LogicState::eLogicState dataC) {
    FourToSixteenLineDecoder::dataC = dataC;
}

LogicState::eLogicState FourToSixteenLineDecoder::getDataD() const {
    return dataD;
}

void FourToSixteenLineDecoder::setDataD(LogicState::eLogicState dataD) {
    FourToSixteenLineDecoder::dataD = dataD;
}

LogicState::eLogicState FourToSixteenLineDecoder::getWriteEnable() const {
    return writeEnable;
}

void FourToSixteenLineDecoder::setWriteEnable(LogicState::eLogicState writeEnable) {
    FourToSixteenLineDecoder::writeEnable = writeEnable;
}

TwoToFourLineDecoder *FourToSixteenLineDecoder::getEnableDecoder() const {
    return enableDecoder;
}

void FourToSixteenLineDecoder::setEnableDecoder(TwoToFourLineDecoder *enableDecoder) {
    FourToSixteenLineDecoder::enableDecoder = enableDecoder;
}

TwoToFourLineDecoder *FourToSixteenLineDecoder::getDecoder0() const {
    return decoder0;
}

void FourToSixteenLineDecoder::setDecoder0(TwoToFourLineDecoder *decoder0) {
    FourToSixteenLineDecoder::decoder0 = decoder0;
}

TwoToFourLineDecoder *FourToSixteenLineDecoder::getDecoder1() const {
    return decoder1;
}

void FourToSixteenLineDecoder::setDecoder1(TwoToFourLineDecoder *decoder1) {
    FourToSixteenLineDecoder::decoder1 = decoder1;
}

TwoToFourLineDecoder *FourToSixteenLineDecoder::getDecoder2() const {
    return decoder2;
}

void FourToSixteenLineDecoder::setDecoder2(TwoToFourLineDecoder *decoder2) {
    FourToSixteenLineDecoder::decoder2 = decoder2;
}

TwoToFourLineDecoder *FourToSixteenLineDecoder::getDecoder3() const {
    return decoder3;
}

void FourToSixteenLineDecoder::setDecoder3(TwoToFourLineDecoder *decoder3) {
    FourToSixteenLineDecoder::decoder3 = decoder3;
}


LogicState::eLogicState FourToSixteenLineDecoder::getOutput0() const {
    return output0;
}

void FourToSixteenLineDecoder::setOutput0(LogicState::eLogicState output0) {
    FourToSixteenLineDecoder::output0 = output0;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput1() const {
    return output1;
}

void FourToSixteenLineDecoder::setOutput1(LogicState::eLogicState output1) {
    FourToSixteenLineDecoder::output1 = output1;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput2() const {
    return output2;
}

void FourToSixteenLineDecoder::setOutput2(LogicState::eLogicState output2) {
    FourToSixteenLineDecoder::output2 = output2;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput3() const {
    return output3;
}

void FourToSixteenLineDecoder::setOutput3(LogicState::eLogicState output3) {
    FourToSixteenLineDecoder::output3 = output3;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput4() const {
    return output4;
}

void FourToSixteenLineDecoder::setOutput4(LogicState::eLogicState output4) {
    FourToSixteenLineDecoder::output4 = output4;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput5() const {
    return output5;
}

void FourToSixteenLineDecoder::setOutput5(LogicState::eLogicState output5) {
    FourToSixteenLineDecoder::output5 = output5;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput6() const {
    return output6;
}

void FourToSixteenLineDecoder::setOutput6(LogicState::eLogicState output6) {
    FourToSixteenLineDecoder::output6 = output6;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput7() const {
    return output7;
}

void FourToSixteenLineDecoder::setOutput7(LogicState::eLogicState output7) {
    FourToSixteenLineDecoder::output7 = output7;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput8() const {
    return output8;
}

void FourToSixteenLineDecoder::setOutput8(LogicState::eLogicState output8) {
    FourToSixteenLineDecoder::output8 = output8;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput9() const {
    return output9;
}

void FourToSixteenLineDecoder::setOutput9(LogicState::eLogicState output9) {
    FourToSixteenLineDecoder::output9 = output9;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput10() const {
    return output10;
}

void FourToSixteenLineDecoder::setOutput10(LogicState::eLogicState output10) {
    FourToSixteenLineDecoder::output10 = output10;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput11() const {
    return output11;
}

void FourToSixteenLineDecoder::setOutput11(LogicState::eLogicState output11) {
    FourToSixteenLineDecoder::output11 = output11;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput12() const {
    return output12;
}

void FourToSixteenLineDecoder::setOutput12(LogicState::eLogicState output12) {
    FourToSixteenLineDecoder::output12 = output12;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput13() const {
    return output13;
}

void FourToSixteenLineDecoder::setOutput13(LogicState::eLogicState output13) {
    FourToSixteenLineDecoder::output13 = output13;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput14() const {
    return output14;
}

void FourToSixteenLineDecoder::setOutput14(LogicState::eLogicState output14) {
    FourToSixteenLineDecoder::output14 = output14;
}

LogicState::eLogicState FourToSixteenLineDecoder::getOutput15() const {
    return output15;
}

void FourToSixteenLineDecoder::setOutput15(LogicState::eLogicState output15) {
    FourToSixteenLineDecoder::output15 = output15;
}

std::vector<LogicState::eLogicState> FourToSixteenLineDecoder::currentState() {

    enableDecoder->setInputBitZero(dataC);
    enableDecoder->setInputBitOne(dataD);
    enableDecoder->setEnableInput(writeEnable);
    enableDecoder->currentState();

    decoder0->setInputBitZero(dataA);
    decoder0->setInputBitOne(dataB);

    decoder1->setInputBitZero(dataA);
    decoder1->setInputBitOne(dataB);

    decoder2->setInputBitZero(dataA);
    decoder2->setInputBitOne(dataB);

    decoder3->setInputBitZero(dataA);
    decoder3->setInputBitOne(dataB);

    decoder0->setEnableInput(enableDecoder->getOutput0());
    decoder1->setEnableInput(enableDecoder->getOutput1());
    decoder2->setEnableInput(enableDecoder->getOutput2());
    decoder3->setEnableInput(enableDecoder->getOutput3());

    decoder0->currentState();
    decoder1->currentState();
    decoder2->currentState();
    decoder3->currentState();

    output0 = decoder0->getOutput0();
    output1 = decoder0->getOutput1();
    output2 = decoder0->getOutput2();
    output3 = decoder0->getOutput3();

    output4 = decoder1->getOutput0();
    output5 = decoder1->getOutput1();
    output6 = decoder1->getOutput2();
    output7 = decoder1->getOutput3();

    output8 = decoder2->getOutput0();
    output9 = decoder2->getOutput1();
    output10 = decoder2->getOutput2();
    output11 = decoder2->getOutput3();

    output12 = decoder3->getOutput0();
    output13 = decoder3->getOutput1();
    output14 = decoder3->getOutput2();
    output15 = decoder3->getOutput3();

    return {output15,output14,output13,output12,
            output11,output10,output9,output8,
            output7,output6,output5,output4,
            output3,output2,output1,output0};
}