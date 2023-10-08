//
// Created by John on 10/8/2023.
//
#include <Adders/FullAdder.h>

#ifndef TRISTATELOGICCIRCUITS_FOURBITADDER_H
#define TRISTATELOGICCIRCUITS_FOURBITADDER_H

class FourBitAdder
{
private:

    LogicState::eLogicState InputBitX0;
public:
    LogicState::eLogicState getInputBitX0() const;

    void setInputBitX0(LogicState::eLogicState inputBitX0);

    LogicState::eLogicState getInputBitX1() const;

    void setInputBitX1(LogicState::eLogicState inputBitX1);

    LogicState::eLogicState getInputBitX2() const;

    void setInputBitX2(LogicState::eLogicState inputBitX2);

    LogicState::eLogicState getInputBitX3() const;

    void setInputBitX3(LogicState::eLogicState inputBitX3);

    LogicState::eLogicState getInputBitY0() const;

    void setInputBitY0(LogicState::eLogicState inputBitY0);

    LogicState::eLogicState getInputBitY1() const;

    void setInputBitY1(LogicState::eLogicState inputBitY1);

    LogicState::eLogicState getInputBitY2() const;

    void setInputBitY2(LogicState::eLogicState inputBitY2);

    LogicState::eLogicState getInputBitY3() const;

    void setInputBitY3(LogicState::eLogicState inputBitY3);

    LogicState::eLogicState getOutputBit0() const;

    void setOutputBit0(LogicState::eLogicState outputBit0);

    LogicState::eLogicState getOutputBit1() const;

    void setOutputBit1(LogicState::eLogicState outputBit1);

    LogicState::eLogicState getOutputBit2() const;

    void setOutputBit2(LogicState::eLogicState outputBit2);

    LogicState::eLogicState getOutputBit3() const;

    void setOutputBit3(LogicState::eLogicState outputBit3);

    LogicState::eLogicState getCarryOutBit() const;

    void setCarryOutBit(LogicState::eLogicState carryOutBit);

private:
    LogicState::eLogicState InputBitX1;
    LogicState::eLogicState InputBitX2;
    LogicState::eLogicState InputBitX3;

    LogicState::eLogicState InputBitY0;
    LogicState::eLogicState InputBitY1;
    LogicState::eLogicState InputBitY2;
    LogicState::eLogicState InputBitY3;

    LogicState::eLogicState OutputBit0;
    LogicState::eLogicState OutputBit1;
    LogicState::eLogicState OutputBit2;
    LogicState::eLogicState OutputBit3;

    LogicState::eLogicState CarryOutBit;


    FullAdder* BitZeroAdder;
    FullAdder* BitOneAdder;
    FullAdder* BitTwoAdder;
    FullAdder* BitThreeAdder;

public:

    FourBitAdder();

    ~FourBitAdder() = default;

    std::vector<LogicState::eLogicState> CurrentState();

};


#endif //TRISTATELOGICCIRCUITS_FOURBITADDER_H
