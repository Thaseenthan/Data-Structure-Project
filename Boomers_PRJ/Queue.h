
#pragma once
#include <iostream>

using namespace std;

class Queue_Array {
public:
	int capacity;
	int size; // number of elements in array
	int front;
	int rear;
	int* P_age;
	string* P_name;
	char* gender;
	string* nic;
	int* p_num;
	string* add;

	//int* con;
	string* con;
	string* con_name;
	string* con_hos;
	string* con_day;

	Queue_Array() {
		capacity = 6;
		P_name = new string[capacity];
		P_age = new int[capacity];
		gender = new char[capacity];
		nic = new string[capacity];
		p_num = new int[capacity];
		add = new string[capacity];

		con = new string[capacity];
		con_name = new string[capacity];
		con_hos = new string[capacity];
		con_day = new string[capacity];
		size = 0;
		front = -1;
		rear = 0;
	}

	void enQueue(string name, int age, char gend, string NIC, int p_no, string ad) {
		if (size >= capacity) {
			cout << "Queue is full" << endl;
		}


		else {
			P_name[rear] = name;
			P_age[rear] = age;
			gender[rear] = gend;
			nic[rear] = NIC;
			p_num[rear] = p_no;
			add[rear] = ad;

			rear = (rear + 1) % capacity;
			if (front == -1) { front = 0; }
			size++;
		}

	}


	void str_enQueue(string cons, string name, string hos, string day) {
		if (size >= capacity) {
			cout << "Queue is full" << endl;
		}


		else {
			con[rear] = cons;
			con_name[rear] = name;
			con_hos[rear] = hos;
			con_day[rear] = day;

			rear = (rear + 1) % capacity;
			if (front == -1) { front = 0; }
			size++;
		}

	}


	int deQueue() {
		if (size == 0) {
			cout << "Queue is empty" << endl;
			return INT_MIN;
		}
		else {
			//int temp;
			//temp = data[front];
			front = (front + 1) % capacity;
			size--;
			//return temp;
		}
	}

	void print() {

		
		int index = front;
		for (int i = 0; i < size; i++) {
			cout << "Name : " << P_name[index] << endl;
			cout<<"Age : " << P_age[index] << endl;
			cout << "Gender : " << gender[index] << endl;
			cout << "NIC : " << nic[index] << endl;
			cout << "Contact NO  : " << p_num[index] << endl;
			cout << "Address : " << add[index] << endl;
			index = (index + 1) % capacity;
		}
		cout << endl;
	}

	void str_print() {


		int index = front;
		for (int i = 0; i < size; i++) {

			cout << "Here is your selected consultant.\n" << "\t " << endl;
			cout << "* Consultant  : "<<  con[index ] << endl;
			cout  << "* Consultant Name : "<<con_name[index] << endl;
			cout << "* Hospital : "<<con_hos[index] << endl;
			cout <<"* Day : " <<con_day[index] << endl;
			index = (index + 1) % capacity;
		}
		cout << endl;
	}
};