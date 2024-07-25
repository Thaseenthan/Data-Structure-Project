#pragma once
#include <iostream>
#include <array>
#include<vector>
using namespace std;
#include"LinkedList.h";
#include"Queue.h";



class consultant_list {
private:


public:

	single_linked_list cons; // cons= consultant
	single_linked_list hos;
	single_linked_list days;
	single_linked_list doc_Name;
	single_linked_list pos_lst;
	Queue_Array con_queue;

	single_linked_list cons2; // cons= consultant
	single_linked_list hos2;
	single_linked_list days2;
	single_linked_list doc_Name2;

	void defaultConst() {
		// monday
		cons.insertLast("VP");
		doc_Name.insertLast("Thaseenthan");
		hos.insertLast("CEYMED");
		days.insertLast("monday");


		// wed
		cons.insertLast("Neurologists");
		doc_Name.insertLast("Himosh");
		hos.insertLast("Thanvanthiri");
		days.insertLast("wednesday");


		cons.insertLast("VP");
		doc_Name.insertLast("Thaseenthan");
		hos.insertLast("Thanvanthiri");
		days.insertLast("wednesday");

		cons.insertLast("Pediatricians");
		doc_Name.insertLast("Thishanth");
		hos.insertLast("Thanvanthiri");
		days.insertLast("wednesday");




		// thursday
		cons.insertLast("VP");
		doc_Name.insertLast("Sasitharan");
		hos.insertLast("Thanvanthiri");
		days.insertLast("thursday");


		//friday
		cons.insertLast("Psychiatrists");
		doc_Name.insertLast("Shathursan");
		hos.insertLast("CEYMED");
		days.insertLast("friday");

		//sunday
		cons.insertLast("VP");
		doc_Name.insertLast("Sasitharan");
		hos.insertLast("CEYMED");
		days.insertLast("sunday");

		cons.insertLast("VP");
		doc_Name.insertLast("doc1\t");
		hos.insertLast("CEYMED");
		days.insertLast("sunday");

		cons.insertLast("Neurologists");
		doc_Name.insertLast("Himosh");
		hos.insertLast("CEYMED");
		days.insertLast("sunday");



		cons.insertLast("Psychiatrists");
		doc_Name.insertLast("Shathursan");
		hos.insertLast("Thanvanthiri");
		days.insertLast("sunday");

		
	}

	

	void InputConsulatant(string doc, string docName, string hosp, string day) {
		defaultConst();
		cons.insertLast(doc);
		hos.insertLast(hosp);
		days.insertLast(day);
		doc_Name.insertLast(docName);
		
		cout << "successfully added consultant" << endl;

	}

	  
	

	void constPrint() {
		cons.print();
		doc_Name.print();
		hos.print();
		days.print();
		cout << endl;
	}

	//*****************************WORKING
	void search(string val) {
		int* array = cons.search(val);

		cout << endl;
		int i = 0;
		//string con_array[sizeof(array)]; // create array for con list
		while (i < sizeof(array) && array[i] >= 0) {
			
			cout << i + 1;
			cout << "\t ";
			cons.search_val(array[i]);
			cout << "\t ";
			doc_Name.search_val(array[i]);
			cout << "\t ";
			hos.search_val(array[i]);
			cout << "\t ";
			days.search_val(array[i]);
			cout << endl;
			
			//con_array[i]=

			i++;
		}
		

		cout << "\nEnter your preference consultant No : ";
		int n;
		cin >> n;
		

		if (n > 0 && n<=i) {
			cout << endl;
			int pos = array[n - 1];
			

			con_queue.str_enQueue(cons.re_search_val(pos), doc_Name.re_search_val(pos), hos.re_search_val(pos), days.re_search_val(pos));
			con_queue.str_print();
		}
		else {
			cout << "Wrong Input! " << endl;
		
		}
		
	}
	






























	void view_data() {
		cout << "*.Name :" << "patient1" << endl;
		cout << "*.Gender :" << " m" << endl;
		cout << "*.Age :" << "24" << endl;
		cout << "*.Nic : " << "123456789v" << endl;
		cout << "*.Address : " << "galle" << endl;
		cout << "*.Consultant : " << "VP" << endl;
		cout << "*.Doctor Name : " << "doc1" << endl;
		cout << "*.Hospital : " << " CEYMED" << endl;
		cout << "*.Day : " << "sunday" << endl;

	}
};