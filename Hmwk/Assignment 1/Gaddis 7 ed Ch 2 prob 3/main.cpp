/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose: Multiply different variables and give a sum
 * Created on June 29, 2014, 2:25 PM
 */
//Write a Program that will compute the total sales tax on a $52 purchase.  Assume the state tax is 4 percent and the county tax is 2 percent.

//System level libraries
#include <iostream> //input out put library

using namespace std;

//User defined libraries

//Global constants

//Function prototypes
/*
 * 
 */
// execution begins here
int main(int argc, char** argv) {
//1
float purchase;
float stateTax;
float cntyTax;//county state tax
float total;

purchase = 52;
stateTax = purchase *.04;
cntyTax = purchase*.02;
//2
cout <<"Purchase = $" << purchase << endl;
cout <<"State Tax 4 percent = " << stateTax<< endl;
cout <<"County Tax 2 percent = " <<cntyTax <<endl;
cout <<"Total = "<< purchase + stateTax + cntyTax << endl; 



    
    return 0;
}

