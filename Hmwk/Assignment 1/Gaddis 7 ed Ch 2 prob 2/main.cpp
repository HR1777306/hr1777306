/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose: Write a program that predicts the sales about of 62 percent from a company that generates $4.6 million
 * Created on June 30, 2014, 1:41 PM
 */
//System level libraries
#include <iostream>

using namespace std;

//user defined libraries

//Global constants

//Function prototypes
/*
 * 
 */
//Execution begins here 
int main(int argc, char** argv) {

    float totalSales;
    float eastCstsales;
totalSales = 4600000;
eastCstsales = totalSales * .62;
    cout<<"Total company sales = $4.6 million"<<endl;
    cout<<"East Coast sales division total sales = $"<<eastCstsales<<endl;
    
    return 0;
}

