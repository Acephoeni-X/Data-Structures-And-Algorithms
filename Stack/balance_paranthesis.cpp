#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool matching(char a, char b){
	return ((a == '{' and b == '}') or
			(a == '[' and b == ']') or
			(a == '(' and b == ')'));
}

int main(){
	stack<char> s;
	string str;
	cout << "Enter the paranthesis: ";
	cin >> str;
	
	for(int i=0; i<str.length(); i++){
		if(str[i] == '{' or str[i] == '[' or str[i] == '('){
			s.push(str[i]);
		}
		else if(matching(s.top(), str[i]))
			s.pop();
	}
	if(s.empty()){
		cout << "Balanced";
	}
	else
		cout << "Not balanced";
	return 0;
}
