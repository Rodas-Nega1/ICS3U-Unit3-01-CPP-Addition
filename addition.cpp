// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Sep 2021
// This program calculates addition from user input

#include <iostream>

int main() {
    // this function calculates the addition of numbers inputted by user
    int number_1;
    int number_2;
    int answer;

    // input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> number_1;

    // input
    std::cout << "Enter the second number to add (integer): ";
    std::cin >> number_2;

    // process
    answer = number_1 + number_2;

    // output
    std::cout << "" << std::endl;
    std::cout << "The sum is " << answer << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
