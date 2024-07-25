#pragma once
#include "patient.h"
#include "LinkedList.h"
#include "consultant.h"
#include "Queue.h"


void admin() {
	int password = 12345;
	int p;
	int input;
	cout << "Plesase enter your password : ";
	cin >> p;

	if (p == password) {

		cout << "\t\t\t+------------------------------------------+\t\t\t" << endl;
		cout << "\t\t\t|         welcome to Admin page            |\t\t\t" << endl;
		cout << "\t\t\t+------------------------------------------+\t\t\t" << endl;

		cout << "1. Add consultant " << "\t" << endl;
		cout << "2. View Appoinments " << "\t" << endl;
		cout << "\nEnter your selection : ";
		cin >> input;
		string doc1, hosp1, day1, docName1;
		consultant_list admin;
		
		//Queue_Array admin1;
		patient admin1;

		switch (input) {


		case 1:
			
			cout << " \n*. Enter consutant type : ";
			cin >> doc1;
			cout << "*. Enter doctorname : ";
			cin >> docName1;
			cout << "*. Enter hospital name : ";
			cin >> hosp1;
			cout << "*. day  : ";
			cin >> day1;

			
			admin.defaultConst();
			admin.InputConsulatant( doc1, docName1,  hosp1,  day1);
			//admin.constPrint();
			break;

		case 2:
			admin.view_data();
			
			break;

		default:
			cout << "Wrong input" << endl;
		}
	
	}
	else {

		cout << "Your password is incorrect" << "\t" << endl;
		
	}

	
}















