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

Node* insertion(Node* head, int x){
	Node* temp = new Node(x);
	if(head == NULL)
		return temp;
	Node *curr = head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = temp;
	return curr;
}

int main(){
	Node* head = NULL;
	head = insertion(head, 10);
	head = insertion(head, 20);
	head = insertion(head, 30);
	while(head != NULL){
		cout << head->data<< ", ";
		head = head->next;
	}
	return 0;
}
