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

Node* insert(Node* head, int x){
	Node* element = new Node(x);
	if(head == NULL){
		element->next = element;
		return element;
	}
	Node* p = head;
	do{
		p = p->next;
	}while(p->next != head);
	p->next = element;
	element->next = head;
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
	int n, a;
	cout << "Enter size: ";
	cin >> n;
	cout << endl << "Enter the elements: ";
	while(n--){
		cin >> a;
		head = insert(head, a);
	}
	printList(head);
	return 0;
}
