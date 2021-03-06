#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include "menu.h"
#include "../BiologyData/Functions.h"
#include "RegisterAndLoginForm.h"

using namespace std;

int counter = 0;


int checkKeyPressed() //Function to check if any key is pressed
{
    char key;
    int asciiValue;
    while (1)
    {
        key = _getch();
        asciiValue = key;
        return asciiValue;
    }
}

void title() //Function for the welcome ascii art
{
    cout << endl << endl << endl << endl << endl;
    cout << R"(
         
        
                                                                               ____      ____  ________  _____       ______    ___   ____    ____  ________  
                                                                              |_  _|    |_  _||_   __  ||_   _|    .' ___  | .'   `.|_   \  /   _||_   __  | 
                                                                                \ \  /\  / /    | |_ \_|  | |     / .'   \_|/  .-.  \ |   \/   |    | |_ \_| 
                                                                                 \ \/  \/ /     |  _| _   | |   _ | |       | |   | | | |\  /| |    |  _| _  
                                                                                  \  /\  /     _| |__/ | _| |__/ |\ `.___.'\\  `-'  /_| |_\/_| |_  _| |__/ | 
                                                                                   \/  \/     |________||________| `.____ .' `.___.'|_____||_____||________| 

                                                                                   
	)" << endl;
}

void menu() //Function for the menu after you login
{
    int position = 1;
    int keyPressed = 0;

    while (keyPressed != 13)
    {
        system("CLS");

        cout << endl << endl << endl << endl;

        cout << setw(130) << "--------------------" << endl;
        cout << setw(130) << "        MENU        " << endl;
        cout << setw(130) << "--------------------" << endl;


        selectedOption1(1, position); cout << "START" << endl;
        selectedOption1(2, position); cout << "INFO" << endl;
        selectedOption1(3, position);  cout << "EXIT" << endl;
        cout << endl;


        keyPressed = _getch();

        if (keyPressed == 80 )
        {
            position++;
            if (position == 4)
            {
                position = 1;
            }
        }
        else if (keyPressed == 72 )
        {
            position--;
            if (position == 0)
            {
                position = 3;
            }
        }
        else
        {
            position = position;
        }
    }

    if (position == 1)
    {
        startMenu();
    }

    if (position == 2)
    {
        system("CLS");
        info();
    }

    if (position == 3)
    {
        system("CLS");
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << setw(145) << "Thank you for using our app! We hope you had a great experience!";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        exit(0);
        counter = 0;
    }
}

void mainMenu()
{
    counter++;

    if (counter == 1)
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << setw(130) << "PRESS ENTER TO START...";
    }
    else
    {
        menu();
    }


    while (true)
    {
        if (checkKeyPressed() == 13)
        {
            system("CLS");
            title();
            cout << endl << endl << endl;
            loginMenu();
            if (checkKeyPressed() != 13)
            {
                break;
            }
        }
        else
        {
            system("CLS");
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << setw(140) << "You pressed the wrong button! Try again...";
        }
    }

    menu();

}
void info() //Function for the info page
{
    system("CLS");
    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

    cout << setw(130) << "---------------------------" << endl;
    cout << setw(130) << "         TEAM INFO         " << endl;
    cout << setw(130) << "---------------------------" << endl << endl << endl;

    cout << setw(130) << "Hello we are team ....!" << endl;
    cout << setw(139) << "We are 10th grade students from PGKPI." << endl << endl;
    cout << setw(146) << "Here are our names and positions in this project:" << endl;
    cout << setw(132) << "-> Ivailo Markov - Scrum Trainer" << endl;
    cout << setw(140) << "-> Teodor Osmanliev - Back-End Developer" << endl;
    cout << setw(139) << "-> Ivelin Vasilev - Front-End Developer" << endl;
    cout << setw(130) << "-> Georgi Milev - QA developer" << endl << endl;
    cout << setw(131) << "Thank you for using our app!" << endl << endl;

    cout << endl << endl << endl << endl;
    cout << setw(160) << "If you wnat to go back to the menu press the ~ESC~ button. Press any other key to quit." << endl;

    int answer;
    bool valid = false;

    while (valid == false)
    {
        answer = _getch();

        if (answer==27)
        {
            system("CLS");
            mainMenu();
            valid = true;
        }

        else
        {
            system("CLS");
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << setw(140) << "Thank you for using our app! We hope you had a great experience!";
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            exit(0);
            valid = true;
            counter = 0;
        }
    }
}

void selectedOption1(int position,int nextPosition) //Function for the pointer for the menu
{
    if (position == nextPosition)
    {
        cout << setw(118) << "--->>  ";
    }
    else
    {
        cout << setw(118) << "       ";
    }
}