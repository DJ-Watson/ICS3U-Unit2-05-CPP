// Copyright (c) 2019 DJ Watson All Rights Reserved
//
// Created by DJ Watson
// Created on September 2019


#include <iostream>


// global variable
int variableX = 25;


void localVariable() {
    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "local variableX, variableY, variableZ: " << variableX
              << "+" << variableY << "=" << variableZ << std::endl;
}


void globalVariable() {
    variableX - variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "local variableX, variableY, variableZ: " << variableX
              << "+" << variableY << "=" << variableZ << std::endl;
}


int main() {
    localVariable();
    globalVariable();
}
