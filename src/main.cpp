#include <iostream>
#include <string>

#include "interface/interface.h"

int main(){
    CLIC::printTitle();
    CLIC::menu("0");
    while (true){
        std::string input;
        std::cout << "> ";
        std::cin >> input;

        if (CLIC::resolveOption(input) == CLIC::Options::Option4) return 0;
        CLIC::menu(input);
    }
    return 0;
}