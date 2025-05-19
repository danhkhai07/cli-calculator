#include <iostream>
#include <unordered_map>
#include <functional>
#include "commandRegister/commandRegister.h"

// Functional libraries
#include "info/info.h"
#include "calculate/calculate.h"

inline static const std::unordered_map<std::string,std::function<void()>> registries{
    // Note: Name must all be lowercase
    {"exit", nullptr},
    {"help", CLICalc::info::helpCmd},
    {"about", CLICalc::info::aboutCmd},
    {"progressivecalc", CLICalc::calculate::progressiveCalc},
    {"solveforx", CLICalc::calculate::solveForX},
    {"stringcalc", CLICalc::calculate::stringCalc}
};

int CLICalc::commandRegister::registerCmd(const std::string& input){
    auto itr = registries.find(input);
    if (itr == registries.end()){
        std::cout << "Invalid option.\n";
    } else if (!itr->second){
        return 1;
    } else {
        std::cout << "\n";
        itr->second();
        std::cout << "\n";
    }
    
    return 0;
}