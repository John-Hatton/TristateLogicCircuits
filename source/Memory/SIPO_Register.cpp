//
// Created by John on 3/18/2023.
//

#include "Memory/SIPO_Register.h"


SIPO_Register::SIPO_Register() {
    shiftRegister_DFL_QA = new D_FlipFlop();
    shiftRegister_DFL_QB = new D_FlipFlop();
    shiftRegister_DFL_QC = new D_FlipFlop();
    shiftRegister_DFL_QD = new D_FlipFlop();
    shiftRegister_DFL_QE = new D_FlipFlop();
    shiftRegister_DFL_QF = new D_FlipFlop();
    shiftRegister_DFL_QG = new D_FlipFlop();
    shiftRegister_DFL_QH = new D_FlipFlop();

    storageRegister_DFL_QA = new D_FlipFlop();
    storageRegister_DFL_QB = new D_FlipFlop();
    storageRegister_DFL_QC = new D_FlipFlop();
    storageRegister_DFL_QD = new D_FlipFlop();
    storageRegister_DFL_QE = new D_FlipFlop();
    storageRegister_DFL_QF = new D_FlipFlop();
    storageRegister_DFL_QG = new D_FlipFlop();
    storageRegister_DFL_QH = new D_FlipFlop();

    outputEnable_TSBG_QA = new TriStateBufferGate();
    outputEnable_TSBG_QB = new TriStateBufferGate();
    outputEnable_TSBG_QC = new TriStateBufferGate();
    outputEnable_TSBG_QD = new TriStateBufferGate();
    outputEnable_TSBG_QE = new TriStateBufferGate();
    outputEnable_TSBG_QF = new TriStateBufferGate();
    outputEnable_TSBG_QG = new TriStateBufferGate();
    outputEnable_TSBG_QH = new TriStateBufferGate();

}

SIPO_Register::~SIPO_Register() {
    delete shiftRegister_DFL_QA;
    delete shiftRegister_DFL_QB;
    delete shiftRegister_DFL_QC;
    delete shiftRegister_DFL_QD;
    delete shiftRegister_DFL_QE;
    delete shiftRegister_DFL_QF;
    delete shiftRegister_DFL_QG;
    delete shiftRegister_DFL_QH;

    delete storageRegister_DFL_QA;
    delete storageRegister_DFL_QB;
    delete storageRegister_DFL_QC;
    delete storageRegister_DFL_QD;
    delete storageRegister_DFL_QE;
    delete storageRegister_DFL_QF;
    delete storageRegister_DFL_QG;
    delete storageRegister_DFL_QH;

    delete outputEnable_TSBG_QA;
    delete outputEnable_TSBG_QB;
    delete outputEnable_TSBG_QC;
    delete outputEnable_TSBG_QD;
    delete outputEnable_TSBG_QE;
    delete outputEnable_TSBG_QF;
    delete outputEnable_TSBG_QG;
    delete outputEnable_TSBG_QH;



}


LogicState::eLogicState SIPO_Register::getInvShiftRegisterClearInput() const {
    return invShiftRegisterClearInput;
}

void SIPO_Register::setInvShiftRegisterClearInput(LogicState::eLogicState invShiftRegisterClearInput) {
    SIPO_Register::invShiftRegisterClearInput = invShiftRegisterClearInput;
}

LogicState::eLogicState SIPO_Register::getShiftRegisterClockInput() const {
    return shiftRegisterClockInput;
}

void SIPO_Register::setShiftRegisterClockInput(LogicState::eLogicState shiftRegisterClockInput) {
    SIPO_Register::shiftRegisterClockInput = shiftRegisterClockInput;
}

LogicState::eLogicState SIPO_Register::getSerialDataInput() const {
    return serialDataInput;
}

void SIPO_Register::setSerialDataInput(LogicState::eLogicState serialDataInput) {
    SIPO_Register::serialDataInput = serialDataInput;
}

LogicState::eLogicState SIPO_Register::getInvOutputEnableInput() const {
    return invOutputEnableInput;
}

void SIPO_Register::setInvOutputEnableInput(LogicState::eLogicState invOutputEnableInput) {
    SIPO_Register::invOutputEnableInput = invOutputEnableInput;
}

