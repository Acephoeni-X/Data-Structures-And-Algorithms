#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* prev;
	Node* next;
	Node(int x){
		prev = NULL;
		next = NULL;
		data = x;
	}
};

Node* insert(Node* head, int x){
	Node* element = new Node(x);
	if(head == NULL){
		element->next = element;
		element->prev = element;
		return element;
	}
	// To do from here
	element->next = head;
	element->prev = head->prev;
	head->prev->next = element;
	head->prev = element;
	return head;
}

void printList(Node* head){
	if(head == NULL) return;
	Node* p = head;
	do{
		cout << p->data << ", ";
		p = p->next;
	}while(p!=head);
}

int main(){
	Node* head = NULL;
	cout << "Enter size of circular doubly ll: ";
	int n, a;
	cin >> n;
	cout << endl << "Enter the elements: ";
	while(n--){
		cin >> a;
		head = insert(head, a);
	}
	printList(head);
	return 0;
}
