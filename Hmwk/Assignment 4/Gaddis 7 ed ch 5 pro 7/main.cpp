/* 
 * File: Hugo Romero
 *  Purpose: write a program that start with 1 cent value and doubles each day.5
 * Author: rente_000
 *
 * Created on July 9, 2014, 11:31 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    float days, amount=0.01f;
    
    //input
    do{
        cout<<"enter the number of days(max 60)"<<endl;
        cin>>days;
    }while(days<0||days>60);
    
    //output
    cout<<"days\t\tpay amount"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<fixed<<setprecision(2);
    //calculate
    for(int i=1; i<=days; i++){
        cout<<i<<"\t\t$"<<amount<<endl;
        amount *= 2;
    }
    
    return 0;
}

