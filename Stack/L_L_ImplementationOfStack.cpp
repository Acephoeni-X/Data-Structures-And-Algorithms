#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node* insert(Node* head, int a){
	Node* element = new Node(a);
	if(head == NULL)
		return element;
	Node* temp = head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = element;
	return temp;
}
void print(Node* head){
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
}

struct Stack{
	Node* head = NULL;
	void push(int x){
		Node* element = new Node(x);
		if(head == NULL){
			head = element;
		}else{
			element->next = head;
			head = element;
		}
	}
	void print(){
		//while(head != NULL){
		//	cout << head->data << ",";
		//	head = head->next;
		//}
		cout << head->data;
	}
	void pop(){
		if(head != NULL){
			
		Node* temp = head;
		head = head->next;
		cout << head->data;
		delete temp;
		}
	}
};

int main(){
	//Node* head = NULL;
	//cout << "Enter the size: ";
	//int n;
	//cin >> n;
	//cout << "Enter elements: ";
	//while(n--){
	//	int a;
	//	cin >> a;
	//	head = insert(head, a);
	//}
	//print(head);	
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.print();
	s.pop();
	s.print();
	s.pop();
	s.print();
	s.pop();
	s.print();
	return 0;
}
