/* 
 * File:   main.cpp
 * Author: Hugo Romero
 * Purpose:write a program that ask for a budget and expenses.  output if over or under budget
 *
 * Created on July 11, 2014, 7:22 PM
 */

#include <iostream>
#include <iomanip>

//System libraries

using namespace std;

//User defined libraries

//Global constants


//Funtion prototypes
/*
 * 
 */

//Execution starts here
int main(int argc, char** argv) {

    //Declare values
    float budget, counter; //budget input. counter is expenses
    float total;
//input
    cout<<"what is this month's total budget amount? "<<endl;
    cin>>budget;
   
    while (counter!=-9999)
    {
        total+=counter;
        cout<<"enter expense.  Press -9999 to stop"<<endl;
        cin>>counter;
    
    }
    if (total> budget){
        cout<<"you have gone over budget.  total amount is   "<<total<<endl;
    }
    else {
        cout<<"congratulations you are under budget.  Total amount is  "<<total<<endl;
    }

        
    return 0;
}

