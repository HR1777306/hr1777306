/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:  Output insurance based on formula
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;


//User Libraries

//Global Constants

//function prototypes


//Execution begins
int main(int argc, char** argv) {

    //Declare Variables
    float amount;
    
    //Input
    cout<<"Enter property value:  ";
    cin>>amount;
    
    //Calculate
    cout<<"Minimum insurance required:  $"<<amount*0.8<<endl;
    
    return 0;
}

