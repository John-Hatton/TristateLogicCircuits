//
// Created by snake on 12/16/2022.
//

#include "LogicGates/QuadInputOrGate.h"

QuadInputOrGate::QuadInputOrGate() {

}


LogicState::eLogicState QuadInputOrGate::getInputA() const {
    return inputA;
}

void QuadInputOrGate::setInputA(LogicState::eLogicState inputA) {
    QuadInputOrGate::inputA = inputA;
}

LogicState::eLogicState QuadInputOrGate::getInputB() const {
    return inputB;
}

void QuadInputOrGate::setInputB(LogicState::eLogicState inputB) {
    QuadInputOrGate::inputB = inputB;
}

LogicState::eLogicState QuadInputOrGate::getInputC() const {
    return inputC;
}

void QuadInputOrGate::setInputC(LogicState::eLogicState inputC) {
    QuadInputOrGate::inputC = inputC;
}

LogicState::eLogicState QuadInputOrGate::getInputD() const {
    return inputD;
}

void QuadInputOrGate::setInputD(LogicState::eLogicState inputD) {
    QuadInputOrGate::inputD = inputD;
}

LogicState::eLogicState QuadInputOrGate::getOutput() const {
    return output;
}

void QuadInputOrGate::setOutput(LogicState::eLogicState output) {
    QuadInputOrGate::output = output;
}

LogicState::eLogicState QuadInputOrGate::answer(){

    // For this function, we have 81 different combinations, which means for just this one class, I'll need 81
    // test cases... shoot me.

    //TTTT
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TTTF
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TTTD
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //TTFT
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TTFF
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TTFD
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //TTDT
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TTDF
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TTDD
    if (inputA == LogicState::ON && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //TFTT
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TFTF
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TFTD
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //TFFT
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TFFF
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TFFD
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //TFDT
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TFDF
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TFDD
    if (inputA == LogicState::ON && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //TDTT
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TDTF
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TDTD
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //TDFT
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TDFF
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TDFD
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //TDDT
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //TDDF
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //TDDD
    if (inputA == LogicState::ON && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //FTTT
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FTTF
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //FTTD
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //FTFT
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FTFF
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //FTFD
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //FTDT
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FTDF
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //FTDD
    if (inputA == LogicState::OFF && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //FFTT
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FFTF
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //FFTD
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //FFFT
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FFFF
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::OFF;
        return output;
    }
    //FFFD
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //FFDT
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FFDF
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //FFDD
    if (inputA == LogicState::OFF && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //FDTT
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FDTF
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //FDTD
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //FDFT
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FDFF
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //FDFD
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //FDDT
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //FDDF
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //FDDD
    if (inputA == LogicState::OFF && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DTTT
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DTTF
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //DTTD
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //DTFT
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DTFF
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //DTFD
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //DTDT
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DTDF
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //DTDD
    if (inputA == LogicState::DISABLED && inputB == LogicState::ON && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //DFTT
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DFTF
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //DFTD
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::ON;
        return output;
    }
    //DFFT
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DFFF
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DFFD
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DFDT
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DFDF
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DFDD
    if (inputA == LogicState::DISABLED && inputB == LogicState::OFF && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DDTT
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DDTF
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::OFF)
    {
        output = LogicState::ON;
        return output;
    }
    //DDTD
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::ON && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DDFT
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DDFF
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::OFF)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DDFD
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::OFF && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DDDT
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::ON)
    {
        output = LogicState::ON;
        return output;
    }
    //DDDF
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::OFF)
    {
        output = LogicState::DISABLED;
        return output;
    }
    //DDDD
    if (inputA == LogicState::DISABLED && inputB == LogicState::DISABLED && inputC == LogicState::DISABLED && inputD == LogicState::DISABLED)
    {
        output = LogicState::DISABLED;
        return output;
    }

    return output;
}
