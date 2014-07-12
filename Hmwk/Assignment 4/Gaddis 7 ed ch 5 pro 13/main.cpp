/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:wite a program that cin a loop until -99 is entered.  display the largest and smallest value entered.
 *
 * Created on July 11, 2014, 6:17 PM
 */
//System libraries
#include <iostream>

using namespace std;

//User defined libraries

//Global constants

//Function prototypes
/*
 * 
 * 
 */
//Execution begins here
int main(int argc, char** argv) {
//declare variables
    int number,small, large, temp; //values and inputs
    
    cout<<"enter a number"<<endl;
    cin>>number;
    small =number;
    large = number;
    
    while(number!=-99){
        cout<<"enter a number"<<endl;
        cin>>number;
        if (number!=-99){
            if (number<small){
                small = number;
            }
            else if (number>large){
                large = number;
            }        
        }      
    }
    cout<<"Largest #  = "<<large<<"\tSallest number =  "<<small<<endl;
        
    
        
    return 0;
}

