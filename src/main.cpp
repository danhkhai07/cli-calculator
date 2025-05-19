#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>

#include "commandRegister/commandRegister.h"

int main(){
    std::cout << "CLI CALCULATOR - Written by danhkhai07\n";
    std::cout << "- Github repository: https://github.com/danhkhai07/cli-calculator/tree/main\n";
    std::cout << "- Tip: Use 'help' to see available commands.\n";

    while (true){        
        std::string input;
        std::cout <<"> ";
        if (!std::getline(std::cin, input)){
            std::cout << "\nExiting...\n";
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