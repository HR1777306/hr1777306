/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:write a program that converts celsius to fahrenheit and outputs a table 0-20
 *
 * Created on July 11, 2014, 5:36 PM
 */


#include <iostream>

using namespace std;

/* //User Defined Libraries
 * 
 * //Global Constants
 * 
 * //Function Prototypes
 * 
 * //Execution
 */

int main(int argc, char** argv) {
    
//Declare Variables
    float celsius, fahrenheit; 
    
//Input Data
    
    
    cout<<"Enter Temperature in Celsius: ";
    cin>>celsius;
   
//Calculate
    
    
//Output Data
    cout<<"Degrees In celsius\t\t degrees in fahrenheit "<<endl;
    cout<<"____________________________________________________"<<endl;
      for(int i=celsius; i<=celsius+20; i++){
          fahrenheit = i * (9.0/5.0) + 32;
          cout<<i<<"\t\t\t\t"<<fahrenheit<<endl;
      }
    return 0;
    
}