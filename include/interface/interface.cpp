#include <iostream>
#include <string>
#include <map>

#include "interface.h"

/// @brief 
enum Options {
    Option_Invalid,
    Option_Back,
    Option0,
    Option1,
    Option1_1,
    Option1_2,
    Option1_3,
    Option1_4,
    Option2,
    Option3,
    Option4
};

/// @brief 
/// @param input 
/// @return
Options resolveOption(const std::string& input);

/// @brief 
/// @param q 
void CLIC::menu(std::string q);

/// @brief 
void CLIC::printTitle();

Options resolveOption(const std::string& input) {
    static const std::map<std::string, Options> optionStrings = {
    // Numbered options
    {"1", Option1},
        {"1.1", Option1_1},
        {"1.2", Option1_2},
        {"1.3", Option1_3},

    {"2", Option2},
    {"3", Option3},

    // Home option
    {"0", Option0},
    {"home", Option0},
    
    // Exit option
    {"4", Option4},
    {"exit", Option4},
    
    // Other options
    {"back", Option_Back}
    };

    auto itr = optionStrings.find(input);
    if (itr != optionStrings.end()) {
        return itr->second;
    }
    return Option_Invalid;
}

void CLIC::menu(std::string q){
    system("cls");

    switch (resolveOption(q)){
        case Option0:
            std::cout << "1. Calculator\n2. About us\n3. Guide\n4. Exit\n";
            break;
        case Option1:
            std::cout << "1.1. Progressive Calculator\n1.2 String-processed calculator\n1.3 Solve for X\n";
            break;
        case Option1_1:
            std::cout << "No content.\n";
            break;
        case Option1_2:
            std::cout << "No content.\n";
            break;
        case Option1_3:
            std::cout << "No content.\n";
            break;
        case Option2:
            std::cout << "No content.\n";
            break;
        case Option3:
            std::cout << "No content.\n";
            break;
        case Option4:
            system("^C");
            break;
        case Option_Back:
            std::cout << "No content.\n";
            break;
        default:
            std::cout << "Invalid option.\n";
            break;
    }

}

void CLIC::printTitle(){
    std::cout << "CLI CALCULATOR - Written by danhkhai07 \n";
}
