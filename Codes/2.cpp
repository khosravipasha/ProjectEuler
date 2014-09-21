// Project Euler Solution
// Problem 2

#include<iostream>
using namespace std;

const int mx = 4 * 1000 * 1000;
int sum = 0;

int main(){
	int a = 1;  // n-1 th term of the sequence
	int b = 2;  // n-th term of the sequence

	sum = b; // We only need sum of even valued terms

	// Fib(n) = Fib(n-1) + Fib(n-2)
	while (true){
		b = b + a;   // b <- Fib(n+1)
		a = b - a;   // a <- Fib(n)
		if (b >= mx)
			break;
		if (b % 2 == 0)
			sum += b;
	}



	cout << sum << endl;
	return 0;
}