LogicState::eLogicState SIPO_Register::getStorageRegisterClockInput() const {
    return storageRegisterClockInput;
}

void SIPO_Register::setStorageRegisterClockInput(LogicState::eLogicState storageRegisterClockInput) {
    SIPO_Register::storageRegisterClockInput = storageRegisterClockInput;
}

LogicState::eLogicState SIPO_Register::getDataOutputQa() const {
    return dataOutputQA;
}

void SIPO_Register::setDataOutputQa(LogicState::eLogicState dataOutputQa) {
    dataOutputQA = dataOutputQa;
}

LogicState::eLogicState SIPO_Register::getDataOutputQb() const {
    return dataOutputQB;
}

void SIPO_Register::setDataOutputQb(LogicState::eLogicState dataOutputQb) {
    dataOutputQB = dataOutputQb;
}

LogicState::eLogicState SIPO_Register::getDataOutputQc() const {
    return dataOutputQC;
}

void SIPO_Register::setDataOutputQc(LogicState::eLogicState dataOutputQc) {
    dataOutputQC = dataOutputQc;
}

LogicState::eLogicState SIPO_Register::getDataOutputQd() const {
    return dataOutputQD;
}

void SIPO_Register::setDataOutputQd(LogicState::eLogicState dataOutputQd) {
    dataOutputQD = dataOutputQd;
}

LogicState::eLogicState SIPO_Register::getDataOutputQe() const {
    return dataOutputQE;
}

void SIPO_Register::setDataOutputQe(LogicState::eLogicState dataOutputQe) {
    dataOutputQE = dataOutputQe;
}

LogicState::eLogicState SIPO_Register::getDataOutputQf() const {
    return dataOutputQF;
}

void SIPO_Register::setDataOutputQf(LogicState::eLogicState dataOutputQf) {
    dataOutputQF = dataOutputQf;
}

LogicState::eLogicState SIPO_Register::getDataOutputQg() const {
    return dataOutputQG;
}

void SIPO_Register::setDataOutputQg(LogicState::eLogicState dataOutputQg) {
    dataOutputQG = dataOutputQg;
}

LogicState::eLogicState SIPO_Register::getDataOutputQh() const {
    return dataOutputQH;
}

void SIPO_Register::setDataOutputQh(LogicState::eLogicState dataOutputQh) {
    dataOutputQH = dataOutputQh;
}

LogicState::eLogicState SIPO_Register::getSerialDataOutput() const {
    return serialDataOutput;
}

void SIPO_Register::setSerialDataOutput(LogicState::eLogicState serialDataOutput) {
    SIPO_Register::serialDataOutput = serialDataOutput;
}

D_FlipFlop *SIPO_Register::getShiftRegisterDflQa() const {
    return shiftRegister_DFL_QA;
}

void SIPO_Register::setShiftRegisterDflQa(D_FlipFlop *shiftRegisterDflQa) {
    shiftRegister_DFL_QA = shiftRegisterDflQa;
}

D_FlipFlop *SIPO_Register::getShiftRegisterDflQb() const {
    return shiftRegister_DFL_QB;
}

void SIPO_Register::setShiftRegisterDflQb(D_FlipFlop *shiftRegisterDflQb) {
    shiftRegister_DFL_QB = shiftRegisterDflQb;
}

D_FlipFlop *SIPO_Register::getShiftRegisterDflQc() const {
    return shiftRegister_DFL_QC;
}

void SIPO_Register::setShiftRegisterDflQc(D_FlipFlop *shiftRegisterDflQc) {
    shiftRegister_DFL_QC = shiftRegisterDflQc;
}

D_FlipFlop *SIPO_Register::getShiftRegisterDflQd() const {
    return shiftRegister_DFL_QD;
}

void SIPO_Register::setShiftRegisterDflQd(D_FlipFlop *shiftRegisterDflQd) {
    shiftRegister_DFL_QD = shiftRegisterDflQd;
}

D_FlipFlop *SIPO_Register::getShiftRegisterDflQe() const {
    return shiftRegister_DFL_QE;
}

