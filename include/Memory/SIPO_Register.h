//
// Created by John on 3/18/2023.
//

#pragma once


#include <vector>
#include "LogicState.h"
#include "LogicGates/NotGate.h"
#include "D_FlipFlop.h"
#include "LogicGates/TriStateBufferGate.h"

class SIPO_Register {


private:


    //////////  IO PINS ///////////

    LogicState::eLogicState invShiftRegisterClearInput;

    LogicState::eLogicState shiftRegisterClockInput;

    LogicState::eLogicState serialDataInput;

    LogicState::eLogicState invOutputEnableInput;

    LogicState::eLogicState storageRegisterClockInput;

    LogicState::eLogicState dataOutputQA;

    LogicState::eLogicState dataOutputQB;

    LogicState::eLogicState dataOutputQC;

    LogicState::eLogicState dataOutputQD;

    LogicState::eLogicState dataOutputQE;

    LogicState::eLogicState dataOutputQF;

    LogicState::eLogicState dataOutputQG;

    LogicState::eLogicState dataOutputQH;

    LogicState::eLogicState serialDataOutput;




    /////////////// Logic Gates  ///////////////////



    D_FlipFlop* shiftRegister_DFL_QA;
    D_FlipFlop* shiftRegister_DFL_QB;
    D_FlipFlop* shiftRegister_DFL_QC;
    D_FlipFlop* shiftRegister_DFL_QD;
    D_FlipFlop* shiftRegister_DFL_QE;
    D_FlipFlop* shiftRegister_DFL_QF;
    D_FlipFlop* shiftRegister_DFL_QG;
    D_FlipFlop* shiftRegister_DFL_QH;

    D_FlipFlop* storageRegister_DFL_QA;
    D_FlipFlop* storageRegister_DFL_QB;
    D_FlipFlop* storageRegister_DFL_QC;
    D_FlipFlop* storageRegister_DFL_QD;
    D_FlipFlop* storageRegister_DFL_QE;
    D_FlipFlop* storageRegister_DFL_QF;
    D_FlipFlop* storageRegister_DFL_QG;
    D_FlipFlop* storageRegister_DFL_QH;



    TriStateBufferGate* outputEnable_TSBG_QA;
    TriStateBufferGate* outputEnable_TSBG_QB;
    TriStateBufferGate* outputEnable_TSBG_QC;
    TriStateBufferGate* outputEnable_TSBG_QD;
    TriStateBufferGate* outputEnable_TSBG_QE;
    TriStateBufferGate* outputEnable_TSBG_QF;
    TriStateBufferGate* outputEnable_TSBG_QG;
    TriStateBufferGate* outputEnable_TSBG_QH;






public:

    SIPO_Register();
    ~SIPO_Register();



    LogicState::eLogicState getInvShiftRegisterClearInput() const;

    void setInvShiftRegisterClearInput(LogicState::eLogicState invShiftRegisterClearInput);

    LogicState::eLogicState getShiftRegisterClockInput() const;

    void setShiftRegisterClockInput(LogicState::eLogicState shiftRegisterClockInput);

    LogicState::eLogicState getSerialDataInput() const;

    void setSerialDataInput(LogicState::eLogicState serialDataInput);

    LogicState::eLogicState getInvOutputEnableInput() const;

    void setInvOutputEnableInput(LogicState::eLogicState invOutputEnableInput);

    LogicState::eLogicState getStorageRegisterClockInput() const;

    void setStorageRegisterClockInput(LogicState::eLogicState storageRegisterClockInput);

    LogicState::eLogicState getDataOutputQa() const;

    void setDataOutputQa(LogicState::eLogicState dataOutputQa);

    LogicState::eLogicState getDataOutputQb() const;

    void setDataOutputQb(LogicState::eLogicState dataOutputQb);

    LogicState::eLogicState getDataOutputQc() const;

    void setDataOutputQc(LogicState::eLogicState dataOutputQc);

    LogicState::eLogicState getDataOutputQd() const;

    void setDataOutputQd(LogicState::eLogicState dataOutputQd);

    LogicState::eLogicState getDataOutputQe() const;

    void setDataOutputQe(LogicState::eLogicState dataOutputQe);

    LogicState::eLogicState getDataOutputQf() const;

    void setDataOutputQf(LogicState::eLogicState dataOutputQf);

