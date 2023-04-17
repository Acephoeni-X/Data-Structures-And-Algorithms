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
	while(head != NULL){
		head = head->next;
	}
	p
}

int main(){
	return 0;
}
