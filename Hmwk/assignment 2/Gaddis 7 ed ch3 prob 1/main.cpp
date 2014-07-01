/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose: write a program that requires input of total gallons and miles traveled; display mpg.
 * Created on June 30, 2014, 8:59 PM
 */
//System level libraries
#include <iostream>//input output library

using namespace std;

//User defined libraries

//Global constants

//Function prototypes


/*
 * 
 */
//execution begins here
int main(int argc, char** argv) {
    float gallons, miles, mpg;
cout<<"Want to find out your M.P.G.?"<<endl;
cout<<"Please input total gallons when tank is full"<<endl;
cin>> gallons;
cout<<"Please input total miles driven per full fuel tank"<<endl;
cin>> miles;
mpg = miles / gallons;
cout<<"Your M.P.G. is "<<mpg<<"miles per gallon"<<endl;
    return 0;
}

