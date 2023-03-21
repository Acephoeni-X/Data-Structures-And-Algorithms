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


void traversal(Node *head){
	while(head != NULL){
		cout << head->data << ", ";
		head=head->next;
	}
}

Node* insertBeg(Node* head, int x){
	Node* element = new Node(x);
	element->next = head;
	head = element;
	return head;
}

int main(){
	int n;
	cout << "Enter size of Linked List: ";
	cin >> n;
	Node* head = NULL;
	cout << endl << "Enter elements: ";
	for(int i=0; i<n; i++){
		int temp;		
		cin >> temp;
		head = insertBeg(head, temp);
	}
	int x;
	cout << endl << "Enter element to insert at beginning: ";
	cin >> x;
	head = insertBeg(head, x);
	traversal(head);
	return 0;
}
