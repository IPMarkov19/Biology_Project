#pragma once
#include <iostream>
#include "Data.h"
#include "../BiologyProject/Menu.h"

using namespace std;

void printTest(int theme);

void printGeneticsTheme(int a)
{
	cout <<"  ========    =======    ==     =    =======    =========    =    =======    =======   " << endl;
	cout <<"  =           =          = =    =    =              =             =          =         " << endl;
	cout <<"  =           ======     =  =   =    ======         =        =	  =            ===     " << endl;
	cout <<"  =    ===    =          =   =  =    =              =        =    =                =   " << endl;
	cout <<"  =      =    =          =    = =    =              =        =    =                =   " << endl;
	cout <<"  ========    =======    =     ==    =======        =        =    =======    =======   " << endl;

	cout << endl;

	cout << "Variation. Every individual in the human population has different characteristics such as eye colour, heightand body mass.Plants of the same species or type can also differ in height, flower colour or leaf length.These differences are called variation." << endl;
	cout << "The version of a characteristic shown by an individual is called its phenotype." << endl;
	cout << "Organisms that carry out sexual reproduction are able to combine different forms of genes from two parents, which increases variation in their offspring." << endl;
	cout <<	"A phenotype is an inherited characteristic.The phenotype of every individual is due to the genes they inherited from their parents."<< endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Do you want to attempt the test? (1/0) ";

	int attemptChoice;
	cin >> attemptChoice;

	if (attemptChoice == 1)
	{
		system("CLS");
		printTest(a);
	}
}


void printCellStructureTheme(int a)
{
	cout << "=======    =======    =          =      " << endl;
	cout << "=          =          =          =      " << endl;
	cout << "=          ======     =          =      " << endl;
	cout << "=          =          =          =      " << endl;
	cout << "=          =          =          =      " << endl;
	cout << "=======    =======    =======    =======" << endl;

	cout << endl;

	cout << "What are cells?" << endl;
	cout << "Cells are the building blocks of all living organisms." << endl;
	cout << "Organisms made of a single cell, such as bacteria and the fungus yeast, are described as being unicellular." << endl;
	cout << "Organisms made of many cells such as animals, most plants and many species of fungi, are described as being multicellular." << endl;
	cout << "Multicellular organisms can be made up of millions of cells." << endl;
	cout << "Cells are microscopic, so to see their structure we need to use microscopes. We can see more structures clearly if we use stains to colour specimens before putting them under the microscope." << endl;
	cout << "Stains are coloured dyes that are absorbed by some cell structures but not by others. An example of a stain which is used is iodine." << endl;

	cout << endl;

	cout << "The ultrastructure of cells " << endl;
	cout << "The ultrastructure of a cell is its fine structure as revealed at high magnification. Animal, fungal and plant cells all contain structures called organelles. These are specialised for particular functions. " << endl;
	cout << "The diagrams below show the similarities and differences between the ultrastructure of animal cells and plant cells. " << endl;

	cout << endl;

	cout << "Structure of fungal and bacterial cells" << endl;
	cout << "A yeast is a unicellular fungus. Bacterial cells have a more simple structure compared to animal, plant and fungal cells and are usually much smaller." << endl;
	cout << "They still have a cell membrane and ribosomes, but they lack organelles such as the nucleus. " << endl;
	cout << "However, bacteria still have DNA, including extra circular pieces of DNA called plasmids.Their cell wall is made of a diffferent material and has a different structure to those of plant and fungal cells." << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Do you want to attempt the test? (1/0) ";

	int attemptChoice;
	cin >> attemptChoice;

	if (attemptChoice == 1)
	{
		system("CLS");
		printTest(a);
	}
}

void printBiosphereTheme(int a)
{
	cout << "===      =    ======    =======    ======     =     =    =======    =====     =======" << endl;
	cout << "=  =          =    =    =          =     =    =     =    =          =    =    =      " << endl;
	cout << "===      =    =    =	   ===      ======     =     =    ======     =====     ====== " << endl;
	cout << "====     =    =    =          =    =          =======    =          = =       =      " << endl;
	cout << "=   =    =    =    =          =    =          =     =    =          =   =     =      " << endl;
	cout << "====     =    ======    =======    =          =     =    =======    =    =    =======" << endl;

	cout << endl;

	cout << "The biosphere is made up of the parts of Earth where life exists. The biosphere extends from the deepest root systems of trees, to the dark environment of ocean trenches, to lush rain forests and high mountaintops." << endl;
	cout << "Scientists describe the Earth in terms of spheres. The solid surface layer of the Earth is the lithosphere. The atmosphere is the layer of air that stretches above the lithosphere. The Earth’s water—on the surface, in the ground, and in the air—makes up the hydrosphere." << endl;
	cout << "Since life exists on the ground, in the air, and in the water, the biosphere overlaps all these spheres." << endl;
	cout << "Although the biosphere measures about 20 kilometers (12 miles) from top to bottom, almost all life exists between about 500 meters (1,640 feet) below the ocean’s surface to about 6 kilometers (3.75 miles) above sea level." << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Do you want to attempt the test? (1/0) ";

	int attemptChoice;
	cin >> attemptChoice;

	if (attemptChoice == 1)
	{
		system("CLS");
		printTest(a);
	}
}

