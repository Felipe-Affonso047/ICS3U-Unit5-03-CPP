// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program converts the schoolboard grade sistem to porcentage

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int gradeConverter(std::string level) {
    // this function converts the schoolboard grade sistem to porcentage
    int porcentage;

    if (level == "4+") {
        porcentage = 98;
    } else if (level == "4") {
        porcentage = 90;
    } else if (level == "4-") {
        porcentage = 83;
    } else if (level == "3+") {
        porcentage = 78;
    } else if (level == "3") {
        porcentage = 75;
    } else if (level == "3-") {
        porcentage = 71;
    } else if (level == "2+") {
        porcentage = 68;
    } else if (level == "2") {
        porcentage = 65;
    } else if (level == "2-") {
        porcentage = 61;
    } else if (level == "1+") {
        porcentage = 58;
    } else if (level == "1") {
        porcentage = 55;
    } else if (level == "1-") {
        porcentage = 51;
    } else if (level == "R") {
        porcentage = 25;
    } else {
        porcentage = -1;
    }

    return porcentage;
}


int main() {
    // This is the main function
    std::string gradeInLevel;
    int gradeInPorcentage;

    std::cout << "Enter your mark: ";
    std::cin >> gradeInLevel;

    gradeInPorcentage = gradeConverter(gradeInLevel);

    if (gradeInPorcentage > 0) {
        std::cout << "You got " << gradeInPorcentage << "%" << std::endl;
    } else {
        std::cout << "Invalid input, please insert a level." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
