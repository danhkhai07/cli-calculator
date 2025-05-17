#pragma once

#include <string>
#include <map>

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

    static const std::map<std::string, Options> optionStrings = {
        // Numbered options
        {"1", CLIC::Options::Option1},
            {"1.1", CLIC::Options::Option1_1},
            {"1.2", CLIC::Options::Option1_2},
            {"1.3", CLIC::Options::Option1_3},

        {"2", CLIC::Options::Option2},
        {"3", CLIC::Options::Option3},

        // Home Option
        {"0", CLIC::Options::Option0},
        {"home", CLIC::Options::Option0},
        
        // Exit option
        {"4", CLIC::Options::Option4},
        {"exit", CLIC::Options::Option4},
        
        // Other options
        {"back", CLIC::Options::Option_Back}
    };

    Options resolveOption(const std::string& input);

    void menu(std::string q);

    void printTitle();
}