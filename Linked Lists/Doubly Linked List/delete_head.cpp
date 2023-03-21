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

Node* insert(Node*head, int x){
	Node* element = new Node(x);
	Node* tempH = head;
	if(head == NULL) return element;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = element;
	element->prev = head;
	return tempH;
}

Node* deleteHead(Node*head){
	if(head == NULL) return NULL;
	if(head->next == NULL){
		delete head;
		return NULL;
	}
	Node* delH = head;
	head = head->next;
	head->prev = NULL;
	delete delH;
	return head;
}

void print(Node* head){
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
}

int main(){
	Node* head = NULL;
	int n;
	cout << "Enter size of linked List: "; cin >> n;
	cout << endl << "Enter elements: ";
	while(n--){
		int a;
		cin >> a;
		head = insert(head, a);
	}
	cout << endl << "Before: ";
	print(head);
	head = deleteHead(head);
	cout << endl << "After: ";
	print(head);
	return 0;
}
