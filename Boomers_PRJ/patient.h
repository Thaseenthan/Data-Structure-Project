#pragma once
#include <iostream>
using namespace std;
#include "consultant.h";
#include"LinkedList.h";
#include"Queue.h";

Queue_Array p_queue;
Queue_Array merge_que;

consultant_list c_llst;


class patient {
	string p_name;
	char p_gender;
	string p_nic;
	int p_age;
	string p_address;
	int p_num;
	int p_addno;


public:
	void P_getdata() {
		surgeon();
		cout << "Enter patient name : ";
		cin >> p_name;
		cout << "gender : ";
		cin >> p_gender;
		cout << "Enter patient's Age : ";
		cin >> p_age;
		cout << "Patient NIC number : ";
		cin >> p_nic;
		cout << "Enter patient Address : ";
		cin >> p_address;
		cout << "Enter patient Contact Number : ";
		cin >> p_num;
		
		cout << "" << endl;
		patientData(p_name, p_age, p_gender,p_nic,p_num, p_address);

		//p_queue.enQueue(p_name, p_age, p_gender, p_nic, p_num, p_address);
		
		cout << "----------- successfully booked Your appoinment -----------" << endl;


	}



	


	void surgeon() {
	cout << "\n--------------- consultant ------------------" << endl;
		
	cout << "\t1. VP" << endl;
	cout << "\t2. Neurologists" << endl;
	cout << "\t3. Psychiatrists" << endl;
	cout << "\t4. Pediatricians" << endl;

		

	c_llst.defaultConst();
	
	cout << endl;
	cout << "Select your Consulant :" ;
	int n;
	cin >> n;
	switch (n) {
	case 1:
		c_llst.search("VP");
		
		break;

	case 2:
		c_llst.search("Neurologists");
		break;

	case 3:
		c_llst.search("Psychiatrists");
		break;

	case 4:
		c_llst.search("Pediatricians");
		break;

	default:
		cout << "Wrong input" << endl;
		
	}
	}
		

	

	void patientData(string name, int age, char gender,string nic, int p_num, string add) {
		return p_queue.enQueue(name, age, gender, nic, p_num, add);
		p_queue.print();

	}

	


};

	





