#include<iostream>
#include<string>
using namespace std;

string binary(int n){
	string no;
	while(n){
		no = no + to_string(n%2);
		n /= 2;
	}
	if(no.length()<2)
		no = no + '0';
	if(no.length()<3)
		no = no + '0';
	reverse(no.begin(), no.end());
	return no;
}

string convert(int n){
	string no;
	while(n){
		no = binary(n%10) + no;
		n/=10;
	}
	return no;
}

int main(){
	int n;
	cin >> n;
	cout << "Octal to Binary: " << convert(n);
	return 0;
}
