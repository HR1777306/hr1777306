/* 
 * File:   main.cpp
 * Author:Hugo Romero
 * Purpose: write a program that asks for two inputs and outputs the higher value.
 * Created on July 7, 2014, 10:02 PM
 */
//System libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//User defined libraries

//Global constants

//function prototypes
void program1();
void program2();
void program3();
void program4();
void program5();
void program6();
void program7();
void program8();
void program9();
void program10();
void pressEnter();

/*
 * 
 */

int main(int argc, char** argv) {
    
    int choice;
    do{
        cout<<"Assignment 3 Menu      "<<endl
            <<"[1]  Problem 1          "<<endl
            <<"[2]  Problem 2          "<<endl
            <<"[3]  Problem 3          "<<endl
            <<"[4]  Problem 4          "<<endl
            <<"[5]  Problem 5          "<<endl
            <<"[6]  Problem 6          "<<endl
            <<"[7]  Problem 7          "<<endl
            <<"[8]  Problem 8          "<<endl
            <<"[9]  Problem 9          "<<endl
            <<"[10] Problem 10         "<<endl
            <<"[0] Exit Program        "<<endl
            <<"Choice:  "<<endl;
        cin>>choice;
        
        switch(choice){
            case 1:
                program1();
                break;
            case 2:
                program2();
                break;
            case 3:
                program3();
                break;
            case 4:
                program4();
                break;
            case 5:
                program5();
                break;
            case 6:
                program6();
                break;
            case 7:
                program7();
                break;
            case 8:
                program8();
                break;
            case 9:
                program9();
                break;
            case 10:
                program10();
                break;              
        }
    }while(choice!=0);
    
    cout<<"Exiting program...."<<endl;
    return 0;
}
void program1(){
    //Write a program that inputs two values and outputs the higher value
    
    //user defined libraries
    
    //global constants
    
    //fuction prototypes
   
    //execution begins here
    int x,y;//inputs, value is the higher value of the two
    cout<<"input first value now: ";
    cin>>x;
    cin.ignore();
    cout<<"input second value now: ";
    cin>>y;
    cin.ignore();
    cout<<"the higher value is: ";
    if (x>y) 
        cout<<x<<endl;
    else{ 
        cout<<y<<endl;
    }
    pressEnter();
}
void program2(){
    
    //write a program that asks for a number 1-10 and convert it to a roman numeral 
    //do not accept a value lower than 1 or higher than 10
    int x;
    do{
        cout<<"Input value from 1-10:  ";
        cin>>x;
        cin.ignore();
    }while( x < 1 || x > 10 );
    
    cout<<"Roman Expression:  ";
    switch (x){
        case 8:
            cout<<"V";
        case 3:
            cout<<"I";
        case 2:
            cout<<"I";
        case 1:
            cout<<"I";
            break;
        case 9:
            cout<<"I";
        case 10:
            cout<<"X";
            break;
        case 4: 
            cout<<"I";
        case 5:
            cout<<"V";
            break;
        case 6:
            cout<<"VI";
            break;
        case 7:
            cout<<"VII";
            break;
    }
    cout<<endl;
    pressEnter();
}
void program3(){
    //write a program that checks if the day and month values multiplied equal the year.  output magic date if true not magic if false.
    int x,y,z;
    do{
        cout<<"enter a two digit day ";
        cin>>x;
        cin.ignore();
    }while(!(x>0 && x<=31));
    do{
        cout<<"input two digit month ";
        cin>>y;
        cin.ignore();
    }while(!(y>0 && y<=12));   
    do{
        cout<<"input two digit year ";
        cin>>z;
        cin.ignore();
    }while(!(z>0 && z<=99));
    
    if ((x * y) == z)
        cout<<"magic date"<<endl;
    else {
        cout<<"not magic date"<<endl;
    }
    pressEnter();
}
void program4(){
    int length1, width1, length2, width2;
    cout<<"Enter width 1 :  ";
    cin>>width1;
    cin.ignore();
    cout<<"Enter length 1:  ";
    cin>>length1;
    cin.ignore();
    cout<<"Enter width 2 :  ";
    cin>>width2;
    cin.ignore();
    cout<<"Enter length 2:  ";
    cin>>length2;
    cin.ignore();
    
    int area1 = width1*length1;
    int area2 = width2*length2;
    
    if(area1>area2){
        cout<<"Area 1 is greater than Area 2"<<endl;
    }
    else if(area2>area1){
        cout<<"Area 2 is greater than Area 1"<<endl;
    }
    else{
        cout<<"The areas are the same..."<<endl;
    }
    pressEnter();
}
void program5(){
    float height, weight;
    cout<<"Enter height (inches):  ";
    cin>>height;
    cin.ignore();
    cout<<"Enter weight (pounds):  ";
    cin>>weight;
    cin.ignore();
    
    float bmi = weight * 703.0 / height / height;
    
    if(bmi>25.0){
        cout<<"Overweight..."<<endl;
    }
    else if(bmi<18.5){
        cout<<"Underweight"<<endl;
    }
    else{
        cout<<"Healthy"<<endl;
    }
    pressEnter();
}
void program6(){
    float mass, weight;
    cout<<"Enter mass (kg):  ";
    cin>>mass;
    cin.ignore();
    weight = mass * 9.8;
    
    if(weight>1000){
        cout<<"Too Heavy..."<<endl;
    }
    else if(weight<10){
        cout<<"Too Light..."<<endl;
    }
    else{
        cout<<weight<<"N "<<endl;
    }
    pressEnter();
}
void program7(){
    string run1, run2, run3;
    float time1, time2, time3;
  //Get Information
    cin.ignore();
    cout<<"Runner 1 Name:  ";
    getline(cin,run1);
    cout<<run1<<"'s Time:  ";
    cin>>time1;
    cin.ignore();
    cout<<"Runner 2 Name:  ";
    getline(cin,run2);
    cout<<run2<<"'s Time:  ";
    cin>>time2;
    cin.ignore();
    cout<<"Runner 3 Name:  ";
    getline(cin,run3);
    cout<<run3<<"'s Time:  ";
    cin>>time3;
    cin.ignore();
    cout<<endl;
    
  //Evaluate
    if(time1<=time2&&time1<=time3){
        cout<<run1<<" 1st Place"<<endl;
        if(time2<=time3){
            cout<<run2<<" 2nd Place"<<endl;
            cout<<run3<<" 3rd Place"<<endl;
        }
        else{
            cout<<run3<<" 2nd Place"<<endl;
            cout<<run2<<" 3rd Place"<<endl;
        }
    }
    else if(time2<=time1&&time2<=time3){
        cout<<run2<<" 1st Place"<<endl;
        if(time1<=time3){
            cout<<run1<<" 2nd Place"<<endl;
            cout<<run3<<" 3rd Place"<<endl;
        }
        else{
            cout<<run3<<" 2nd Place"<<endl;
            cout<<run1<<" 3rd Place"<<endl;
        }
    }
    else{
        cout<<run3<<" 1st Place"<<endl;
        if(time2<=time1){
            cout<<run2<<" 2nd Place"<<endl;
            cout<<run1<<" 3rd Place"<<endl;
        }
        else{
            cout<<run1<<" 2nd Place"<<endl;
            cout<<run2<<" 3rd Place"<<endl;
        }
    }
    pressEnter();
}
void program8(){
    cout<<"Sorry didn't finish yet... =("<<endl;
}
void program9(){
    cout<<"Sorry didn't finish yet... =("<<endl;
}
void program10(){
    cout<<"Sorry didn't finish yet... =("<<endl;
}
void pressEnter(){
    cout<<"Press ENTER to continue..."<<endl;
    cin.ignore();
}
