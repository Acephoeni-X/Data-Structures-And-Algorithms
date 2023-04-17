#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
	Node(int x){
		data = x;
		next = NULL;
		prev = NULL;
	}
};

Node* insertLast(Node* head, int x){
	Node* element = new Node(x);
	if(head == NULL) return element;
	Node* tempH = head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = element;
	element->prev = head;
	return tempH;
}

void print(Node* head){
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
}

int main(){
	Node* head = NULL;
	int n, a;
	cout << "Enter size: "; cin >> n;
	cout << endl << "Enter the element: ";
	while(n--){
		cin >> a;
		head = insertLast(head, a);
	}
	print(head);
	return 0;
}
