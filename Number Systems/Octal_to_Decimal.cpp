#include<iostream>
#include<math.h>
using namespace std;

int convert(int n){
	int no = 0, i = 0;
	while(n){
		no += (n%10) * pow(8, i);
		i++;
		n /= 10;
	}
	return no;
}

int main(){
	int n;
	cin >> n;
	cout << convert(n);
	return 0;
}
