//
// Created by snake on 12/16/2022.
//

#include "Memory/FourBitFourWordRAM.h"

FourBitFourWordRAM::FourBitFourWordRAM() {

    data0TriStateBuffer = new TriStateBufferGate();
    data1TriStateBuffer = new TriStateBufferGate();
    data2TriStateBuffer = new TriStateBufferGate();
    data3TriStateBuffer = new TriStateBufferGate();

    decoderEnableNot = new NotGate();

    twoToFourDecoder = new TwoToFourLineDecoder();

    memA0 = new D_FlipFlop();
    memA1 = new D_FlipFlop();
    memA2 = new D_FlipFlop();
    memA3 = new D_FlipFlop();
    memB0 = new D_FlipFlop();
    memB1 = new D_FlipFlop();
    memB2 = new D_FlipFlop();
    memB3 = new D_FlipFlop();
    memC0 = new D_FlipFlop();
    memC1 = new D_FlipFlop();
    memC2 = new D_FlipFlop();
    memC3 = new D_FlipFlop();
    memD0 = new D_FlipFlop();
    memD1 = new D_FlipFlop();
    memD2 = new D_FlipFlop();
    memD3 = new D_FlipFlop();

    data0QuadOr = new QuadInputOrGate();
    data1QuadOr = new QuadInputOrGate();
    data2QuadOr = new QuadInputOrGate();
    data3QuadOr = new QuadInputOrGate();

    output0TriStateBuffer = new TriStateBufferGate();
    output1TriStateBuffer = new TriStateBufferGate();
    output2TriStateBuffer = new TriStateBufferGate();
    output3TriStateBuffer = new TriStateBufferGate();
}

LogicState::eLogicState FourBitFourWordRAM::getAddr0() const {
    return addr0;
}

void FourBitFourWordRAM::setAddr0(LogicState::eLogicState addr0) {
    FourBitFourWordRAM::addr0 = addr0;
}

LogicState::eLogicState FourBitFourWordRAM::getAddr1() const {
    return addr1;
}

void FourBitFourWordRAM::setAddr1(LogicState::eLogicState addr1) {
    FourBitFourWordRAM::addr1 = addr1;
}

LogicState::eLogicState FourBitFourWordRAM::getData0() const {
    return data0;
}

void FourBitFourWordRAM::setData0(LogicState::eLogicState data0) {
    FourBitFourWordRAM::data0 = data0;
}

LogicState::eLogicState FourBitFourWordRAM::getData1() const {
    return data1;
}

void FourBitFourWordRAM::setData1(LogicState::eLogicState data1) {
    FourBitFourWordRAM::data1 = data1;
}

LogicState::eLogicState FourBitFourWordRAM::getData2() const {
    return data2;
}

void FourBitFourWordRAM::setData2(LogicState::eLogicState data2) {
    FourBitFourWordRAM::data2 = data2;
}

LogicState::eLogicState FourBitFourWordRAM::getData3() const {
    return data3;
}

void FourBitFourWordRAM::setData3(LogicState::eLogicState data3) {
    FourBitFourWordRAM::data3 = data3;
}

LogicState::eLogicState FourBitFourWordRAM::getOutput0() const {
    return output0;
}

void FourBitFourWordRAM::setOutput0(LogicState::eLogicState output0) {
    FourBitFourWordRAM::output0 = output0;
}

LogicState::eLogicState FourBitFourWordRAM::getOutput1() const {
    return output1;
}

void FourBitFourWordRAM::setOutput1(LogicState::eLogicState output1) {
    FourBitFourWordRAM::output1 = output1;
}

LogicState::eLogicState FourBitFourWordRAM::getOutput2() const {
    return output2;
}

void FourBitFourWordRAM::setOutput2(LogicState::eLogicState output2) {
    FourBitFourWordRAM::output2 = output2;
}

LogicState::eLogicState FourBitFourWordRAM::getOutput3() const {
    return output3;
}

void FourBitFourWordRAM::setOutput3(LogicState::eLogicState output3) {
    FourBitFourWordRAM::output3 = output3;
}

LogicState::eLogicState FourBitFourWordRAM::getWriteEnable() const {
    return writeEnable;
}

void FourBitFourWordRAM::setWriteEnable(LogicState::eLogicState writeEnable) {
    FourBitFourWordRAM::writeEnable = writeEnable;
}

LogicState::eLogicState FourBitFourWordRAM::getChipSelect() const {
    return chipSelect;
}

