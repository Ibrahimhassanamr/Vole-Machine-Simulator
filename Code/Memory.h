
#ifndef ___VOLEMACHINE_MEMORY_H
#define ___VOLEMACHINE_MEMORY_H
#include <string>
#include <map>
using namespace std;

class Memory {
private:
    map <string, string> Memory_Cells;
    int number_of_instructions{};

public:
    Memory();
    void load_instructions(const string& path);
    string decimalToHexa(const int& dec);
    void clearMemory();
    friend class VoleMachine;
    string getContentAsString() const;
};

#endif //___VOLEMACHINE_MEMORY_H
