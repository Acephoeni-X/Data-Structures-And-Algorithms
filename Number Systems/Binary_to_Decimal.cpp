#include<iostream>
#include<string>
#include<math.h>
using namespace std;

// This function will take logn time
int using_int(int n){
	int converted = 0;
	int i=0;
	while(n){
		int temp = (n%10) * pow(2, i++);
		converted = converted + temp;
		n /= 10;
	}
	return converted;
}

// This function will take n time
int convert(string n){
	reverse(n.begin(), n.end());	// TC: 0(n)
	int number=0;
	for(int i=0; i<n.length(); i++){
		if(n[i] == '1'){
			number += pow(2, i);
		}
	}
	return number;
}

int main(){
	string n;
	cin >> n;
	cout << "To Decimal : " << convert(n) << endl;
	int no = stoi(n);
	cout << "To Decimal : " << using_int(no) << endl;
	return 0;
}
