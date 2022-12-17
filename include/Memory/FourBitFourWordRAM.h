//
// Created by snake on 12/16/2022.
//
#pragma once
#include "LogicState.h"
#include "LogicGates/TriStateBufferGate.h"
#include "Decoders/TwoToFourLineDecoder.h"
#include "D_FlipFlop.h"
#include "LogicGates/QuadInputOrGate.h"

class FourBitFourWordRAM {

private:

    LogicState::eLogicState addr0;
    LogicState::eLogicState addr1;

    LogicState::eLogicState data0;
    LogicState::eLogicState data1;
    LogicState::eLogicState data2;
    LogicState::eLogicState data3;

    LogicState::eLogicState output0;
    LogicState::eLogicState output1;
    LogicState::eLogicState output2;
    LogicState::eLogicState output3;


    LogicState::eLogicState writeEnable;

    LogicState::eLogicState chipSelect;

    TriStateBufferGate* data0TriStateBuffer;
    TriStateBufferGate* data1TriStateBuffer;
    TriStateBufferGate* data2TriStateBuffer;
    TriStateBufferGate* data3TriStateBuffer;

    NotGate* decoderEnableNot;

    TwoToFourLineDecoder* twoToFourDecoder;

    D_FlipFlop* memA0;

    D_FlipFlop* memA1;

    D_FlipFlop* memA2;

    D_FlipFlop* memA3;

    D_FlipFlop* memB0;

    D_FlipFlop* memB1;

    D_FlipFlop* memB2;

    D_FlipFlop* memB3;

    D_FlipFlop* memC0;

    D_FlipFlop* memC1;

    D_FlipFlop* memC2;

    D_FlipFlop* memC3;

    D_FlipFlop* memD0;

    D_FlipFlop* memD1;

    D_FlipFlop* memD2;

    D_FlipFlop* memD3;


    QuadInputOrGate* data0QuadOr;

    QuadInputOrGate* data1QuadOr;

    QuadInputOrGate* data2QuadOr;

    QuadInputOrGate* data3QuadOr;

    TriStateBufferGate* output0TriStateBuffer;

    TriStateBufferGate* output1TriStateBuffer;

    TriStateBufferGate* output2TriStateBuffer;

    TriStateBufferGate* output3TriStateBuffer;




public:

    FourBitFourWordRAM();


    LogicState::eLogicState getAddr0() const;

    void setAddr0(LogicState::eLogicState addr0);

    LogicState::eLogicState getAddr1() const;

    void setAddr1(LogicState::eLogicState addr1);

    LogicState::eLogicState getData0() const;

    void setData0(LogicState::eLogicState data0);

    LogicState::eLogicState getData1() const;

    void setData1(LogicState::eLogicState data1);

    LogicState::eLogicState getData2() const;

    void setData2(LogicState::eLogicState data2);

    LogicState::eLogicState getData3() const;

    void setData3(LogicState::eLogicState data3);

    LogicState::eLogicState getOutput0() const;

    void setOutput0(LogicState::eLogicState output0);

    LogicState::eLogicState getOutput1() const;

    void setOutput1(LogicState::eLogicState output1);

    LogicState::eLogicState getOutput2() const;

    void setOutput2(LogicState::eLogicState output2);

    LogicState::eLogicState getOutput3() const;

    void setOutput3(LogicState::eLogicState output3);

    LogicState::eLogicState getWriteEnable() const;

    void setWriteEnable(LogicState::eLogicState writeEnable);

    LogicState::eLogicState getChipSelect() const;

    void setChipSelect(LogicState::eLogicState chipSelect);

    TriStateBufferGate *getData0TriStateBuffer() const;

    void setData0TriStateBuffer(TriStateBufferGate *data0TriStateBuffer);

    TriStateBufferGate *getData1TriStateBuffer() const;

    void setData1TriStateBuffer(TriStateBufferGate *data1TriStateBuffer);

    TriStateBufferGate *getData2TriStateBuffer() const;

    void setData2TriStateBuffer(TriStateBufferGate *data2TriStateBuffer);

    TriStateBufferGate *getData3TriStateBuffer() const;

    void setData3TriStateBuffer(TriStateBufferGate *data3TriStateBuffer);

    NotGate *getDecoderEnableNot() const;

    void setDecoderEnableNot(NotGate *decoderEnableNot);

    TwoToFourLineDecoder *getTwoToFourDecoder() const;

    void setTwoToFourDecoder(TwoToFourLineDecoder *twoToFourDecoder);

    D_FlipFlop *getMemA0() const;

    void setMemA0(D_FlipFlop *memA0);

    D_FlipFlop *getMemA1() const;

    void setMemA1(D_FlipFlop *memA1);

    D_FlipFlop *getMemA2() const;

    void setMemA2(D_FlipFlop *memA2);

    D_FlipFlop *getMemA3() const;

    void setMemA3(D_FlipFlop *memA3);

    D_FlipFlop *getMemB0() const;

    void setMemB0(D_FlipFlop *memB0);

    D_FlipFlop *getMemB1() const;

    void setMemB1(D_FlipFlop *memB1);

    D_FlipFlop *getMemB2() const;

    void setMemB2(D_FlipFlop *memB2);

    D_FlipFlop *getMemB3() const;

    void setMemB3(D_FlipFlop *memB3);

    D_FlipFlop *getMemC0() const;

    void setMemC0(D_FlipFlop *memC0);

    D_FlipFlop *getMemC1() const;

    void setMemC1(D_FlipFlop *memC1);

    D_FlipFlop *getMemC2() const;

    void setMemC2(D_FlipFlop *memC2);

    D_FlipFlop *getMemC3() const;

    void setMemC3(D_FlipFlop *memC3);

    D_FlipFlop *getMemD0() const;

    void setMemD0(D_FlipFlop *memD0);

    D_FlipFlop *getMemD1() const;

    void setMemD1(D_FlipFlop *memD1);

    D_FlipFlop *getMemD2() const;

    void setMemD2(D_FlipFlop *memD2);

    D_FlipFlop *getMemD3() const;

    void setMemD3(D_FlipFlop *memD3);

    QuadInputOrGate *getData0QuadOr() const;

    void setData0QuadOr(QuadInputOrGate *data0QuadOr);

    QuadInputOrGate *getData1QuadOr() const;

    void setData1QuadOr(QuadInputOrGate *data1QuadOr);

    QuadInputOrGate *getData2QuadOr() const;

    void setData2QuadOr(QuadInputOrGate *data2QuadOr);

    QuadInputOrGate *getData3QuadOr() const;

    void setData3QuadOr(QuadInputOrGate *data3QuadOr);

    TriStateBufferGate *getOutput0TriStateBuffer() const;

    void setOutput0TriStateBuffer(TriStateBufferGate *output0TriStateBuffer);

    TriStateBufferGate *getOutput1TriStateBuffer() const;

    void setOutput1TriStateBuffer(TriStateBufferGate *output1TriStateBuffer);

    TriStateBufferGate *getOutput2TriStateBuffer() const;

    void setOutput2TriStateBuffer(TriStateBufferGate *output2TriStateBuffer);

    TriStateBufferGate *getOutput3TriStateBuffer() const;

    void setOutput3TriStateBuffer(TriStateBufferGate *output3TriStateBuffer);

    std::vector<LogicState::eLogicState> currentState();

};