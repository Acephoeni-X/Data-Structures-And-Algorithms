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
	if(head == NULL) return element;
	Node* tempH = head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = element;
	return tempH;
}

void printList(Node* head){
	if (head == NULL) return ;
	while(head!= NULL){
		cout << head->data << ",";
		head = head->next;
	}
}

int efficient_middle(Node*head){
	Node* fast = head;
	Node* slow = head;
	while(fast != NULL and fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow->data;	
}

int main(){
	int n;
	Node* head = NULL;
	cout << "Enter the size: ";
	cin >> n;
	cout << endl << "Enter the element: ";
	while(n--){
		int a;
		cin >> a;
		head = insert(head, a);
	}
	cout << endl << "Middle element of List is: " << efficient_middle(head);
	return 0;
}
