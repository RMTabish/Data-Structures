//linked list implementation of queue

#include<iostream>
using namespace std;

//node class 
class node {
public:
	node* next;
	int data;


	//default contructor 
	node() {
	
	}

	//parametrized constructor
	node(int y) {
	
		data = y;
		next = NULL;
	}
};

//queue class 
class queue {

public:
	node* head;
	node* rear;

	//default contructor assigning both rear and front NULL
	queue() {
		head = NULL;
		rear = NULL;
	}

	//entering in the queque
	void inqueue(int value) {
		node* in = new node(value);
		//if queue is already empty 
		if (rear==NULL&& head == NULL) {
			
			rear = head = in;
		

		}
		//queue is empty
		//hence the rear will move one step ahead as entering is fron rear in queue
		
			//cout << rear->next;
			rear->next = in;
			rear = in;
		

	}
	void dequeue() {
		//stack already empty
		if (head == NULL) {
			cout << "stack already empty! " << endl;
		}
		//stack have elements 
		else {
			node* del = new  node;

			del=head;
			head = head->next;
			delete del;
		}

	}

	//printing queue
	void print() {
		//making node to traverse thro all the data of queue
		node* traverse = new node;
		traverse = head;

		while (traverse != NULL) {
			cout << traverse->data<<endl;
			traverse = traverse->next;
		}

	}


};

int main() {

	queue que;
	que.inqueue(1);
	que.inqueue(2);
	que.inqueue(4);
	que.inqueue(3);
	que.print();
	que.dequeue();

	que.print();





}