void printHomeostasis(int a)
{
	cout << "=    =    ========    ==      ==    =======    ========    =======    =========        ==        =======     =    =======" << endl;
	cout << "=    =    =      =    = =    = =    =          =      =    =              =		   =  =       =                =      " << endl;
	cout << "=    =    =      =    =  =  =  =    ======     =      =      ===          =		  =    =        ===       =      ===  " << endl;
	cout << "======    =      =    =   ==   =    =			=      =          =        =		 ========           =     =          =" << endl;
	cout << "=    =    =      =    =        =    =			=      =          =        =		=        =          =     =          =" << endl;
	cout << "=    =    ========    =        =    =======	========    =======        =	   =          =   =======     =    =======" << endl;

	cout << endl;

	cout << "Homeostasis" << endl;
	cout << "The conditions inside our body must be very carefully controlled if the body is to function effectively. Homeostasis is the maintenance of a constant internal environment." << endl;
	cout << "The nervous system and hormones are responsible for this." << endl;
	cout << "One example of homeostasis is the concentration of carbon dioxide in the blood being carefully controlled. Here are some of the other internal conditions that are regulated:" << endl;
	cout << "Body temperature" << endl;
	cout << "This is controlled to maintain the temperature at which the body’s enzymes work best, which is usually 37°C." << endl;
	cout << "Blood sugar level" << endl;
	cout << "This is controlled to provide cells with a constant supply of glucose for respiration. It is controlled by the release and storage of glucose, which is in turn controlled by insulin." << endl;
	cout << "Water content" << endl;
	cout << "This is controlled to protect cells by stopping too much water from entering or leaving them. Water content is controlled by water loss from:" << endl;
	cout << "the lungs - when we exhale, the skin - by sweating, the body - in urine produced by the kidneys" << endl;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Do you want to attempt the test? (1/0) ";
	
	int attemptChoice;
	cin >> attemptChoice;

	if (attemptChoice == 1)
	{
		system("CLS");
		printTest(a);
	}
	else if (attemptChoice==0)
	{
		system("CLS");
		mainMenu();
	}
	
}

void congratsScale(int points)
{
	if (points == 0)
	{
		cout << endl;
		cout << "Did you even study? You've got " << points << " out of 7!";
		cout << endl;
		cout << endl;

		system("pause");
		system("CLS");
		mainMenu();
	}
	else if (points > 0 and points <= 3)
	{
		cout << endl;
		cout << "You need to study more. You've got " << points << " out of 7!";
		cout << endl;
		cout << endl;

		system("pause");
		system("CLS");
		mainMenu();
	}
	else if (points > 3 and points < 6)
	{
		cout << endl;
		cout << "Good one! You've got " << points << " out of 7";
		cout << endl;
		cout << endl;

		system("pause");
		system("CLS");
		mainMenu();
	}
	else
	{
		cout << endl;
		cout << "Perfect score! You've got " << points << " out of 7";
		cout << endl;
		cout << endl;

		system("pause");
		system("CLS");
		mainMenu();
	}
}



void printTest(int theme)
{
	int points = 0;

	for (int i = 0; i < 7; i++)
	{
		cout<< i+1<<"." << bioQuestions[theme][i] << endl;
		cout << endl;

		cout << "1." << bioAnswers[theme][i][0] << "    2." << bioAnswers[theme][i][1] << endl;;
		cout << "3." << bioAnswers[theme][i][2]<< endl;

		int choice;

		cin >> choice;

		if (choice < 1 or choice > 3)
		{
			while (choice != 1 or choice != 2 or choice != 3)
			{
				cout << "Incorrect choice! Please answer from 1 to 3." << endl;
				cin >> choice;
			}
		}
		else
		{
			if (rightAnswers[theme][i] == choice - 1)
			{
				points++;
			}
		}

		cout << system("CLS");
	}

	congratsScale(points);
}


void startMenu()
{
	system("CLS");

	for (int i = 0; i < 4; i++)
	{
		cout <<i+1<<"." << bioThemes[i] << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "Please select the theme you want to study (1-4)." << endl;

	int themeChoice;

	cin >> themeChoice;
	themeChoice--;

	system("CLS");

	if (themeChoice == 0)
	{
		printGeneticsTheme(themeChoice);
	}
	else if (themeChoice == 1)
	{
		printCellStructureTheme(themeChoice);
	}
	else if (themeChoice == 2)
	{
		printBiosphereTheme(themeChoice);
	}
	else if (themeChoice == 3)
	{
		printHomeostasis(themeChoice);
	}
}