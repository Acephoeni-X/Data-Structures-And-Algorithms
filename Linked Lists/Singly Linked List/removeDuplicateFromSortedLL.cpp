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
	while(head->next != NULL){
		head = head->next;
	}
	head->next = element;
	return tempH;
}

void print(Node* head){
	if (head == NULL) return;
	while(head != NULL){
		cout << head->data << ", ";
		head = head->next;
	}
}

Node* removeDup(Node* head){
	if (head == NULL) return NULL;
	Node* tempH = head;
	while(head->next != NULL){
		if(head->data == head->next->data){
			Node* temp =  head->next;
			head->next = head->next->next;
			delete temp;
		}
		else{
			head = head->next;
		}
	}
	return tempH;
}

int main(){
	Node* head = NULL;
	int n;
	cout << "Enter the size: ";
	cin >> n;
	cout << endl << "Enter the elements: ";
	while(n--){
		int a;
		cin >> a;
		head = insert(head, a);
	}
	print(head); cout << endl;
	head = removeDup(head);
	print(head); cout << endl;
	return 0;
}
