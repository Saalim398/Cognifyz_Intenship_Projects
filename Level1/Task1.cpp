/*
Quiz Game in C++
Cognifyz internship Beginner Level->Task 1
Objective: Implement a simple game using conditional statements for game logic.

*/

#include<iostream>
#include<string>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
#include<map>
#include<limits>

using namespace std;



void logic(){
    int score = 0;
       map<string,string> questions = {
        {"A void function does not contain [datatypes,string or return] ", "return"},
        {"Which library is used to perfoem mathematical operations in C++ [MAth cmath mathc]", "cmath"},
        {"To concatinate string we use [strcat() or concat()]", "strcat()"},
        {"Which keyword is used to create structure in c++ [struct , structure() , struct()]", "struct"},
        {"To create a Class we use which keyword [Class , class]", "class"}
    };
    char key = getch();
    for (const auto& [question, correctAnswer] : questions) {
        string userAnswer;
       
        
        cout << question << std::endl;
        fflush(stdin);
        fflush(stdin);
        getline(std::cin, userAnswer);  
        

        
        if (userAnswer == correctAnswer) {
            std::cout << "Correct!" << std::endl;
            score = score + 5;
        } else {
            std::cout << "Incorrect. The correct answer is: " << correctAnswer << std::endl;
            score = score -2;
        }
        std::cout << std::endl;
    }

    
    std::cout << "Quiz completed! Your score is: " << score << " out of " << 25 << std::endl;
}
void rules(){
    string rules[5] = {"1. For every correct answer +5 marks will be awarded","2. For every incorrect answer score will be decremented by 2","3. Write your answers "};
    cout<<"Rules:"<<endl;
    for (int i = 0; i < sizeof(rules)/sizeof(rules[0]); i++)
        {
            cout<<rules[i]<<"\n";
        }
}
void launchScreen(){
           
cout<<"Press \nS to start \nQ to quit"<<endl;
}
void developerInfo(){
    cout<<"Version 1\nDeveloped by Mohammad Saalim Khan\nThis is a simple quiz game"<<endl;
}
        




int main(int argc, char const *argv[])
{
    
    char launchInput,key = getch();
    int screenWidth  = 80;
    string text = {"Welcome to quizQUIZ"};
    
    std::cout << text << std::endl;
    cout<<"\n";
    rules();
    cout<<"\n";
    developerInfo();
    cout<<"\n";
    launchScreen();
    cout<<"Enter Choice: ";
    cin>>launchInput;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    switch (launchInput)
    {
    case 'S':
        cout << "Please answer the following questions:" << std::endl << std::endl;
        logic();
       
        break;
    case 'Q':
        exit(0);
        break;
    default:
        cout<<"oops! wrong Choice :("<<endl;
        break;
    }

    return 0;
}


