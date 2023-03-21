#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* prev;
	Node* next;
	Node(int x){
		data = x;
		prev = NULL;
		next = NULL;
	}
};

Node* insertBeg(Node*head, int x){
	Node* temp = new Node(x);
	if(head == NULL)
		return temp;
	temp->next = head;
	head->prev = temp;
	return temp;
}

int main(){
	Node* head = NULL;
	int n;
	cout << "Enter size: " ; cin >> n;
	cout << endl << "Enter elements: ";
	while(n--){
		int a;
		cin >> a;
		head = insertBeg(head, a);
	}
	cout << endl << "Elements are: ";
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
	return 0;
}
