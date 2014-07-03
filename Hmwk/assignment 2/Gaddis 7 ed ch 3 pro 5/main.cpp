/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:Write a program that ask for movie name and tickets sold.  
 *
 * Created on July 2, 2014, 10:46 PM
 */
//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

//user defined libraries

//Global constants

//function prototypes

/*
 * 
 */

//execution begins here
int main(int argc, char** argv) {

    //declare variables
    float gross, net, adult, child, amount;
    string movie;
    cout<<"Enter movie title"<<endl;
    getline(cin,movie);
    cout<<"how many adults?"<<endl;
    cin>>adult;
    cout<<"how many children?"<<endl;
    cin>>child;
    //calculations
    gross=adult*6 + child*3;
    net=gross*.2;
    amount=gross*.8;
    cout<<"movie name: "<<movie<<endl;
    cout<<"adult tickets sold: "<<adult<<endl;
    cout<<"child tickets sold: "<<child<<endl;
    cout<<"gross box office profit: "<<gross<<endl;
    cout<<"net box office profit: "<<net<<endl;
    cout<<"amount paid to distributor: "<<amount<<endl;
    return 0;
}

