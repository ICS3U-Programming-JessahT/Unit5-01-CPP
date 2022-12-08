// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 08/12/2022
// This program ask the user for a temperature in celsius
// and it will convert to a fahrenheit using functions

#include<iostream>


void fahrenheit() {
// declare variables
    int celsius, multiply, toFahrenheit;
    std::string userCelsius;
// get input from user
    std::cout << "Enter the temperature in celsius: ";
    std::cin >> userCelsius;
// try catch for strings
    try {
// calculate celsius to fahrenheit
        celsius = std::stof(userCelsius);
        multiply = celsius * 1.8;
        toFahrenheit = multiply + 32;
// display converted temperature to user
        std::cout << celsius << " in fahrenheit is "
                  << toFahrenheit << std::endl;
    } catch (std::invalid_argument) {
// for invalid inputs
        std::cout << userCelsius << " is invalid"
        << std::endl;
    }
}

int main() {
// call fahrenheit function
    fahrenheit();
}
