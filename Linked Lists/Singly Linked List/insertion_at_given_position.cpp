#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node* insert(Node*head, int pos, int x){
	Node* temp = new Node(x);
	if(pos == 1){
		temp->next = head;
		return temp;
	}
	pos = pos-2;
	Node* start = head;
	while(pos--){
		head = head->next;
		if (head == NULL)
			return NULL;
	}
	temp->next = head->next;
	head->next = temp;
	return start;
}


int main(){
	int pos, x;
	cout << "Enter position and data: ";
	cin >> pos >> x;
	cout << endl;
	Node*head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);

	head = insert(head, pos, x);

	while(head!=NULL){
		cout << head->data << ", ";
		head = head->next;
	}

	return 0;
}
