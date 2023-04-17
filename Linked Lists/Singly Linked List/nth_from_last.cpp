#include<iostream>
using namespace std;


struct Node{
	int data;
	Node* next;
	Node(int x){
		data = x;
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
	return tempH;
}

void print(Node* head){
	if(head == NULL)
		return;
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
}

int findLen(Node* head){
	int len = 0;
	while(head != NULL){
		head = head->next;
		++len;
	}
	return len;
}

int method1(Node* head, int pos){
	int len = findLen(head);
	if(pos>len)
		return -1;
	for(int i=1; i<len-pos+1; i++){
		head = head->next;
	}
	return head->data;
}

int method2(Node* head, int n){
	if(head == NULL) return -1;
	Node* first = head;
	for(int i=0; i<n; i++){
		if(first == NULL) return -1;
		first = first->next;
	}
	Node* second = head;
	while(first != NULL){
		first = first->next;
		second = second->next;
	}
	return second->data;
}


int main(){
	Node* head = NULL;
	cout << "Enter the size of LL: ";
	int n, a;
	cin >> n;
	cout << endl << "Enter the elements: ";
	while(n--){
		cin >> a;
		head = insert(head, a);
	}
	cout << endl << "Enter the pos: ";
	int pos;
	cin >> pos;
	cout << method1(head, pos);
	cout << endl << method2(head, pos);
	return 0;
}
