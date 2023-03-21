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

Node* del(Node* head){
	if (head == NULL)
		return NULL;
	Node* temp = head->next;
	delete head;
	return temp;
}

int main(){
	Node*head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	//Node* head = NULL;
	head = del(head);

	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
	return 0;
}
