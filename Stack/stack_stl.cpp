#include<iostream>
#include<stack>

using namespace std;

int main(){
	cout << endl;
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.top() << endl;
	s.pop();
	cout << s.top();
	stack<string> s1;
	s1.push("Rishi");
	cout << endl <<s1.top();
	s1.pop();
	while(s1.empty() == false){
		cout << endl <<s1.top();
	}
	return 0;
}
