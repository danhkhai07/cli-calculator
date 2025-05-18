#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

#include "../include/commandRegister/commandRegister.h"

int main(){
    while (true){
        std::string input;
        std::cout <<"> ";

        if (!std::getline(std::cin, input)){
            std::cout << "\nExitting...\n";
            return 0;
        }

        if (CLICalc::commandRegister::registerCmd(
            [input]() -> std::string {
                std::string copy = input;
                std::transform(copy.begin(),copy.end(),copy.begin(),
                    [](unsigned char c){return std::tolower(c);} 
                );
                return copy;
            }()
        )) return 0;
    }
}