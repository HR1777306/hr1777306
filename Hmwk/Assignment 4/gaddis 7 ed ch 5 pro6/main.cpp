/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 9, 2014, 8:51 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    float speed, distance;
    int time;
    
    do{
        //input
        cout<<"what is the speed the vehicle is traveling?"<<endl;
        cin>>speed;
        cout<<"what is the time in hours traveled?"<<endl;
        cin>>time;
    }while(speed<0||time<0);
    //calculate
    distance = time * speed;
    
         
    //output
    cout<<fixed<<setprecision(2);
            cout<<"hours \t\t distance traveled"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    
    for(int i=1; i<=time; i++){
        cout<<i<<" \t\t "<<i*speed<<endl;
    }
    
    return 0;
}