void FourBitFourWordRAM::setChipSelect(LogicState::eLogicState chipSelect) {
    FourBitFourWordRAM::chipSelect = chipSelect;
}

TriStateBufferGate *FourBitFourWordRAM::getData0TriStateBuffer() const {
    return data0TriStateBuffer;
}

void FourBitFourWordRAM::setData0TriStateBuffer(TriStateBufferGate *data0TriStateBuffer) {
    FourBitFourWordRAM::data0TriStateBuffer = data0TriStateBuffer;
}

TriStateBufferGate *FourBitFourWordRAM::getData1TriStateBuffer() const {
    return data1TriStateBuffer;
}

void FourBitFourWordRAM::setData1TriStateBuffer(TriStateBufferGate *data1TriStateBuffer) {
    FourBitFourWordRAM::data1TriStateBuffer = data1TriStateBuffer;
}

TriStateBufferGate *FourBitFourWordRAM::getData2TriStateBuffer() const {
    return data2TriStateBuffer;
}

void FourBitFourWordRAM::setData2TriStateBuffer(TriStateBufferGate *data2TriStateBuffer) {
    FourBitFourWordRAM::data2TriStateBuffer = data2TriStateBuffer;
}

TriStateBufferGate *FourBitFourWordRAM::getData3TriStateBuffer() const {
    return data3TriStateBuffer;
}

void FourBitFourWordRAM::setData3TriStateBuffer(TriStateBufferGate *data3TriStateBuffer) {
    FourBitFourWordRAM::data3TriStateBuffer = data3TriStateBuffer;
}

NotGate *FourBitFourWordRAM::getDecoderEnableNot() const {
    return decoderEnableNot;
}

void FourBitFourWordRAM::setDecoderEnableNot(NotGate *decoderEnableNot) {
    FourBitFourWordRAM::decoderEnableNot = decoderEnableNot;
}

TwoToFourLineDecoder *FourBitFourWordRAM::getTwoToFourDecoder() const {
    return twoToFourDecoder;
}

void FourBitFourWordRAM::setTwoToFourDecoder(TwoToFourLineDecoder *twoToFourDecoder) {
    FourBitFourWordRAM::twoToFourDecoder = twoToFourDecoder;
}

D_FlipFlop *FourBitFourWordRAM::getMemA0() const {
    return memA0;
}

void FourBitFourWordRAM::setMemA0(D_FlipFlop *memA0) {
    FourBitFourWordRAM::memA0 = memA0;
}

D_FlipFlop *FourBitFourWordRAM::getMemA1() const {
    return memA1;
}

void FourBitFourWordRAM::setMemA1(D_FlipFlop *memA1) {
    FourBitFourWordRAM::memA1 = memA1;
}

D_FlipFlop *FourBitFourWordRAM::getMemA2() const {
    return memA2;
}

void FourBitFourWordRAM::setMemA2(D_FlipFlop *memA2) {
    FourBitFourWordRAM::memA2 = memA2;
}

D_FlipFlop *FourBitFourWordRAM::getMemA3() const {
    return memA3;
}

void FourBitFourWordRAM::setMemA3(D_FlipFlop *memA3) {
    FourBitFourWordRAM::memA3 = memA3;
}

D_FlipFlop *FourBitFourWordRAM::getMemB0() const {
    return memB0;
}

void FourBitFourWordRAM::setMemB0(D_FlipFlop *memB0) {
    FourBitFourWordRAM::memB0 = memB0;
}

D_FlipFlop *FourBitFourWordRAM::getMemB1() const {
    return memB1;
}

void FourBitFourWordRAM::setMemB1(D_FlipFlop *memB1) {
    FourBitFourWordRAM::memB1 = memB1;
}

D_FlipFlop *FourBitFourWordRAM::getMemB2() const {
    return memB2;
}

void FourBitFourWordRAM::setMemB2(D_FlipFlop *memB2) {
    FourBitFourWordRAM::memB2 = memB2;
}

D_FlipFlop *FourBitFourWordRAM::getMemB3() const {
    return memB3;
}

void FourBitFourWordRAM::setMemB3(D_FlipFlop *memB3) {
    FourBitFourWordRAM::memB3 = memB3;
}

D_FlipFlop *FourBitFourWordRAM::getMemC0() const {
    return memC0;
}

void FourBitFourWordRAM::setMemC0(D_FlipFlop *memC0) {
    FourBitFourWordRAM::memC0 = memC0;
}

D_FlipFlop *FourBitFourWordRAM::getMemC1() const {
    return memC1;
}

