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
// Method 1 (For Loop)
void printList(Node* head){
	if(head == NULL) return;
	cout << head->data << ", ";
	for(Node* el = head->next; el!=head; el = el->next){
		cout << el->data <<", ";
	}
}
// Method 2 (Do While)
void printList1(Node* head){
	if(head == NULL) return;
	Node* el = head;
	do{
		cout << el->data << ", ";
		el = el->next;
	}while(el!=head);
}
int main(){
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = head;
	printList(head); cout << endl;
	printList1(head);
	return 0;
}
