// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Nov, 5, 2023
// This program asks the user to enter a positive number.
// It then uses a while loop to add up all the whole numbers,
// starting from 1, until that number and display the sum to the user.

#include <iostream>
#include <string>

int main() {
    // Input - getting user number.
    // declaring variables userNumberInt, sum, counter, and userNumberStr.
    int userNumberInt, sum, counter;
    std::string userNumberStr;
    std::cout << "Enter an integer: ";
    std::cin >> userNumberStr;
    try {
        userNumberInt = std::stoi(userNumberStr);
        sum = 0;
        counter = 0;
        while (userNumberInt > counter) {
            counter = counter + 1;
            sum = sum + counter;
        }
        if (userNumberInt > 0) {
            std::cout << "the total sum is " << sum << ".\n";
            std::cout << "counter = " << counter << ".\n";
        } else {
            std::cout << "Please enter a positive number. \n";
        }
    } catch (std::invalid_argument) {
        std::cout << userNumberStr << "' is not an integer. \n";
    }
}