void FourBitFourWordRAM::setMemC1(D_FlipFlop *memC1) {
    FourBitFourWordRAM::memC1 = memC1;
}

D_FlipFlop *FourBitFourWordRAM::getMemC2() const {
    return memC2;
}

void FourBitFourWordRAM::setMemC2(D_FlipFlop *memC2) {
    FourBitFourWordRAM::memC2 = memC2;
}

D_FlipFlop *FourBitFourWordRAM::getMemC3() const {
    return memC3;
}

void FourBitFourWordRAM::setMemC3(D_FlipFlop *memC3) {
    FourBitFourWordRAM::memC3 = memC3;
}

D_FlipFlop *FourBitFourWordRAM::getMemD0() const {
    return memD0;
}

void FourBitFourWordRAM::setMemD0(D_FlipFlop *memD0) {
    FourBitFourWordRAM::memD0 = memD0;
}

D_FlipFlop *FourBitFourWordRAM::getMemD1() const {
    return memD1;
}

void FourBitFourWordRAM::setMemD1(D_FlipFlop *memD1) {
    FourBitFourWordRAM::memD1 = memD1;
}

D_FlipFlop *FourBitFourWordRAM::getMemD2() const {
    return memD2;
}

void FourBitFourWordRAM::setMemD2(D_FlipFlop *memD2) {
    FourBitFourWordRAM::memD2 = memD2;
}

D_FlipFlop *FourBitFourWordRAM::getMemD3() const {
    return memD3;
}

void FourBitFourWordRAM::setMemD3(D_FlipFlop *memD3) {
    FourBitFourWordRAM::memD3 = memD3;
}

QuadInputOrGate *FourBitFourWordRAM::getData0QuadOr() const {
    return data0QuadOr;
}

void FourBitFourWordRAM::setData0QuadOr(QuadInputOrGate *data0QuadOr) {
    FourBitFourWordRAM::data0QuadOr = data0QuadOr;
}

QuadInputOrGate *FourBitFourWordRAM::getData1QuadOr() const {
    return data1QuadOr;
}

void FourBitFourWordRAM::setData1QuadOr(QuadInputOrGate *data1QuadOr) {
    FourBitFourWordRAM::data1QuadOr = data1QuadOr;
}

QuadInputOrGate *FourBitFourWordRAM::getData2QuadOr() const {
    return data2QuadOr;
}

void FourBitFourWordRAM::setData2QuadOr(QuadInputOrGate *data2QuadOr) {
    FourBitFourWordRAM::data2QuadOr = data2QuadOr;
}

QuadInputOrGate *FourBitFourWordRAM::getData3QuadOr() const {
    return data3QuadOr;
}

void FourBitFourWordRAM::setData3QuadOr(QuadInputOrGate *data3QuadOr) {
    FourBitFourWordRAM::data3QuadOr = data3QuadOr;
}

TriStateBufferGate *FourBitFourWordRAM::getOutput0TriStateBuffer() const {
    return output0TriStateBuffer;
}

void FourBitFourWordRAM::setOutput0TriStateBuffer(TriStateBufferGate *output0TriStateBuffer) {
    FourBitFourWordRAM::output0TriStateBuffer = output0TriStateBuffer;
}

TriStateBufferGate *FourBitFourWordRAM::getOutput1TriStateBuffer() const {
    return output1TriStateBuffer;
}

void FourBitFourWordRAM::setOutput1TriStateBuffer(TriStateBufferGate *output1TriStateBuffer) {
    FourBitFourWordRAM::output1TriStateBuffer = output1TriStateBuffer;
}

TriStateBufferGate *FourBitFourWordRAM::getOutput2TriStateBuffer() const {
    return output2TriStateBuffer;
}

void FourBitFourWordRAM::setOutput2TriStateBuffer(TriStateBufferGate *output2TriStateBuffer) {
    FourBitFourWordRAM::output2TriStateBuffer = output2TriStateBuffer;
}

TriStateBufferGate *FourBitFourWordRAM::getOutput3TriStateBuffer() const {
    return output3TriStateBuffer;
}

void FourBitFourWordRAM::setOutput3TriStateBuffer(TriStateBufferGate *output3TriStateBuffer) {
    FourBitFourWordRAM::output3TriStateBuffer = output3TriStateBuffer;
}

