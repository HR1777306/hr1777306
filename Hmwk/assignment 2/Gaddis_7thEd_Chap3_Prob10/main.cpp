/* 
 * File:   Gaddis_7thEd_Chap3_Prob10
 * Author: Shannon Wong/Hugo Romero
 * Supervisor:  Bradd Carey
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
    fahrenheit = celsius * (9.0/5.0) + 32;
    
//Output Data
    cout<<"Degrees In Fahrenheit: "<<fahrenheit<<endl;
    
    return 0;
}

