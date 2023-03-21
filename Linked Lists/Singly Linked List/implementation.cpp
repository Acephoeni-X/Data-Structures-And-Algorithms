#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

int main(){
	Node* l1 = new Node(10);
	Node* l2 = new Node(20);
	//(*l1).next = l2;
	// or
	l1->next = l2;
	cout << l1->data << ", " << l1->next << endl;
	cout << l2->data << ", " << l2->next << endl;
	// or
	Node *head = new Node(20);
	head->next = new Node(30);
	return 0;
}
