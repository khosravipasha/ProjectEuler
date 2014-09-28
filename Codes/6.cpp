// Project Euler 
// Problem 6

#include<iostream>
using namespace std;

const int n = 100;
int main(){
	// sigma(i^2) - sigma(i)^2

	long long a = 0;
	for (int i = 1; i <= n; i++)
		a += i;
	a *= a;
	long long b = 0;
	for (int i = 1; i <= n; i++)
		b += i*i;
	cout << a - b << endl;

	system("pause");
	return 0;
}
