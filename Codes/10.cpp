// Project Euler
// Problem 10

#include<iostream>
using namespace std;


const int N = 2*1000 * 100;
const int MAX = 2 * 1000 * 1000;
int p[N];
int pind = 0;

int main(){
	p[pind++] = 2;
	for (int i = 3; i < MAX; i += 2){
		bool prime = true;
		for (int j = 0; p[j] * p[j] <= i; j++){
			if (i % p[j] == 0){
				prime = false;
				break;
			}
		}
		if (prime)
			p[pind++] = i;
	}
	long long ans = 0;
	for (int i = 0; i < pind; i++)
		ans += p[i];

	cout << ans << endl;
	system("pause");

	return 0;
}
