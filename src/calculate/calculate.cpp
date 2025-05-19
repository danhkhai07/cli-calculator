#include <iostream>
#include <string>

#include "calculate/calculate.h"

#define intLimit 1e8

/// @brief Error-checking function for calculators
/// @param input String input each calculators uses
/// @param key The key that informs about the input status
/// @return 1: invalid input | 0: valid input
int CLICalc::calculate::checkError(const std::string& input, const int& key){
    switch (key){
        case 1: // If number <= INT_MAX
            try {
                std::stod(input);
            } catch (std::invalid_argument e){
                std::cout << "Error: Invalid argument.\n";
                return 1;
            } catch (std::out_of_range e){
                std::cout << "Error: Out of range for 'double' type.\n";
                return 1;
            }
            return 0;
        case 2: // If input is operator
            if (input != "+" && input != "-" && input != "/" && input != "*"){
                std::cout << "Error: Invalid argument.\n";
                return 1;
            } else {
                return 0;
            }
            break;
    }
    return 0;
}

void CLICalc::calculate::progressiveCalc(){
    std::string input;
    int count = 0;
    long double res = 0;
    std::string op;
    while (true){
        count++;        
        if (count%2==1){
            if (count == 1) std::cout << "Enter a number (< 2*10^9)...\n";
            if (count == 3) std::cout << "Enter another number...\n";
            std::cout << "progressiveCalc > ";
            if (!std::getline(std::cin, input)){
                return;
            }

            if (checkError(input,1)) return;
            int int_input = std::stod(input);
            if (count == 1) res = int_input;
            
            if (count > 2){
                try {
                    if (op == "+"){
                        res += int_input;
                    }
                    if (op == "-"){
                        res -= int_input;
                    }
                    if (op == "/"){
                        if (int_input == 0){
                            std::cout << "Error: Divide by 0.\n";
                            return;
                        }
                        res /= int_input;
                    }
                    if (op == "*"){
                        res *= int_input;
                    }
                    std::cout << "Result: " << res << "\n";
                } catch (std::out_of_range e){
                    std::cout << "Error: Out of range for 'long double' type.\n";
                    return;
                }
            }
        }

        if (count%2==0){
            if (count == 2) std::cout << "Enter an operator (+,-,*,/)...\n";
            std::cout << "progressiveCalc > ";
            if (!std::getline(std::cin, input)){
                return;
            }

            // std::cout << "assert: input = " << input << "0\n";
            if (checkError(input,2)) return;
            op = input;
        }
    }
    return;
}

void CLICalc::calculate::stringCalc(){
    std::cout << "No content." << "\n";
    return;
}

void CLICalc::calculate::solveForX(){
    std::cout << "No content." << "\n";
    return;
}