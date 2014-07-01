/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose: write a program that can add multiple three quantity of 3 different variables each at 
 * a different value and display the total value.
 * Created on June 30, 2014, 9:10 PM
 */
//System level libraries
#include <iostream>//input output library
#include <iomanip>//input output manipulator

using namespace std;

//user defined libraries

//Global constants

//Function prototypes

/*
 * 
 */
//execution begins here
int main(int argc, char** argv) {
    float classA, classB, classC, totalInc; //totalInc = total income
    float classAp, classBp, classCp;// seat prices
    classAp = 15;
    classBp = 12;
    classCp = 9;
    cout<<"Welcome.  Class A tickets are $15 each.  How many Class A weats would you like?"<<endl;
    cin>> classA;
    cout<<"Class B tickets are $12 each.  How many Class B tickets would you like?"<<endl;
    cin>> classB;
    cout<<"Class C tickets are $9 each.  How many Class C tickets would you like?"<<endl;
    cin>> classC;
    totalInc = (classA * classAp) + (classB * classBp) + (classC * classCp);
            cout<<"Thank you.  Your total is $"<<fixed<<setprecision(2)<< totalInc <<endl;

    return 0;
}

