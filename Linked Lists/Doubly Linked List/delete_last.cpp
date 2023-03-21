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
	if(head == NULL)
		return element;
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
Node* delLast(Node*head){
	if(head == NULL) return NULL;
	if(head->next == NULL){
		delete head;
		return NULL;
	}
	Node* tempH = head;	
	while(head->next != NULL){
		head = head->next;
	}
	head->prev->next = NULL;
	delete head;
	return tempH;
}
int main(){
	Node* head = NULL;
	int n;
	cout << "Enter size: "; cin >> n;
	cout << endl << "Enter element: ";
	while(n--){
		int a;
		cin >> a;
		head = insert(head, a);
	}
	cout << endl << "Before delete: "; print(head);
	head = delLast(head);
	cout << endl << "After delete: "; print(head);
	return 0;
}
