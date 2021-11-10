// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This program tells you if the year is a leap year

#include <iostream>
#include <string>


int main() {
    // this function checks if year is divisible by 4,100 and 400
    int userNumber;
    std::string userInput;

    // input
    std::cout << "Enter the number of the year (integer): ";
    std::cin >> userInput;

    // process and output
    try {
        userNumber = std::stoi(userInput);
        if (userNumber % 4 == 0) {
            if (userNumber % 100 == 0) {
                if (userNumber % 400 == 0) {
                    std::cout << userNumber << " is a leap year" <<std::endl;
                } else {
                    std::cout << userNumber << " is a common year" <<std::endl;
                }
            } else {
                std::cout << "\n" << userNumber << " is a leap year"
                            <<std::endl;
            }
        } else {
            std::cout << "\n" << userNumber << " is a common year" <<std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << userInput << " is an invalid input, try again";
        std::cout <<""<< std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
