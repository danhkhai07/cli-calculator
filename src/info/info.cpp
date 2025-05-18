#include <iostream>

#include "info/info.h"

void CLICalc::info::helpCmd(){
    std::cout << "Type direct string command to navigate (case insesitive):" << "\n";
    std::cout << "\thelp                Show available commands." << "\n";
    std::cout << "\tprogressiveCalc     Use the progressive calculator." << "\n";
    std::cout << "\tstringCalc          Use the string-processing calculator." << "\n";
    std::cout << "\tsolveForX           Use the solve-for-X calculator. " << "\n";
    std::cout << "\tabout               Show credibility and other info." << "\n";
    std::cout << "\texit                Exit the program." << "\n";
    return;
}

void CLICalc::info::aboutCmd(){
    std::cout << "Type direct string command to navigate (case insesitive):" << "\n";
    std::cout << "\thelp                Show available commands." << "\n";
    std::cout << "\tprogressiveCalc     Use the progressive calculator." << "\n";
    std::cout << "\tstringCalc          Use the string-processing calculator." << "\n";
    std::cout << "\tsolveForX           Use the solve-for-X calculator. " << "\n";
    std::cout << "\tabout               Show credibility and other info." << "\n";
    std::cout << "\texit                Exit the program." << "\n";
    return;
}