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

Node* delHead(Node* head){
	if(head == NULL) return NULL;
	if(head->next == head){
		delete head;
		return NULL;
	}
	Node* p = head;
	do{
		p = p->next;
	}while(p->next!=head);
	Node* temp = head;
	p->next = head->next;
	head = head->next;
	delete temp;
	return head;
}

Node* insert(Node* head, int x){
	Node* element = new Node(x);
	if(head == NULL){
		element->next = element;
		return element;
	}
	Node* p = head;
	do{
		p = p->next;
	} while(p->next!=head);
	p->next = element;
	element->next = head;
	return element;
}
void printList(Node* head){
	if (head == NULL ) return ;
	Node* p = head;
	do{
		cout << p->data << ", ";
		p = p->next;
	}while(p!=head);
}

int main(){
	Node* head = NULL;
	cout << "Enter the size: " ;
	int n;
	cin >> n;
	cout << endl << "Enter the element: " ;
	int a;
	while(n--){
		cin >> a;
		head = insert(head, a);
	}
	cout << "Before: ";printList(head); cout << endl;
	head = delHead(head);
	cout << "After: ";printList(head);
	return 0;
}
