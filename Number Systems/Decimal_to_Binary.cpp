#include<iostream>
#include<string>
using namespace std;

string using_bits(int n){
	string newNo;
	while(n){
		newNo = newNo + to_string(n&1);
		n = n>>1;
	}
	reverse(newNo.begin(), newNo.end());
	return newNo;
}

string convert(int n){
	string newNo;	
	while(n){
		newNo = newNo + to_string(n%2);
		n /=2;
	}
	reverse(newNo.begin(), newNo.end());
	return newNo;
}

int main(){
	int n;
	cin >> n;
	
	cout << "Binary of " << n << ": " << convert(n) << endl;
	cout << "Binary of (using bits) " << n << ": " << using_bits(n) << endl;

	return 0;
}
