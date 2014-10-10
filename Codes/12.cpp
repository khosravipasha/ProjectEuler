// Project Euler
// Problem 12

#include<iostream>
using namespace std;

const int N = 1000 * 100;
int p[N];
int pind = 0;


// Find the first N primes
void primes(){
	p[pind++] = 2;
	for (int i = 3; pind < N; i += 2){
		bool prime = true;
		for (int j = 0; p[j] * p[j] <= i;j++)
			if (i %p[j] == 0){
				prime = false;
				break;
			}
		if (prime)
			p[pind++] = i;
	}
}

// Count the number of Divisors for x
int Divisors(int x){
	int ans = 1;
	for (int j = 0; p[j] * p[j] <= x; j++){
		if (x % p[j] == 0){
			int cur = 0;
			while (x % p[j] == 0){
				x /= p[j];
				cur++;
			}
			ans *= cur + 1;
		}
	}
	if (x > 1)
		ans *= 2;
	return ans;
}



int main(){
	primes();

	int tri = 0;
	for (int i = 1;; i++){
		// i-th triangle number
		tri += i;
		if (Divisors(tri) > 500)
			break;
	}
	cout << tri << endl;
	system("pause");

	return 0;
}
