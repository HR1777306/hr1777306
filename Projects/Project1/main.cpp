/* 
 * File:   main.cpp
 * Author: 
 *
 * Purpose:  Trivia Game
 */

//System Level Libraries
#include <cstdlib>  //Rand
#include <iostream> 
#include <iomanip>
#include <ctime>    //Time
#include <string>
#include <fstream>  //Files

//User Libraries

//Namespace
using namespace std;

//Global Constants

//Function Prototypes
    //Displays an intro sequence
void intro();
    //Get the player name
string getPlayerName();
    //Gets all questions from the file and puts them into an array
void getAllQuestions(string q[], const int ALL);
    //Gets all answers from the file and puts them into an array
void getAllAnswers(string a[], const int ALL);
    //Get a single question
int getQuestion(string q[], int difficulty);
    //Get 4 answers
int getChoices(string answers[], int correct, string choices[]);
    


//Begin Execution
int main(int argc, char** argv) {
    
  //Game Set-Up
    srand(time(0));
    float winnings = 0.5f;
    bool gameover = false;
    short round = 0;
    //Total of all questions/answers
    const int ALL = 100;
    //Get Player Name
    string name = getPlayerName();
    //Get all questions
    string questions[ALL];
    getAllQuestions(questions, ALL);
    //Get all answers
    string answers[ALL];
    getAllAnswers(answers, ALL);
    //Array for potential answers
    string choices[4];


  //Game Execution
    intro(); //Display intro sequence
    do{
      //Get a question
        int num = getQuestion(questions,++round);
      
      //Print out a question
        cout<<questions[num]<<endl;
      
      //Get potential answers
        
        
      //Print potential answers
        
        

      //Is the gameover?
        if(round==10){
            gameover == true;
        }
    }while(!gameover);
    

  //Stay Execution
    return 0;
}
void intro(){
    std::cout<<"This is where your game intro would go..."<<endl;
}
string getPlayerName(){
    //Declare Name
    string name;
    //Prompt for user name
    cout<<"Enter your name:  ";
    //Retrieve name from cin
    getline(cin,name);
    //Return name
    return name;
}
void getAllQuestions(string q[], const int ALL){
    
}
void getAllAnswers(string a[], const int ALL){
    
}
int getQuestion(string q[], int difficulty){
    
}
int getChoices(string a[], int correct, string choices[]){
    
}