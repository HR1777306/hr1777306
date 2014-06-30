/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:Convert square feet into acres
 * Created on June 29, 2014, 9:23 PM
 */

#include <iostream> //input output libraries

using namespace std;

//User defined libraries

//Global constants
const int ACRE = 43560; //square feet

//Function prototypes

 
/*
 * 
 */
//Execution begins here
int main(int argc, char** argv) {
int totalLand = 389767;
float totalAcres = static_cast<float>(totalLand) /  static_cast<float>(ACRE);
cout<<totalAcres;    
    return 0;
}

