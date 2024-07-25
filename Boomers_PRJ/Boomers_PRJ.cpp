// Boomers_PRJ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "consultant.h"
#include "patient.h"
#include "Admin.h"


void rerun();


int main()
{

	patient pat;
	consultant_list cll;


    //cout << "WELCOME TO HOSPITAL MANAGEMENT SYSTEM\n \tUNIVERSITY OF RUHUNA\n \t    MINI PROJECT" << endl;
    //cout << "\n\n\tGROUP MEMBERS\n" << endl;
    //cout << "EG/2020/3967     HIMOSH.R" << endl;
    //cout << "EG/2020/4216     SHATHURSAN.R" << endl;
    //cout << "EG/2020/4235     THASEENTHAN.S" << endl;


	//patient P_getdata;
	int input;
	cout << "\t\t\t+------------------------------------------+\t\t\t" << endl;
	cout << "\t\t\t|           welcome  to Login page         |\t\t\t" << endl;
	cout << "\t\t\t+------------------------------------------+\t\t\t" << endl;
	cout << "1. User "<<endl;
	cout << "2. Admin " << endl;
	cout << "Login as a (User/Admin): ";
	cin >> input;
	


	switch (input) {
	
	case 1:
		cout << "\t\t\t+------------------------------------------+\t\t\t" << endl;
		cout << "\t\t\t|             Book your Appoinment         |\t\t\t" << endl;
		cout << "\t\t\t+------------------------------------------+\t\t\t" << endl;
		pat.P_getdata();
		rerun();


		break;

	case 2:

		
		admin();
		rerun();


		break;


	default:
		cout << "Wrong input" << endl;
	}
	return 0;
}



void rerun() {
	char again;
start:
	cout << "Would you like to go Admin page? (y/n):"; // to hold y or n input
	cin >> again;
	if (again == 'y') {
		system("CLS");//system("CLS"); // to clear the screen
		main(); // it will go back to asking if they wants to play again or not

	}
	/*else if (again == 'n') {
		cout << "Press any key to continue." << endl;
		cin.ignore(1);

	}*/
	else {
		cout << "Press any key to continue." << endl;
		cin.ignore(1);
	}
}



