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
	if (head == NULL) return;
	Node* p = head;
	do{
		cout << p->data << ", ";
		p = p->next;
	}while(p!=head);
}

Node* deleteH(Node* head){
	if(head == NULL) return NULL;
	Node* p = head;
	do{
		p = p->next;
	}while(p->next!= head);
	Node* newH = head->next;
	p->next = newH;
	return newH;
}
Node* deleteK(Node* head, int k){
	//if(head == NULL) return NULL;
	//Node* p = head;
	//do{
	//	p = p->next;
	//}while(k-- && p!=head);
	//Node* deleteH = p->next;
	//p->next = deleteH->next;
	//delete deleteH;
	//return head;

	if(head == NULL) return NULL;
	if(k==1){
		head = deleteH(head);
		return head;
	}
	Node* p = head;
	for(int i=1; i<k-1; i++){
		//if(p == head) return NULL;
		p = p->next;
}
	Node* deleteH = p->next;
	p->next = p->next->next;
	delete deleteH;
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
	}while(p->next!= head);
	p->next = element;
	element->next = head;
	return element;
}

int main(){
	Node* head = NULL;
	int n, a;
	cout << endl << "Enter the size: " ;
	cin >> n;
	
	while(n--){
		cin >> a;
		head = insert(head, a);
	}
	printList(head); cout << endl;
	cout << endl << "Enter the kth: "; int k; cin >> k;
	head = deleteK(head, k);
	printList(head); cout << endl;
	return 0;
}
