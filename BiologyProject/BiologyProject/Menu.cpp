#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include "menu.h"
#include "../BiologyData/Functions.h"

using namespace std;

int counter = 0;


int checkKeyPressed()
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

void title()
{
    cout << endl << endl << endl << endl << endl;
    cout << setw(180) << "-      -      -  -------------  -                --------------    --------------   -             -  -------------" << endl;
    cout << setw(180) << "|     | |     |  |              |               |                 |              |  ||           ||  |            " << endl;
    cout << setw(180) << "|    |   |    |  |              |               |                 |              |  | |         | |  |            " << endl;
    cout << setw(180) << "|   |     |   |  |              |               |                 |              |  |  |       |  |  |            " << endl;
    cout << setw(180) << "|  |       |  |  |------------  |               |                 |              |  |   |     |   |  | -----------" << endl;
    cout << setw(180) << "| |         | |  |              |               |                 |              |  |    |   |    |  |            " << endl;
    cout << setw(180) << "||           ||  |              |               |                 |              |  |     | |     |  |            " << endl;
    cout << setw(180) << "-             -  -------------  --------------   --------------    --------------   -      -      -  -------------" << endl;

}

void menu()
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


        selectedOption(1, position); cout /*<< setw(123)*/ << "START" << endl;
        selectedOption(2, position); cout /*<< setw(122)*/ << "INFO" << endl;
        selectedOption(3, position);  cout /*<< setw(122)*/ << "EXIT" << endl;
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
        //system("CLS");  
          //Bioapp();

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
            cout << setw(140) << "PRESS ANY BUTTON OTHER THEN ~ENTER~ TO CONTINUE...";
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
void info()
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



void setColor()
{
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 2);
}

void selectedOption(int position,int nextPosition)
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