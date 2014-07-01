/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose: write a program that takes 5 test scores and displays
 *          the average test score.
 * Created on June 30, 2014, 8:22 PM
 */
//System level libraries
#include <iostream>//input output library
#include <iomanip>

using namespace std;

//User defined libraries

//Global constants

//Function prototypes


/*
 * 
 */
//execution begins here
int main(int argc, char** argv) {
    float test1, test2, test3, test4, test5, average;
    cout<<"This program will take five different test scores and display the average\n";
    cout<<"please input first test score now\n";
    cin>> test1;
    cout<<"Please input second test score now\n";
    cin>> test2;
    cout<<"Please input third test score now\n";
    cin>> test3;
    cout<<"Please input fourth test score now\n";
    cin>> test4;
    cout<<"Please input last test score now\n";
    cin>> test5;
    cout<<"Thank you.\n";
    average = (test1 + test2 + test3 + test4 + test5) / 5;
    cout<<setprecision(1)<<fixed;
    cout<<"The average test score is "<< average << endl;
    
    return 0;
}

