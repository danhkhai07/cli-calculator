#include <iostream>
#include <unordered_map>
#include <functional>
#include <string_view>
#include "../../include/commandRegister/commandRegister.h"

// Functional libraries


static const std::unordered_map<std::string,std::function<void()>> registries{
    // Note: Name must all be lowercase
    {"exit", nullptr},
    {"help", nullptr},
};

int CLICalc::commandRegister::registerCmd(const std::string& input){
    auto itr = registries.find(input);
    if (itr == registries.end()){
        std::cout << "Invalid option.\n";
    } else if (!itr->second){
        return 1;
    } else {
        itr->second();
    }
    
    return 0;
}