// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program uses continue loops

#include <iostream>

int main() {
    // This is the loop addition function

    std::string loopsString;
    std::string positiveString;
    int loopsInteger;
    int positiveInteger;
    int counter;
    int addInt = 0;
    int sum;

    // Input, Process and Output
    std::cout << "How many positive numbers do you want to add?: ";
    std::cin >> loopsString;
    std::cout << "" << std::endl;
    try {
        loopsInteger = std::stoi(loopsString);
        if (loopsInteger > 0) {
            for (counter = 0; counter < loopsInteger; counter++) {
                std::cout << "Enter a number to add: ";
                std::cin >> positiveString;
                positiveInteger = std::stoi(positiveString);
                std::cout << "" << std::endl;
                if (positiveInteger < 0) {
                    continue;
                }
                addInt = addInt + positiveInteger;
                sum = addInt;
            }
            std::cout << "Sum of all positive integers is " << sum
                      << std::endl;
        } else {
            std::cout << "That is not a positive integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input, try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
