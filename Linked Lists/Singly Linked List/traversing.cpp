#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(){
		next=NULL;
	}
	Node(int n){
		data = n;
		next = NULL;
	}
};

void traversal(Node *head){
	while(head != NULL){
		cout << head->data << ", ";
		head=head->next;
	}
}

void using_recur(Node *head){
	if(head == NULL){
		return;
	}
	cout << head->data << ", ";
	return using_recur(head->next);
}

int main(){
	Node* l1 = new Node(10);
	Node* l2 = new Node(20);
	Node* l3 = new Node(30);
	l1->next = l2;
	l2->next = l3;
	traversal(l1);
	cout << endl;
	using_recur(l1);
	return 0;
}