std::vector<LogicState::eLogicState> FourBitFourWordRAM::currentState() {

    data0TriStateBuffer->setDataInput(data0);
    data1TriStateBuffer->setDataInput(data1);
    data2TriStateBuffer->setDataInput(data2);
    data3TriStateBuffer->setDataInput(data3);

    data0TriStateBuffer->setEnableInput(writeEnable);
    data1TriStateBuffer->setEnableInput(writeEnable);
    data2TriStateBuffer->setEnableInput(writeEnable);
    data3TriStateBuffer->setEnableInput(writeEnable);


    decoderEnableNot->setInput(chipSelect);

    twoToFourDecoder->setEnableInput(decoderEnableNot->answer());
    twoToFourDecoder->setInputBitZero(addr0);
    twoToFourDecoder->setInputBitOne(addr1);
    twoToFourDecoder->currentState();


    memA0->setDataInput(data0TriStateBuffer->answer());
    memA0->setEnableInput(twoToFourDecoder->getOutput0());
    memA1->setDataInput(data1TriStateBuffer->answer());
    memA1->setEnableInput(twoToFourDecoder->getOutput0());
    memA2->setDataInput(data2TriStateBuffer->answer());
    memA2->setEnableInput(twoToFourDecoder->getOutput0());
    memA3->setDataInput(data3TriStateBuffer->answer());
    memA3->setEnableInput(twoToFourDecoder->getOutput0());


    memB0->setDataInput(data0TriStateBuffer->answer());
    memB0->setEnableInput(twoToFourDecoder->getOutput1());
    memB1->setDataInput(data1TriStateBuffer->answer());
    memB1->setEnableInput(twoToFourDecoder->getOutput1());
    memB2->setDataInput(data2TriStateBuffer->answer());
    memB2->setEnableInput(twoToFourDecoder->getOutput1());
    memB3->setDataInput(data3TriStateBuffer->answer());
    memB3->setEnableInput(twoToFourDecoder->getOutput1());

    memC0->setDataInput(data0TriStateBuffer->answer());
    memC0->setEnableInput(twoToFourDecoder->getOutput2());
    memC1->setDataInput(data1TriStateBuffer->answer());
    memC1->setEnableInput(twoToFourDecoder->getOutput2());
    memC2->setDataInput(data2TriStateBuffer->answer());
    memC2->setEnableInput(twoToFourDecoder->getOutput2());
    memC3->setDataInput(data3TriStateBuffer->answer());
    memC3->setEnableInput(twoToFourDecoder->getOutput2());

    memD0->setDataInput(data0TriStateBuffer->answer());
    memD0->setEnableInput(twoToFourDecoder->getOutput3());
    memD1->setDataInput(data1TriStateBuffer->answer());
    memD1->setEnableInput(twoToFourDecoder->getOutput3());
    memD2->setDataInput(data2TriStateBuffer->answer());
    memD2->setEnableInput(twoToFourDecoder->getOutput3());
    memD3->setDataInput(data3TriStateBuffer->answer());
    memD3->setEnableInput(twoToFourDecoder->getOutput3());


    data0QuadOr->setInputA(memA0->answer());
    data0QuadOr->setInputB(memB0->answer());
    data0QuadOr->setInputC(memC0->answer());
    data0QuadOr->setInputD(memD0->answer());

    data1QuadOr->setInputA(memA1->answer());
    data1QuadOr->setInputB(memB1->answer());
    data1QuadOr->setInputC(memC1->answer());
    data1QuadOr->setInputD(memD1->answer());

    data2QuadOr->setInputA(memA2->answer());
    data2QuadOr->setInputB(memB2->answer());
    data2QuadOr->setInputC(memC2->answer());
    data2QuadOr->setInputD(memD2->answer());

    data3QuadOr->setInputA(memA3->answer());
    data3QuadOr->setInputB(memB3->answer());
    data3QuadOr->setInputC(memC3->answer());
    data3QuadOr->setInputD(memD3->answer());

    output0TriStateBuffer->setDataInput(data0QuadOr->answer());
    output1TriStateBuffer->setDataInput(data1QuadOr->answer());
    output2TriStateBuffer->setDataInput(data2QuadOr->answer());
    output3TriStateBuffer->setDataInput(data3QuadOr->answer());

    output0TriStateBuffer->setEnableInput(chipSelect);
    output1TriStateBuffer->setEnableInput(chipSelect);
    output2TriStateBuffer->setEnableInput(chipSelect);
    output3TriStateBuffer->setEnableInput(chipSelect);

    output0 = output0TriStateBuffer->answer();
    output1 = output1TriStateBuffer->answer();
    output2 = output2TriStateBuffer->answer();
    output3 = output3TriStateBuffer->answer();

    return {output3, output2, output1, output0};
}
