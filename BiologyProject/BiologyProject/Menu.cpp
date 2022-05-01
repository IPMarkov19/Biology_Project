#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include "menu.h"
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

        if (keyPressed == 80 && (position >= 1 && position < 4))
        {
            position++;
        }
        else if (keyPressed == 72 && (position >= 2 && position <= 5))
        {
            position--;
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
    cout << setw(145) << "Do you want to go back to the menu? - Y/N" << endl;

    char answer;
    bool valid = false;

    while (valid == false)
    {
        cin >> answer;

        if (answer == 'Y' || answer == 'y')
        {
            system("CLS");
            mainMenu();
            valid = true;
        }

        else if (answer == 'N' || answer == 'n')
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

        else
        {
            system("CLS");
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            cout << endl << "You entered an invalid statement. Please try again." << endl;
            valid = false;
        }
    }
}



void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void selectedOption(int currentPosition, int nextPosition)
{
    if (currentPosition == nextPosition)
    {
        cout << setw(118) << "--->>  ";

    }
    else
    {
        cout << setw(118) << "       ";
    }
}