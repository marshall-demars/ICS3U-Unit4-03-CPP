// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Nov 2022
// This program squares each number from 0 up to the user input

#include <iostream>

int main() {
    // This program squares each number from 0 up to the user input

    int counter;
    int squaredAnswer;
    float integerAsInt;
    std::string integerAsString;

    // Input
    std::cout << "Enter a positive integer: ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        integerAsInt = std::stoi(integerAsString);

        if (integerAsInt < 0) {
            std::cout << "\nPlease enter a positive number." << std::endl;
        } else if (integerAsInt == 0) {
            std::cout << "\nInvalid input" << std::endl;
        } else {
            for (int counter = 0; counter <= integerAsInt; counter++) {
                squaredAnswer = counter * counter;
                std::cout << counter << "² = "
                    << squaredAnswer << "²" << std::endl;
            }
        }
        } catch (std::invalid_argument) {
            std::cout << "\nPlease input a valid number." << std::endl;
        }

    std::cout << ("\nDone.") << std::endl;
}
