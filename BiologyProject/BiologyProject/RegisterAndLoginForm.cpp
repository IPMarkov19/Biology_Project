#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <string>
#include "RegisterAndLoginForm.h"
#include "Menu.h"
using namespace std;

void login() //Function for the login page
{
	int count = 0;
	string userID;
	string password;
	string id;
	string pass;
	system("CLS");
	cout << endl << endl << endl;
	cout << setw(145) << " Please enter the username and password : " << endl;
	cout << endl;
	cout << setw(127) << " USERNAME: ";
	cin >> userID;
	cout << endl;
	cout << setw(127) << " PASSWORD: ";
	cin >> password;
	cout << endl;

	ifstream input("records.txt");
	while (input >> id >> pass)
	{
		if (id == userID && pass == password)
		{
			count = 1;
			system("CLS");
		}
	}
	input.close();

	if (count == 1)
	{
		system("CLS");
		cout << endl << endl << endl;
		cout << setw(118) << userID << ", your login is successfull!" << endl;
		cout << endl;
		cout << setw(111) << " ";
		system("pause");
		system("CLS");
		mainMenu();
	}
	else
	{
		cout << setw(128) << "LOGIN ERROR" << endl;
		cout << endl;
		cout << setw(144) << "Please check your username and password!" << endl;
		cout << endl;
		cout << setw(105) << " ";
		system("pause");
		system("CLS");
		loginMenu();
	}
}
void registration() //Function for the registration page
{
	string rUserID;
	string rPassword;
	string rID;
	string rPass;
	system("CLS");
	cout << endl << endl << endl;
	cout << setw(127) << " Enter the username : ";
	cin >> rUserID;
	cout << endl;
	cout << endl;
	cout << setw(127) << " Enter the password : ";
	cin >> rPassword;
	cout << endl;

	ofstream f1("records.txt", ios::app);
	f1 << rUserID << ' ' << rPassword << endl;
	system("CLS");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(135) << "Registration is successfull!" << endl;
	cout << endl;
	cout << endl;
	cout << setw(105) << " ";
	system("pause");
	system("CLS");
	loginMenu();
}
void forgotPassword() //Function for password page
{
	int option;
	system("CLS");
	cout << endl << endl << endl;
	cout << setw(135) << "YOU FORGOT YOUR PASSWORD?" << endl;
	cout << endl;
	cout << setw(148) << "Press 1 to search your ID by username " << endl;
	cout << endl;
	cout << setw(128) << "Press 2 to go back" << endl;
	cout << endl;
	cout << setw(130) << "Enter your choice : ";
	cin >> option;
	cout << endl;

	switch (option)
	{
	case 1:
	{
		int count = 0;
		string sUserID;
		string sID;
		string sPass;
		system("CLS");
		cout << endl << endl << endl;
		cout << setw(127) << "Enter the username : ";
		cin >> sUserID;

		ifstream f2("records.txt");
		while (f2 >> sID >> sPass)
		{
			if (sID == sUserID)
			{
				count = 1;
			}
		}
		f2.close();
		if (count == 1)
		{
			system("CLS");
			cout << endl << endl << endl;
			cout << setw(130) << "Your account is found!" << endl;
			cout << endl;
			cout << setw(127) << "Your password is : " << sPass << endl;
			cout << endl;
			cout << setw(105) << " ";
			system("pause");
			system("CLS");
			loginMenu();
		}
		else
		{
			system("CLS");
			cout << endl << endl << endl;
			cout << setw(127) << "Your account is not found!" << endl;
			cout << endl;
			cout << setw(100) << " ";
			system("pause");
			system("CLS");
			loginMenu();
		}
		break;
	}
	case 2:
	{
		system("CLS");
		loginMenu();
		break;
	}
	default: cout << "Wrong choice, please try again!" << endl;
		forgotPassword();
		break;
	}
}
void loginMenu() //Function for login menu page
{
	int position = 1;
	int keyPressed = 0;

	while (keyPressed != 13)
	{
		system("CLS");
		title();
		cout << endl << endl << endl;
		cout << setw(145) << "______________________________________________\n\n\n";
		cout << setw(145) << "       Welcome to Login & Register page       \n\n\n";
		cout << setw(144) << "_______________      MENU      _______________\n\n";
		cout << setw(145) << "                                                     \n\n";
		selectedOption2(1, position); cout << "|       LOGIN       |" << endl;
		selectedOption2(2, position); cout << "|      REGISTER     |" << endl;
		selectedOption2(3, position); cout << "|      PASSWORD     |" << endl;
		selectedOption2(4, position); cout << "|        EXIT       |" << endl;
		cout << endl;
		cout << endl;

		keyPressed = _getch();

		if (keyPressed == 80)
		{
			position++;
			if (position == 5)
			{
				position = 1;
			}
		}
		else if (keyPressed == 72)
		{
			position--;
			if (position == 0)
			{
				position = 4;
			}
		}
		else
		{
			position = position;
		}
	}

	if (position == 1)
	{
		login();
	}

	if (position == 2)
	{
		system("CLS");
		registration();
	}

	if (position == 3)
	{
		system("CLS");
		forgotPassword();
	}

	if (position == 4)
	{
		system("CLS");
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << setw(145) << "Thank you for using our app! We hope you had a great experience!";
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		exit(0);
	}
}

void selectedOption2(int position, int nextPosition) //Function for the pointer for the menu
{
	if (position == nextPosition)
	{
		cout << setw(108) << "--->>  ";
	}
	else
	{
		cout << setw(108) << "       ";
	}
}
