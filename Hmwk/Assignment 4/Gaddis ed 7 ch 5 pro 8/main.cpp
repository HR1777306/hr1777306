/* 
 * File:   main.cpp
 * Author: Hugo Romero
 *  Purpose: Write a program that displays the percentage of rooms oocupied in a hotel
 *
 * Created on July 9, 2014, 11:55 PM
 */

#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //declare variables
    int floors, rooms=0, occupied=0;
    
    //inputs
    do{
        cout<<"How many floors?"<<endl;
        cin>>floors;
    }while(floors<1);
    for(int i=1; i<=floors; i++){
        int tempRoom, tempOcc;
        do{
            cout<<"Floor "<<i<<":  How many rooms? "<<endl;
            cin>>tempRoom;
        }while(tempRoom<10);
        rooms += tempRoom;
        do{
            cout<<"Floor "<<i<<":  How many are occupied? "<<endl;
            cin>>tempOcc;
        }while(tempOcc>tempRoom);
        occupied += tempOcc;
    }
    
    //calculate
    float percent = occupied*100.0f/rooms;
    cout<<"total floors\ttotal rooms\toccupied\tpercentage coccupied"<<endl;
    cout<<floors<<"\t\t"<<rooms<<"\t\t"<<occupied<<"\t\t"<<percent<<"%"<<endl;
    
    return 0;
}

