#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

struct MyStack
{
	Node *head = NULL;
	int cap = -1;
	void push(int x)
	{
		Node *element = new Node(x);
		if (head == NULL)
		{
			head = element;
			cap = 0;
		}
		else
		{
			element->next = head;
			head = element;
			cap++;
		}
	}
	int peek()
	{
		if (head != NULL)
			return head->data;
		else
		{
			return -1;
		}
	}
	void pop(){
		Node* res = head;
		head = head->next;
		//cout << res->data;
		cap--;
		delete res;
	}
	int size(){
		return cap+1;
	}
	bool isEmpty(){
		return (cap == -1);
	}
};

int main()
{
	MyStack s;
	s.push(10);
	s.push(20);
	cout << endl << "Size: " << s.size();
	cout << endl << "Current element: " << s.peek();
	s.pop();
	cout << endl << "Remaining elements after deletion: " << s.peek();
	cout << endl << "Size: " << s.size();
	cout << endl << "IsEmpty: " << s.isEmpty();
	return 0;
}
