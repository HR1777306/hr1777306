/* 
 * File:   main.cpp
 * Author: Hugo romero
 *  Purpose: determine monthly payments and interest on a 12 month loan
 *
 * Created on July 2, 2014, 10:30 PM
 */
//system libraries
#include <iostream>
#include<cmath>

using namespace std;

//User defined libraries

//Global constants

//Function prototypes
/*
 * 
 */
//execution begins here
int main(int argc, char** argv) {

    float loan, i, n, interest, payment, temp;
    loan=10000;//loan amount
    i=.01;//interest 12% for twelve months
    n=36;//term length
    temp=pow(1+i,n);
    payment = temp *i*loan / (temp - 1);
    interest=payment*n-loan;
    
    cout<<"Monthly payment = $"<<payment<<endl<<"interest =$"<<interest<<endl;
    
    return 0;
}

