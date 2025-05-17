#include <iostream>
#include <unordered_map>
#include "commandRegister.h"

// Functional libraries

static const std::unordered_map<std::string,void (*)()> registries{
    {"home", {}}
};

void CLICalc::commandRegister::registerCmd(const std::string& input){
    std::cout << "Reached 'testMM::commandRegister::registerCmd'.\n";
    auto itr = registries.find(input);
    if (itr == registries.end()){
        std::cout << "Invalid option.\n";
    } else itr->second();
    return;
}