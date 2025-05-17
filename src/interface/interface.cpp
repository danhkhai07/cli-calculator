#include <iostream>
#include <string>
#include <map>

#include "interface.h"

CLIC::Options CLIC::resolveOption(const std::string& input) {
    auto itr = CLIC::optionStrings.find(input);
    if (itr != CLIC::optionStrings.end()) {
        return itr->second;
    }
    return CLIC::Options::Option_Invalid;
}

void CLIC::menu(std::string q){
    system("cls");

    switch (resolveOption(q)){
        case CLIC::Options::Option0:
            std::cout << "1. Calculator\n2. About us\n3. Guide\n4. Exit\n";
            break;
        case CLIC::Options::Option1:
            std::cout << "1.1. Progressive Calculator\n1.2 String-processed calculator\n1.3 Solve for X\n";
            break;
        case CLIC::Options::Option1_1:
            std::cout << "No content.\n";
            break;
        case CLIC::Options::Option1_2:
            std::cout << "No content.\n";
            break;
        case CLIC::Options::Option1_3:
            std::cout << "No content.\n";
            break;
        case CLIC::Options::Option2:
            std::cout << "No content.\n";
            break;
        case CLIC::Options::Option3:
            std::cout << "Use numbered options (e.g. '1', '2',...) or string-based options (e.g. 'home' or 'exit') to navigate.\n";
            break;
        case CLIC::Options::Option_Back:
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
