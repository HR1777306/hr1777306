/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:Write a program that will calculate the selling price of a circuit board that costs $12.67 with a 40% profit
 * Created on June 30, 2014, 1:22 PM
 */
//System level libraries
#include <iostream>

using namespace std;

//User defined libraries

//Global constants

//Function prototypes

/*
 * 
 */
//Execution begins here
int main(int argc, char** argv) {
    float cirBrdprft; //circuit board profit
    float cirBrdprc; //circuit board price
    float sellCirbrd; // selling circuit board price
    float totalPrice; // total circuit board selling price with profit included
cirBrdprft = .40;
cirBrdprc = 12.67;
sellCirbrd = .40*12.67;
totalPrice = cirBrdprc + sellCirbrd;
    cout<<" Total selling price of circuit board with a 40% profit = $"<< totalPrice <<endl;
    return 0;
}