void SIPO_Register::setShiftRegisterDflQe(D_FlipFlop *shiftRegisterDflQe) {
    shiftRegister_DFL_QE = shiftRegisterDflQe;
}

D_FlipFlop *SIPO_Register::getShiftRegisterDflQf() const {
    return shiftRegister_DFL_QF;
}

void SIPO_Register::setShiftRegisterDflQf(D_FlipFlop *shiftRegisterDflQf) {
    shiftRegister_DFL_QF = shiftRegisterDflQf;
}

D_FlipFlop *SIPO_Register::getShiftRegisterDflQg() const {
    return shiftRegister_DFL_QG;
}

void SIPO_Register::setShiftRegisterDflQg(D_FlipFlop *shiftRegisterDflQg) {
    shiftRegister_DFL_QG = shiftRegisterDflQg;
}

D_FlipFlop *SIPO_Register::getShiftRegisterDflQh() const {
    return shiftRegister_DFL_QH;
}

void SIPO_Register::setShiftRegisterDflQh(D_FlipFlop *shiftRegisterDflQh) {
    shiftRegister_DFL_QH = shiftRegisterDflQh;
}

D_FlipFlop *SIPO_Register::getStorageRegisterDflQa() const {
    return storageRegister_DFL_QA;
}

void SIPO_Register::setStorageRegisterDflQa(D_FlipFlop *storageRegisterDflQa) {
    storageRegister_DFL_QA = storageRegisterDflQa;
}

D_FlipFlop *SIPO_Register::getStorageRegisterDflQb() const {
    return storageRegister_DFL_QB;
}

void SIPO_Register::setStorageRegisterDflQb(D_FlipFlop *storageRegisterDflQb) {
    storageRegister_DFL_QB = storageRegisterDflQb;
}

D_FlipFlop *SIPO_Register::getStorageRegisterDflQc() const {
    return storageRegister_DFL_QC;
}

void SIPO_Register::setStorageRegisterDflQc(D_FlipFlop *storageRegisterDflQc) {
    storageRegister_DFL_QC = storageRegisterDflQc;
}

D_FlipFlop *SIPO_Register::getStorageRegisterDflQd() const {
    return storageRegister_DFL_QD;
}

void SIPO_Register::setStorageRegisterDflQd(D_FlipFlop *storageRegisterDflQd) {
    storageRegister_DFL_QD = storageRegisterDflQd;
}

D_FlipFlop *SIPO_Register::getStorageRegisterDflQe() const {
    return storageRegister_DFL_QE;
}

void SIPO_Register::setStorageRegisterDflQe(D_FlipFlop *storageRegisterDflQe) {
    storageRegister_DFL_QE = storageRegisterDflQe;
}

D_FlipFlop *SIPO_Register::getStorageRegisterDflQf() const {
    return storageRegister_DFL_QF;
}

void SIPO_Register::setStorageRegisterDflQf(D_FlipFlop *storageRegisterDflQf) {
    storageRegister_DFL_QF = storageRegisterDflQf;
}

D_FlipFlop *SIPO_Register::getStorageRegisterDflQg() const {
    return storageRegister_DFL_QG;
}

void SIPO_Register::setStorageRegisterDflQg(D_FlipFlop *storageRegisterDflQg) {
    storageRegister_DFL_QG = storageRegisterDflQg;
}

D_FlipFlop *SIPO_Register::getStorageRegisterDflQh() const {
    return storageRegister_DFL_QH;
}

void SIPO_Register::setStorageRegisterDflQh(D_FlipFlop *storageRegisterDflQh) {
    storageRegister_DFL_QH = storageRegisterDflQh;
}

TriStateBufferGate *SIPO_Register::getOutputEnableTsbgQa() const {
    return outputEnable_TSBG_QA;
}

void SIPO_Register::setOutputEnableTsbgQa(TriStateBufferGate *outputEnableTsbgQa) {
    outputEnable_TSBG_QA = outputEnableTsbgQa;
}

TriStateBufferGate *SIPO_Register::getOutputEnableTsbgQb() const {
    return outputEnable_TSBG_QB;
}

void SIPO_Register::setOutputEnableTsbgQb(TriStateBufferGate *outputEnableTsbgQb) {
    outputEnable_TSBG_QB = outputEnableTsbgQb;
}

