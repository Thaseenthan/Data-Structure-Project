#pragma once
#include<cstddef>
#include<iostream>
#include<string>  
using namespace std;
#include"consultant.h"
#include<vector>
#include "Queue.h";

Queue_Array que;

class node {
public:
	string data;
	node* next;


	node(string val) {
		data = val;
		next = NULL;
	}
};



class single_linked_list {
private:
	node* head;
	node* tail;
	int size;

public:
	single_linked_list() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void insertFirst(string val) {
		node* temp = new node(val);
		if (head == NULL) {
			head = temp;
			tail = temp;
			size++;
		}
		else {
			temp->next = head;
			head = temp;
			size++;
		}
	}

	void insertLast(string val) {
		node* temp = new node(val);
		if (tail == NULL) {
			head = temp;
			tail = temp;
			size++;
		}
		else {
			tail->next = temp;
			tail = temp;
			size++;
		}
	}

	

	void insertAt(int pos, string val) {
		if (pos < 0 || pos > size) {
			cout << "Invalid position" << endl;
		}
		else if (pos == 0) {
			insertFirst(val);
		}
		else if (pos == size) {
			insertLast(val);
		}
		else {
			node* temp = new node(val);
			node* current = head;

			for (int i = 1; i < pos; i++) {
				current = current->next;
			}
			temp->next = current->next;
			current->next = temp;
			size++;
		}
	}

	void deleteFirst() {
		if (head == NULL) {
			cout << "List is Empty" << endl;
		}
		else {
			node* temp = head;
			if (size == 1) {
				delete temp;
				head = NULL;
				tail = NULL;
				size = 0;
			}
			else {
				head = head->next;
				delete temp;
				size--;

			}
		}
	}

	void deleteLast() {
		if (tail == NULL) {
			cout << "List is empty" << endl;
		}
		else {
			node* temp = tail;
			if (size == 1) {
				delete temp;
				head = NULL;
				tail = NULL;
				size = 0;
			}
			else {
				node* current = head;
				for (int i = 0; i < size - 2; i++) {
					current = current->next;
				}
				tail = current;
				tail->next = NULL;
				delete temp;
				size--;
			}
		}
	}


	void deleteAt(int pos) {
		if (pos < 0 || pos >= size) {
			cout << "Invalid position" << endl;
		}
		else if (pos == 0) {
			deleteFirst();
		}
		else if (pos == size - 1) {
			deleteLast();
		}
		else {
			node* current = head;
			for (int i = 0; i < pos - 1; i++) {
				current = current->next;
			}
			node* temp = current->next;
			current->next = temp->next;
			delete temp;
			size--;
		}
	}

	void resetAt(int pos, int val) {
		if (pos<0 || pos>size) {
			cout << "Invalid position" << endl;
		}
		else if (pos == 0) {
			head->data = val;
		}
		else if (pos == size - 1) {
			tail->data = val;
		}
		else {
			node* current = head->next;
			for (int i = 0; i < pos - 1; i++) {
				current = current->next;
			}
			current->data = val;
			string temp = current->data;

		}
	}


	void print() {
		node* current = head;
		while (current != NULL) {
			cout << current->data << "\t||\t ";
			current = current->next;
		}
		cout << endl;
	}

	


	//*****************************WORKING
	int* search(string val) {
	
		node* current = head;
		int pos=0;
		int* arr = new int[size];
		int i = 0;
		while (current->next!=NULL) {
			if (current->data == val) {
				arr[pos]=i;
				pos++;
			}		
			current = current->next;
			i++;
		}	

		return arr;
		


	}




	
	
	
	void search_val( int a) {
			node* current = head;
			int i = 0;
			while (current->next!=NULL) {
				if (i == a) {
					//que.str_enQueue(current->data);
					cout << current->data << " ";
				}
				current = current->next;
				i++;
			}
			return;
	}

	string re_search_val(int a) {
		node* current = head;
		int i = 0;
		while (current->next != NULL) {
			if (i == a) {
				//que.str_enQueue(current->data);
				//cout << current->data << " ";
				return current->data;
			}
			current = current->next;
			i++;
		}
		//return;
	}


	

	

	//void search(string val) {
	//	single_linked_list slst;
	//	node* Current = head;
	//	
	//	int i = 0;
	//	while (Current != NULL) {
	//		if (Current->data == val) {
	//			string str_i = to_string(i); // convert from int to string
	//			slst.insertLast(str_i);
	//			//slst.getData(str_i);
	//		}
	//		Current = Current->link;
	//		i++;
	//	}
	//	slst.print();
	//	//cout << i<<" ";
	//	//slst.getData(i);
	//}

	//void getData(int size) {

	//	//int	i_pos = stoi (pos); //convert string to int
	//	node* current = head->link;
	//	for (int i = 0; i < size ; i++) {
	//		current = current->link;
	//	}

	//	string temp = current->data;
	//	cout << temp << " ";
	//}
	//

};














