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
	Node* element  = new Node(x);
	if(head == NULL ) return element;
	Node* tempH =  head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = element;
	return tempH;
}

Node* reverse(Node* head ){
	if(head == NULL) return NULL;
	Node* next = NULL; Node* prev = NULL;
	Node* curr = head;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

void print(Node* head){
	if(head == NULL) return;
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
}

int main(){
	Node* head = NULL;
	cout << "Enter the size of LL: ";
	int n;
	cin >> n;
	cout << endl<< "Enter the element: ";
	while(n--){
		int a; cin >> a;
		head = insert(head, a); 
	}
	head = reverse(head);
	print(head);
	return 0;
}
