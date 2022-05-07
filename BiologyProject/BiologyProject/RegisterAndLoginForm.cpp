#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "RegisterAndLoginForm.h"
#include "Menu.h"
using namespace std;

void login()
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
void registration()
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
void forgotPassword()
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
void loginMenu()
{
	int choice;
	cout << setw(145) << "______________________________________________\n\n\n";
	cout << setw(145) << "       Welcome to Login & Register page       \n\n\n";
	cout << setw(144) << "_______________      MENU      _______________\n\n";
	cout << setw(145) << "                                                     \n\n";
	cout << setw(139) << "| Press 1 to LOGIN                    |" << endl;
	cout << setw(139) << "| Press 2 to REGISTER                 |" << endl;
	cout << setw(139) << "| Press 3 if you forgot your PASSWORD |" << endl;
	cout << setw(139) << "| Press 4 to EXIT                     |" << endl;
	cout << endl;
	cout << setw(132) << " Plese enter your choice : ";
	cin >> choice;
	cout << endl;


	switch (choice)
	{
	case 1:  login(); break;
	case 2: registration(); break;
	case 3: forgotPassword(); break;
	case 4: exit(0); break;
	default: system("CLS"); loginMenu();
	}
}