TriStateBufferGate *SIPO_Register::getOutputEnableTsbgQc() const {
    return outputEnable_TSBG_QC;
}

void SIPO_Register::setOutputEnableTsbgQc(TriStateBufferGate *outputEnableTsbgQc) {
    outputEnable_TSBG_QC = outputEnableTsbgQc;
}

TriStateBufferGate *SIPO_Register::getOutputEnableTsbgQd() const {
    return outputEnable_TSBG_QD;
}

void SIPO_Register::setOutputEnableTsbgQd(TriStateBufferGate *outputEnableTsbgQd) {
    outputEnable_TSBG_QD = outputEnableTsbgQd;
}

TriStateBufferGate *SIPO_Register::getOutputEnableTsbgQe() const {
    return outputEnable_TSBG_QE;
}

void SIPO_Register::setOutputEnableTsbgQe(TriStateBufferGate *outputEnableTsbgQe) {
    outputEnable_TSBG_QE = outputEnableTsbgQe;
}

TriStateBufferGate *SIPO_Register::getOutputEnableTsbgQf() const {
    return outputEnable_TSBG_QF;
}

void SIPO_Register::setOutputEnableTsbgQf(TriStateBufferGate *outputEnableTsbgQf) {
    outputEnable_TSBG_QF = outputEnableTsbgQf;
}

TriStateBufferGate *SIPO_Register::getOutputEnableTsbgQg() const {
    return outputEnable_TSBG_QG;
}

void SIPO_Register::setOutputEnableTsbgQg(TriStateBufferGate *outputEnableTsbgQg) {
    outputEnable_TSBG_QG = outputEnableTsbgQg;
}

TriStateBufferGate *SIPO_Register::getOutputEnableTsbgQh() const {
    return outputEnable_TSBG_QH;
}

void SIPO_Register::setOutputEnableTsbgQh(TriStateBufferGate *outputEnableTsbgQh) {
    outputEnable_TSBG_QH = outputEnableTsbgQh;
}

