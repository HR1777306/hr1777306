/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:  Output monthly vehicle expenses
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

    //Declare
    float payment, insurance, gas, oil, tires, maintenance, monthly, annual;
    
    //Input
    cout<<"Enter Monthly Loan Payment:  ";
    cin>>payment;
    cout<<"Enter Monthly Insurance Payment:  ";
    cin>>insurance;
    cout<<"Enter Gas Payment:  ";
    cin>>gas;
    cout<<"Enter Oil Payment:  ";
    cin>>oil;
    cout<<"Enter Tires Payment:  ";
    cin>>tires;
    cout<<"Enter maintenance Payment:  ";
    cin>>maintenance;
    
    //Calculations
    monthly = payment + insurance + gas + oil + tires + maintenance;
    annual = monthly * 12;
    
    //Output
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Total monthly amount = $"<<monthly<<endl;
    cout<<"Total annual cost    = $"<<annual<<endl;
    
    //Stay execution
    return 0;
}

