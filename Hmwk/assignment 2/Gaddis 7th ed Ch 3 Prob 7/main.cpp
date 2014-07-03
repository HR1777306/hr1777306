/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:  Output calories consumed from cookies
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
    int cookpbag = 40, servings = 10, calories = 300, cookies;
    float calpcook, total;
    
    //Get input
    cout<<"Cookies ate:  ";
    cin>>cookies;
    
    //Calculate
    calpcook = servings * calories / cookpbag;
    total = cookies * calpcook;
    
    cout<<"Calories Consumed = "<<total<<endl;
    
    return 0;
}

