/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose: Write a program that ask to name three months and input a value for each.  Display the value
 * Created on July 1, 2014, 8:09 PM
 */
//system level libraries
#include <iostream>//input ouput library

using namespace std;

//User defined libraries

//Global constants

//Funtion prototypes
/*
 * 
 */
//execution begins here
int main(int argc, char** argv) {

float input1, input2, input3, average;//Values for each input in order.  Average = average of inputs
string month1, month2, month3;
cout<<"This program will display the average rainfall in inches for three months."<<endl;
cout<<"Please enter the first month's name now"<<endl;
    cin>>month1;
    cin.ignore();
cout<<"How many inches of rain for the month of "<<month1<<"?"<<endl;
    cin>>input1;
    cin.ignore();
cout<<"Please enter the second month"<<endl;
    cin>>month2;
    cin.ignore();
cout<<"How many inches of rain for the month of "<<month2<<"?"<<endl;
    cin>>input2;
    cin.ignore();
cout<<"Please enter the last month now"<<endl;
    cin>>month3;
    cin.ignore();
cout<<"How many inches of rain for month of"<<month3<<"?"<<endl;
    cin>>input3;
    cin.ignore();
average = (input1 + input2 + input3) / 3;
cout<<"the average inches of rain for the months of "<<month1<<", " <<month2<<", " << month3<<" is "<<average<<" inches of rain"<<endl; 
   
    return 0;
}