#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* prev;
	Node* next;
	Node(int x){
		data = x;
		prev = NULL;
		next = NULL;
	}
};

Node* insertLast(Node* head, int x){
	Node *temp = new Node(x);
	if(head == NULL)
		return temp;
	Node* tempHead = head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = temp;
	temp->prev = head;
	return tempHead;
}

void print(Node*head){
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
}

int main(){
	//Node* head = new Node(10);
	//
	//Node* el1 = new Node(20);
	//el1->prev = head;
	//head->next = el1;

	//Node* el2 = new Node(30);
	//el2->prev = el1;
	//el1->next = el2;
	Node* head = NULL;
	int n;
	cout << "Enter size: "; cin >> n;
	cout << endl << "Enter elements: ";
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		head = insertLast(head, a); 
	}
	print(head);
	return 0;
}
