/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose: Create a program that determines the greater value between two numbers.
 * Created on July 3, 2014, 11:42 PM
 */
//system libraries
#include <iostream>

using namespace std;

// user defined libraries

//Global constants

//function prototypes

/*
 * 
 */
//execution begins here
int main(int argc, char** argv) {
    //declare variables    
    int x, y, value;//x= first number, y = second number

    //calculate
    cout<<"please input first number"<<endl;
    cin>>x;
    cout<<"please input second number"<<endl;
    cin>>y;
    if(x>y){
        cout<<"the greater numer is "<<x<<endl;
    }
    else{
        cout<<"the greater numer is "<<y<<endl;

    }    
    return 0;
}

