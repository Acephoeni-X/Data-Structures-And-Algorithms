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

Node* insert(Node*head, int x){
	Node*element = new Node(x);
	if (head == NULL)
		return element;
	Node* start = head;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = element;
	return start;
}

int find_pos_recur(Node*head, int x, int pos){
	if(head == NULL)
		return -1;
	if(head->data == x)
		return pos;
	return find_pos_recur(head->next, x, pos+1);
}

int find_pos(Node* head, int find){
	int pos=1;
	while(head != NULL){
		if(head->data == find)
			return pos;
		pos++;
		head = head->next;
	}
	return -1;
}

int main(){
	int n;
	cin >> n;
	Node* head = NULL;
	while(n--){
		int a;
		cin >> a;
		head = insert(head, a);
	}

	cout << endl << "Enter the element you want to find position: ";
	int find;
	cin >> find;
	cout << endl << find_pos(head, find);
	cout << endl << find_pos_recur(head, find, 1);
	return 0;
}
