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
	if (head == NULL) return element;
	Node* tempH = head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = element;
	return tempH;
}

void print(Node* head){
	if (head == NULL) return;
	while(head != NULL){
		cout << head->data << ",";
		head = head->next;
	}
}

Node* sortedI(Node* head, int x){
	Node* element = new Node(x);
	if(head == NULL) return element;
	Node* tempH = head;
	if (x<head->data) {
		element->next = head;
		return element;
	}
	while(head->next != NULL){
		if(head->next->data > element->data){
			Node* temp = head->next;
			head->next = element;
			element->next = temp;
			return tempH;
		}
		head = head->next;
	}
	head->next = element;
	return tempH;
}

int main(){
	Node* head = NULL;
	cout << "Enter the size: ";
	int a, n;
	cin >> n;
	cout << endl << "Enter the items: ";
	while(n--){
		cin >> a;
		head = insert(head, a);
	}
	cout << endl << "Before insertion: ";
	print(head);
	cout << endl << "Enter the element: "; int x; cin >> x;
	head = sortedI(head, x);
	cout << endl << "After insertion: ";
	print(head);
	return 0;
}
