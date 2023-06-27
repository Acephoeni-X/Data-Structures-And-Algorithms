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

void printList(Node* head){
	if(head == NULL)
		return;
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

Node* del_element(Node* head, int x){
	if(head == NULL)
		return -1;
	if(head->next == NULL){
		Node *temp = head;
		delete head;
		return head->data;
	}
	while(head->next->data != x){
		head = head->next;
	}
	Node* temp = head->next;
	head->next = temp->next;
	int deletedElement = temp->data;
	delete temp;
	return deletedElement;
}

int main(){
	Node* head = new Node(10);
	head->next = new Node(20);
	printList(head); cout << endl;
	del_element(head, 10); cout << endl;
	printList(head);

	return 0;
}