std::vector<LogicState::eLogicState> SIPO_Register::currentState()
{


    //////// Initialize Shift Registers  //////////////

//    shiftRegister_DFL_QA->setDataInput(serialDataInput);
//    shiftRegister_DFL_QA->setEnableInput(shiftRegisterClockInput);
//    shiftRegister_DFL_QA->answer();
//
//    shiftRegister_DFL_QB->setDataInput(shiftRegister_DFL_QA->getOutputQ());
//    shiftRegister_DFL_QB->setEnableInput(shiftRegisterClockInput);
//    shiftRegister_DFL_QB->answer();
//
//    shiftRegister_DFL_QC->setDataInput(shiftRegister_DFL_QB->getOutputQ());
//    shiftRegister_DFL_QC->setEnableInput(shiftRegisterClockInput);
//    shiftRegister_DFL_QC->answer();
//
//    shiftRegister_DFL_QD->setDataInput(shiftRegister_DFL_QC->getOutputQ());
//    shiftRegister_DFL_QD->setEnableInput(shiftRegisterClockInput);
//    shiftRegister_DFL_QD->answer();
//
//    shiftRegister_DFL_QE->setDataInput(shiftRegister_DFL_QD->getOutputQ());
//    shiftRegister_DFL_QE->setEnableInput(shiftRegisterClockInput);
//    shiftRegister_DFL_QE->answer();
//
//    shiftRegister_DFL_QF->setDataInput(shiftRegister_DFL_QE->getOutputQ());
//    shiftRegister_DFL_QF->setEnableInput(shiftRegisterClockInput);
//    shiftRegister_DFL_QF->answer();
//
//    shiftRegister_DFL_QG->setDataInput(shiftRegister_DFL_QF->getOutputQ());
//    shiftRegister_DFL_QG->setEnableInput(shiftRegisterClockInput);
//    shiftRegister_DFL_QG->answer();
//
//    shiftRegister_DFL_QH->setDataInput(shiftRegister_DFL_QG->getOutputQ());
//    shiftRegister_DFL_QH->setEnableInput(shiftRegisterClockInput);
//    shiftRegister_DFL_QH->answer();


    shiftRegister_DFL_QA->setDataInput(serialDataInput);
    shiftRegister_DFL_QA->setEnableInput(shiftRegisterClockInput);
    shiftRegister_DFL_QA->answer();

    shiftRegister_DFL_QB->setDataInput(shiftRegister_DFL_QA->getOutputQ());
    shiftRegister_DFL_QB->setEnableInput(shiftRegisterClockInput);
    shiftRegister_DFL_QB->answer();

    shiftRegister_DFL_QC->setDataInput(shiftRegister_DFL_QB->getOutputQ());
    shiftRegister_DFL_QC->setEnableInput(shiftRegisterClockInput);
    shiftRegister_DFL_QC->answer();

    shiftRegister_DFL_QD->setDataInput(shiftRegister_DFL_QC->getOutputQ());
    shiftRegister_DFL_QD->setEnableInput(shiftRegisterClockInput);
    shiftRegister_DFL_QD->answer();

    shiftRegister_DFL_QE->setDataInput(shiftRegister_DFL_QD->getOutputQ());
    shiftRegister_DFL_QE->setEnableInput(shiftRegisterClockInput);
    shiftRegister_DFL_QE->answer();

    shiftRegister_DFL_QF->setDataInput(shiftRegister_DFL_QE->getOutputQ());
    shiftRegister_DFL_QF->setEnableInput(shiftRegisterClockInput);
    shiftRegister_DFL_QF->answer();

    shiftRegister_DFL_QG->setDataInput(shiftRegister_DFL_QF->getOutputQ());
    shiftRegister_DFL_QG->setEnableInput(shiftRegisterClockInput);
    shiftRegister_DFL_QG->answer();

    shiftRegister_DFL_QH->setDataInput(shiftRegister_DFL_QG->getOutputQ());
    shiftRegister_DFL_QH->setEnableInput(shiftRegisterClockInput);
    shiftRegister_DFL_QH->answer();














    /////////////// Initialize Storage Registers  //////////////////



//    storageRegister_DFL_QA->setDataInput(shiftRegister_DFL_QA->getOutputQ());
//    storageRegister_DFL_QA->setEnableInput(storageRegisterClockInput);
//    storageRegister_DFL_QA->answer();
//
//    storageRegister_DFL_QB->setDataInput(shiftRegister_DFL_QB->getOutputQ());
//    storageRegister_DFL_QB->setEnableInput(storageRegisterClockInput);
//    storageRegister_DFL_QB->answer();
//
//    storageRegister_DFL_QC->setDataInput(shiftRegister_DFL_QC->getOutputQ());
//    storageRegister_DFL_QC->setEnableInput(storageRegisterClockInput);
//    storageRegister_DFL_QC->answer();
//
//    storageRegister_DFL_QD->setDataInput(shiftRegister_DFL_QD->getOutputQ());
//    storageRegister_DFL_QD->setEnableInput(storageRegisterClockInput);
//    storageRegister_DFL_QD->answer();
//
//    storageRegister_DFL_QE->setDataInput(shiftRegister_DFL_QE->getOutputQ());
//    storageRegister_DFL_QE->setEnableInput(storageRegisterClockInput);
//    storageRegister_DFL_QE->answer();
//
//    storageRegister_DFL_QF->setDataInput(shiftRegister_DFL_QF->getOutputQ());
//    storageRegister_DFL_QF->setEnableInput(storageRegisterClockInput);
//    storageRegister_DFL_QF->answer();
//
//    storageRegister_DFL_QG->setDataInput(shiftRegister_DFL_QG->getOutputQ());
//    storageRegister_DFL_QG->setEnableInput(storageRegisterClockInput);
//    storageRegister_DFL_QG->answer();
//
//    storageRegister_DFL_QH->setDataInput(shiftRegister_DFL_QH->getOutputQ());
//    storageRegister_DFL_QH->setEnableInput(storageRegisterClockInput);
//    storageRegister_DFL_QH->answer();

    storageRegister_DFL_QA->setDataInput(shiftRegister_DFL_QA->getOutputQ());
    storageRegister_DFL_QA->setEnableInput(storageRegisterClockInput);

    storageRegister_DFL_QB->setDataInput(shiftRegister_DFL_QB->getOutputQ());
    storageRegister_DFL_QB->setEnableInput(storageRegisterClockInput);


    storageRegister_DFL_QC->setDataInput(shiftRegister_DFL_QC->getOutputQ());
    storageRegister_DFL_QC->setEnableInput(storageRegisterClockInput);


    storageRegister_DFL_QD->setDataInput(shiftRegister_DFL_QD->getOutputQ());
    storageRegister_DFL_QD->setEnableInput(storageRegisterClockInput);


    storageRegister_DFL_QE->setDataInput(shiftRegister_DFL_QE->getOutputQ());
    storageRegister_DFL_QE->setEnableInput(storageRegisterClockInput);


    storageRegister_DFL_QF->setDataInput(shiftRegister_DFL_QF->getOutputQ());
    storageRegister_DFL_QF->setEnableInput(storageRegisterClockInput);


    storageRegister_DFL_QG->setDataInput(shiftRegister_DFL_QG->getOutputQ());
    storageRegister_DFL_QG->setEnableInput(storageRegisterClockInput);


    storageRegister_DFL_QH->setDataInput(shiftRegister_DFL_QH->getOutputQ());
    storageRegister_DFL_QH->setEnableInput(storageRegisterClockInput);


    storageRegister_DFL_QA->answer();
    storageRegister_DFL_QB->answer();
    storageRegister_DFL_QC->answer();
    storageRegister_DFL_QD->answer();
    storageRegister_DFL_QE->answer();
    storageRegister_DFL_QF->answer();
    storageRegister_DFL_QG->answer();
    storageRegister_DFL_QA->answer();


    ///////////// Initialize Tri-State Buffer Gates  ///////////////

    outputEnable_TSBG_QA->setDataInput(storageRegister_DFL_QA->getOutputQ());
    outputEnable_TSBG_QA->setEnableInput(invOutputEnableInput);
    outputEnable_TSBG_QB->setDataInput(storageRegister_DFL_QB->getOutputQ());
    outputEnable_TSBG_QB->setEnableInput(invOutputEnableInput);
    outputEnable_TSBG_QC->setDataInput(storageRegister_DFL_QC->getOutputQ());
    outputEnable_TSBG_QC->setEnableInput(invOutputEnableInput);
    outputEnable_TSBG_QD->setDataInput(storageRegister_DFL_QD->getOutputQ());
    outputEnable_TSBG_QD->setEnableInput(invOutputEnableInput);
    outputEnable_TSBG_QE->setDataInput(storageRegister_DFL_QE->getOutputQ());
    outputEnable_TSBG_QE->setEnableInput(invOutputEnableInput);
    outputEnable_TSBG_QF->setDataInput(storageRegister_DFL_QF->getOutputQ());
    outputEnable_TSBG_QF->setEnableInput(invOutputEnableInput);
    outputEnable_TSBG_QG->setDataInput(storageRegister_DFL_QG->getOutputQ());
    outputEnable_TSBG_QG->setEnableInput(invOutputEnableInput);
    outputEnable_TSBG_QH->setDataInput(storageRegister_DFL_QH->getOutputQ());
    outputEnable_TSBG_QH->setEnableInput(invOutputEnableInput);



    //////////////////// Populate Outputs //////////



    dataOutputQA = outputEnable_TSBG_QA->answer();
    dataOutputQB = outputEnable_TSBG_QB->answer();
    dataOutputQC = outputEnable_TSBG_QC->answer();
    dataOutputQD = outputEnable_TSBG_QD->answer();
    dataOutputQE = outputEnable_TSBG_QE->answer();
    dataOutputQF = outputEnable_TSBG_QF->answer();
    dataOutputQG = outputEnable_TSBG_QG->answer();
    dataOutputQH = outputEnable_TSBG_QH->answer();

    std::vector<LogicState::eLogicState> retVector = {dataOutputQA, dataOutputQB, dataOutputQC, dataOutputQD,
                                                      dataOutputQE, dataOutputQF, dataOutputQG, dataOutputQH};

    return retVector;
}


