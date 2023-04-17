#include<iostream>
using namespace std;

struct MyStack{
	int *arr;
	int cap;
	int curr;
	MyStack(int n){
		cap = n;
		arr = new int[cap];
		curr = -1;
	}
	void push(int x){
		// condition for overflow
		if(curr>cap-1){
			return;
		}
		arr[++curr] = x;
	}
	int pop(){
		if(curr == -1) return -1;
		int temp = arr[curr];
		curr--;
		return temp;
	}
	int peek(){
		if(curr == -1) return -1;
		return arr[curr];
	}
	int size(){
		return curr+1;
	}
	bool isEmpty(){
		return (curr == -1);
	}
};

int main(){
	MyStack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	cout << s.peek(); // 70 
	s.push(100);
	cout << s.peek(); // 70 because of overflow 
	s.pop();
	cout << endl << s.peek();
	return 0;
}
