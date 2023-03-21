#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
	Node(int x){
		data = x;
		prev = NULL;
		next = NULL;
	}
};

Node* reverse(Node* head){
	if(head == NULL or head->next == NULL) return head;
	Node* temp = NULL;
	while(head != NULL){
		temp = head->prev;
		head->prev = head->next;
		head->next = temp;
		head = head->prev;
	}
	return temp->prev;
}

void print(Node* head){
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
}

int main(){
	Node* head = new Node(10);
	
	Node* el1 = new Node(20);
	el1->prev = head;
	head->next = el1;
	
	Node* el2 = new Node(30);
	el2->prev = el1;
	el1->next = el2;
	
	Node* el3 = new Node(40);
	el3->prev = el2;
	el2->next = el3;
	print(head);
	cout << endl;
	head = reverse(head);
	print(head);
	return 0;
}
