
#ifndef ___VOLEMACHINE_VOLEMACHINE_H
#define ___VOLEMACHINE_VOLEMACHINE_H
#include "Memory.h"
#include "Register.h"
class VoleMachine {
private:
    Memory machineMemory;
    Register machineRegister;
    int counter;
    string instruction;

public:
    VoleMachine();
    string decimalToHexa(int dec);
    int hexaToDecimal(string hexa);
    void Fetch();
    string Decode();
    void Execute();
    void runOneCycle();
    friend class VoleMachineGUI;
    string getMemoryContentAsString() const; // Add this line
    string getRegisterContentAsString() const; // Add this line
    string getDecodedContent() const;
};

#endif //___VOLEMACHINE_VOLEMACHINE_H
