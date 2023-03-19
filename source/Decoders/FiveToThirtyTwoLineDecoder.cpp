//
// Created by snake on 12/17/2022.
//

#include "Decoders/FiveToThirtyTwoLineDecoder.h"

FiveToThirtyTwoLineDecoder::FiveToThirtyTwoLineDecoder() {

    twoToFourEnableDecoder = new TwoToFourLineDecoder();
    decoder0 = new ThreeToEightLineDecoder();
    decoder1 = new ThreeToEightLineDecoder();
    decoder2 = new ThreeToEightLineDecoder();
    decoder3 = new ThreeToEightLineDecoder();

}


LogicState::eLogicState FiveToThirtyTwoLineDecoder::getInput0() const {
    return input0;
}

void FiveToThirtyTwoLineDecoder::setInput0(LogicState::eLogicState input0) {
    FiveToThirtyTwoLineDecoder::input0 = input0;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getInput1() const {
    return input1;
}

void FiveToThirtyTwoLineDecoder::setInput1(LogicState::eLogicState input1) {
    FiveToThirtyTwoLineDecoder::input1 = input1;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getInput2() const {
    return input2;
}

void FiveToThirtyTwoLineDecoder::setInput2(LogicState::eLogicState input2) {
    FiveToThirtyTwoLineDecoder::input2 = input2;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getInput3() const {
    return input3;
}

void FiveToThirtyTwoLineDecoder::setInput3(LogicState::eLogicState input3) {
    FiveToThirtyTwoLineDecoder::input3 = input3;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getInput4() const {
    return input4;
}

void FiveToThirtyTwoLineDecoder::setInput4(LogicState::eLogicState input4) {
    FiveToThirtyTwoLineDecoder::input4 = input4;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getWriteEnable() const {
    return writeEnable;
}

void FiveToThirtyTwoLineDecoder::setWriteEnable(LogicState::eLogicState writeEnable) {
    FiveToThirtyTwoLineDecoder::writeEnable = writeEnable;
}

TwoToFourLineDecoder *FiveToThirtyTwoLineDecoder::getTwoToFourEnableDecoder() const {
    return twoToFourEnableDecoder;
}

void FiveToThirtyTwoLineDecoder::setTwoToFourEnableDecoder(TwoToFourLineDecoder *twoToFourEnableDecoder) {
    FiveToThirtyTwoLineDecoder::twoToFourEnableDecoder = twoToFourEnableDecoder;
}

ThreeToEightLineDecoder *FiveToThirtyTwoLineDecoder::getDecoder0() const {
    return decoder0;
}

void FiveToThirtyTwoLineDecoder::setDecoder0(ThreeToEightLineDecoder *decoder0) {
    FiveToThirtyTwoLineDecoder::decoder0 = decoder0;
}

ThreeToEightLineDecoder *FiveToThirtyTwoLineDecoder::getDecoder1() const {
    return decoder1;
}

void FiveToThirtyTwoLineDecoder::setDecoder1(ThreeToEightLineDecoder *decoder1) {
    FiveToThirtyTwoLineDecoder::decoder1 = decoder1;
}

ThreeToEightLineDecoder *FiveToThirtyTwoLineDecoder::getDecoder2() const {
    return decoder2;
}

void FiveToThirtyTwoLineDecoder::setDecoder2(ThreeToEightLineDecoder *decoder2) {
    FiveToThirtyTwoLineDecoder::decoder2 = decoder2;
}

ThreeToEightLineDecoder *FiveToThirtyTwoLineDecoder::getDecoder3() const {
    return decoder3;
}

void FiveToThirtyTwoLineDecoder::setDecoder3(ThreeToEightLineDecoder *decoder3) {
    FiveToThirtyTwoLineDecoder::decoder3 = decoder3;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput0() const {
    return output0;
}

void FiveToThirtyTwoLineDecoder::setOutput0(LogicState::eLogicState output0) {
    FiveToThirtyTwoLineDecoder::output0 = output0;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput1() const {
    return output1;
}

void FiveToThirtyTwoLineDecoder::setOutput1(LogicState::eLogicState output1) {
    FiveToThirtyTwoLineDecoder::output1 = output1;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput2() const {
    return output2;
}

void FiveToThirtyTwoLineDecoder::setOutput2(LogicState::eLogicState output2) {
    FiveToThirtyTwoLineDecoder::output2 = output2;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput3() const {
    return output3;
}

void FiveToThirtyTwoLineDecoder::setOutput3(LogicState::eLogicState output3) {
    FiveToThirtyTwoLineDecoder::output3 = output3;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput4() const {
    return output4;
}

void FiveToThirtyTwoLineDecoder::setOutput4(LogicState::eLogicState output4) {
    FiveToThirtyTwoLineDecoder::output4 = output4;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput5() const {
    return output5;
}

void FiveToThirtyTwoLineDecoder::setOutput5(LogicState::eLogicState output5) {
    FiveToThirtyTwoLineDecoder::output5 = output5;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput6() const {
    return output6;
}

void FiveToThirtyTwoLineDecoder::setOutput6(LogicState::eLogicState output6) {
    FiveToThirtyTwoLineDecoder::output6 = output6;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput7() const {
    return output7;
}

void FiveToThirtyTwoLineDecoder::setOutput7(LogicState::eLogicState output7) {
    FiveToThirtyTwoLineDecoder::output7 = output7;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput8() const {
    return output8;
}

void FiveToThirtyTwoLineDecoder::setOutput8(LogicState::eLogicState output8) {
    FiveToThirtyTwoLineDecoder::output8 = output8;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput9() const {
    return output9;
}

void FiveToThirtyTwoLineDecoder::setOutput9(LogicState::eLogicState output9) {
    FiveToThirtyTwoLineDecoder::output9 = output9;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput10() const {
    return output10;
}

void FiveToThirtyTwoLineDecoder::setOutput10(LogicState::eLogicState output10) {
    FiveToThirtyTwoLineDecoder::output10 = output10;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput11() const {
    return output11;
}

void FiveToThirtyTwoLineDecoder::setOutput11(LogicState::eLogicState output11) {
    FiveToThirtyTwoLineDecoder::output11 = output11;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput12() const {
    return output12;
}

void FiveToThirtyTwoLineDecoder::setOutput12(LogicState::eLogicState output12) {
    FiveToThirtyTwoLineDecoder::output12 = output12;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput13() const {
    return output13;
}

void FiveToThirtyTwoLineDecoder::setOutput13(LogicState::eLogicState output13) {
    FiveToThirtyTwoLineDecoder::output13 = output13;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput14() const {
    return output14;
}

void FiveToThirtyTwoLineDecoder::setOutput14(LogicState::eLogicState output14) {
    FiveToThirtyTwoLineDecoder::output14 = output14;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput15() const {
    return output15;
}

void FiveToThirtyTwoLineDecoder::setOutput15(LogicState::eLogicState output15) {
    FiveToThirtyTwoLineDecoder::output15 = output15;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput16() const {
    return output16;
}

void FiveToThirtyTwoLineDecoder::setOutput16(LogicState::eLogicState output16) {
    FiveToThirtyTwoLineDecoder::output16 = output16;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput17() const {
    return output17;
}

void FiveToThirtyTwoLineDecoder::setOutput17(LogicState::eLogicState output17) {
    FiveToThirtyTwoLineDecoder::output17 = output17;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput18() const {
    return output18;
}

void FiveToThirtyTwoLineDecoder::setOutput18(LogicState::eLogicState output18) {
    FiveToThirtyTwoLineDecoder::output18 = output18;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput19() const {
    return output19;
}

void FiveToThirtyTwoLineDecoder::setOutput19(LogicState::eLogicState output19) {
    FiveToThirtyTwoLineDecoder::output19 = output19;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput20() const {
    return output20;
}

void FiveToThirtyTwoLineDecoder::setOutput20(LogicState::eLogicState output20) {
    FiveToThirtyTwoLineDecoder::output20 = output20;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput21() const {
    return output21;
}

void FiveToThirtyTwoLineDecoder::setOutput21(LogicState::eLogicState output21) {
    FiveToThirtyTwoLineDecoder::output21 = output21;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput22() const {
    return output22;
}

void FiveToThirtyTwoLineDecoder::setOutput22(LogicState::eLogicState output22) {
    FiveToThirtyTwoLineDecoder::output22 = output22;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput23() const {
    return output23;
}

void FiveToThirtyTwoLineDecoder::setOutput23(LogicState::eLogicState output23) {
    FiveToThirtyTwoLineDecoder::output23 = output23;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput24() const {
    return output24;
}

void FiveToThirtyTwoLineDecoder::setOutput24(LogicState::eLogicState output24) {
    FiveToThirtyTwoLineDecoder::output24 = output24;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput25() const {
    return output25;
}

void FiveToThirtyTwoLineDecoder::setOutput25(LogicState::eLogicState output25) {
    FiveToThirtyTwoLineDecoder::output25 = output25;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput26() const {
    return output26;
}

void FiveToThirtyTwoLineDecoder::setOutput26(LogicState::eLogicState output26) {
    FiveToThirtyTwoLineDecoder::output26 = output26;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput27() const {
    return output27;
}

void FiveToThirtyTwoLineDecoder::setOutput27(LogicState::eLogicState output27) {
    FiveToThirtyTwoLineDecoder::output27 = output27;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput28() const {
    return output28;
}

void FiveToThirtyTwoLineDecoder::setOutput28(LogicState::eLogicState output28) {
    FiveToThirtyTwoLineDecoder::output28 = output28;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput29() const {
    return output29;
}

void FiveToThirtyTwoLineDecoder::setOutput29(LogicState::eLogicState output29) {
    FiveToThirtyTwoLineDecoder::output29 = output29;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput30() const {
    return output30;
}

void FiveToThirtyTwoLineDecoder::setOutput30(LogicState::eLogicState output30) {
    FiveToThirtyTwoLineDecoder::output30 = output30;
}

LogicState::eLogicState FiveToThirtyTwoLineDecoder::getOutput31() const {
    return output31;
}

void FiveToThirtyTwoLineDecoder::setOutput31(LogicState::eLogicState output31) {
    FiveToThirtyTwoLineDecoder::output31 = output31;
}

std::vector<LogicState::eLogicState> FiveToThirtyTwoLineDecoder::currentState() {

    twoToFourEnableDecoder->setInputBitZero(input3);
    twoToFourEnableDecoder->setInputBitOne(input4);
    twoToFourEnableDecoder->setEnableInput(writeEnable);
    twoToFourEnableDecoder->currentState();

    decoder0->setInput0(input0);
    decoder0->setInput1(input1);
    decoder0->setInput2(input2);
    decoder0->setWriteEnable(twoToFourEnableDecoder->getOutput0());

    decoder1->setInput0(input0);
    decoder1->setInput1(input1);
    decoder1->setInput2(input2);
    decoder1->setWriteEnable(twoToFourEnableDecoder->getOutput1());

    decoder2->setInput0(input0);
    decoder2->setInput1(input1);
    decoder2->setInput2(input2);
    decoder2->setWriteEnable(twoToFourEnableDecoder->getOutput2());

    decoder3->setInput0(input0);
    decoder3->setInput1(input1);
    decoder3->setInput2(input2);
    decoder3->setWriteEnable(twoToFourEnableDecoder->getOutput3());

    decoder0->currentState();
    decoder1->currentState();
    decoder2->currentState();
    decoder3->currentState();


    output0 = decoder0->getOutput0();
    output1 = decoder0->getOutput1();
    output2 = decoder0->getOutput2();
    output3 = decoder0->getOutput3();
    output4 = decoder0->getOutput4();
    output5 = decoder0->getOutput5();
    output6 = decoder0->getOutput6();
    output7 = decoder0->getOutput7();

    output8 = decoder1->getOutput0();
    output9 = decoder1->getOutput1();
    output10 = decoder1->getOutput2();
    output11 = decoder1->getOutput3();
    output12 = decoder1->getOutput4();
    output13 = decoder1->getOutput5();
    output14 = decoder1->getOutput6();
    output15 = decoder1->getOutput7();

    output16 = decoder2->getOutput0();
    output17 = decoder2->getOutput1();
    output18 = decoder2->getOutput2();
    output19 = decoder2->getOutput3();
    output20 = decoder2->getOutput4();
    output21 = decoder2->getOutput5();
    output22 = decoder2->getOutput6();
    output23 = decoder2->getOutput7();

    output24 = decoder3->getOutput0();
    output25 = decoder3->getOutput1();
    output26 = decoder3->getOutput2();
    output27 = decoder3->getOutput3();
    output28 = decoder3->getOutput4();
    output29 = decoder3->getOutput5();
    output30 = decoder3->getOutput6();
    output31 = decoder3->getOutput7();




    return {output31, output30, output29, output28, output27, output26, output25, output24,
            output23, output22, output21, output20, output19, output18, output17, output16,
            output15, output14, output13, output12, output11, output10, output9, output8,
            output7, output6, output5, output4, output3, output2, output1, output0};
}
