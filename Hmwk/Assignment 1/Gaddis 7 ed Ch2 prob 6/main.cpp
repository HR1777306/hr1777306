/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:Build a program to calculate an employee's total annual pay and total annual pay periods
 * Created on June 30, 2014, 1:12 PM
 */

//System level libraries
#include <iostream> //input output library

using namespace std;

//User defined libraries

//Global constants

//Function protoypes


/*
 * 
 */
//Execution begins here
int main(int argc, char** argv) {
    int payAmount;
    int payPeriods;
    int annualPay;
payAmount = 1700;
payPeriods = 26;
annualPay = payAmount* payPeriods;

    cout<<" employee pay period amount =$ "<< payAmount<< endl;
    cout<<" Number of total employee pay periods = "<< payPeriods<< endl;
    cout<<" Total annual pay for employee =$ "<< annualPay<< endl;

    return 0;
}

