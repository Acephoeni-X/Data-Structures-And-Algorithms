#include<iostream>
#include<string>
using namespace std;

string convert(int n){
	string no = "";
	while(n){
		no = no + to_string(n%8);
		n/=8;
	}
	reverse(no.begin(), no.end());
	return no;
}

int main(){
	int n;
	cin >> n;
	cout << "Decimal to Octal of " << n << ": " << convert(n);
	return 0;
}