    LogicState::eLogicState getDataOutputQg() const;

    void setDataOutputQg(LogicState::eLogicState dataOutputQg);

    LogicState::eLogicState getDataOutputQh() const;

    void setDataOutputQh(LogicState::eLogicState dataOutputQh);

    LogicState::eLogicState getSerialDataOutput() const;

    void setSerialDataOutput(LogicState::eLogicState serialDataOutput);

    D_FlipFlop *getShiftRegisterDflQa() const;

    void setShiftRegisterDflQa(D_FlipFlop *shiftRegisterDflQa);

    D_FlipFlop *getShiftRegisterDflQb() const;

    void setShiftRegisterDflQb(D_FlipFlop *shiftRegisterDflQb);

    D_FlipFlop *getShiftRegisterDflQc() const;

    void setShiftRegisterDflQc(D_FlipFlop *shiftRegisterDflQc);

    D_FlipFlop *getShiftRegisterDflQd() const;

    void setShiftRegisterDflQd(D_FlipFlop *shiftRegisterDflQd);

    D_FlipFlop *getShiftRegisterDflQe() const;

    void setShiftRegisterDflQe(D_FlipFlop *shiftRegisterDflQe);

    D_FlipFlop *getShiftRegisterDflQf() const;

    void setShiftRegisterDflQf(D_FlipFlop *shiftRegisterDflQf);

    D_FlipFlop *getShiftRegisterDflQg() const;

    void setShiftRegisterDflQg(D_FlipFlop *shiftRegisterDflQg);

    D_FlipFlop *getShiftRegisterDflQh() const;

    void setShiftRegisterDflQh(D_FlipFlop *shiftRegisterDflQh);

    D_FlipFlop *getStorageRegisterDflQa() const;

    void setStorageRegisterDflQa(D_FlipFlop *storageRegisterDflQa);

    D_FlipFlop *getStorageRegisterDflQb() const;

    void setStorageRegisterDflQb(D_FlipFlop *storageRegisterDflQb);

    D_FlipFlop *getStorageRegisterDflQc() const;

    void setStorageRegisterDflQc(D_FlipFlop *storageRegisterDflQc);

    D_FlipFlop *getStorageRegisterDflQd() const;

    void setStorageRegisterDflQd(D_FlipFlop *storageRegisterDflQd);

    D_FlipFlop *getStorageRegisterDflQe() const;

    void setStorageRegisterDflQe(D_FlipFlop *storageRegisterDflQe);

    D_FlipFlop *getStorageRegisterDflQf() const;

    void setStorageRegisterDflQf(D_FlipFlop *storageRegisterDflQf);

    D_FlipFlop *getStorageRegisterDflQg() const;

    void setStorageRegisterDflQg(D_FlipFlop *storageRegisterDflQg);

    D_FlipFlop *getStorageRegisterDflQh() const;

    void setStorageRegisterDflQh(D_FlipFlop *storageRegisterDflQh);

    TriStateBufferGate *getOutputEnableTsbgQa() const;

    void setOutputEnableTsbgQa(TriStateBufferGate *outputEnableTsbgQa);

    TriStateBufferGate *getOutputEnableTsbgQb() const;

    void setOutputEnableTsbgQb(TriStateBufferGate *outputEnableTsbgQb);

    TriStateBufferGate *getOutputEnableTsbgQc() const;

    void setOutputEnableTsbgQc(TriStateBufferGate *outputEnableTsbgQc);

    TriStateBufferGate *getOutputEnableTsbgQd() const;

    void setOutputEnableTsbgQd(TriStateBufferGate *outputEnableTsbgQd);

    TriStateBufferGate *getOutputEnableTsbgQe() const;

    void setOutputEnableTsbgQe(TriStateBufferGate *outputEnableTsbgQe);

    TriStateBufferGate *getOutputEnableTsbgQf() const;

    void setOutputEnableTsbgQf(TriStateBufferGate *outputEnableTsbgQf);

    TriStateBufferGate *getOutputEnableTsbgQg() const;

    void setOutputEnableTsbgQg(TriStateBufferGate *outputEnableTsbgQg);

    TriStateBufferGate *getOutputEnableTsbgQh() const;

    void setOutputEnableTsbgQh(TriStateBufferGate *outputEnableTsbgQh);


    std::vector<LogicState::eLogicState> currentState();


};