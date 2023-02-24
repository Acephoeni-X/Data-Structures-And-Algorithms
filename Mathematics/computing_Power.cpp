#include<iostream>
using namespace std;

// This is the optimize approach. TC: O(logn)
// pow function in math uses this approach so its TC is also logn
int optimize(int x, int y){
	if(y == 0)
		return 1;
	if(y == 1)
		return x;
	if(y%2 != 0)
		return optimize(x, y-1)* x;
	return optimize(x, y/2)*optimize(x, y/2);
}

// This is the naive method. TC: O(n)
int naive(int x, int y){
	int power = 1;
	while(y--){
		power = power * x;
	}
	return power;
}

int main(){
	int x, y;
	cin >> x >> y;
	cout << "Power of " << x << " to the power " << y << " using naive method: " << naive(x, y) << endl;
	cout << "Power of " << x << " to the power " << y << " using optimize method: " << optimize(x, y) << endl;
	return 0;
}
