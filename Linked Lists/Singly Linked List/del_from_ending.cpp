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
	if(head == NULL or head->next == NULL)
		return NULL;
	Node* temp = head;
	while(head->next->next != NULL){
		head = head->next;
	}
	delete head->next->next;
	head->next = NULL;
	return temp;
}

int main(){
	//Node* head = NULL;
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head = del(head);
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
	return 0;
}
