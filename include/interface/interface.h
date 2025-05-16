#pragma once

#include <string> 

namespace CLIC {
    enum class Options {
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

    Options resolveOption(const std::string& input);

    void menu(std::string q);

    void printTitle();
}