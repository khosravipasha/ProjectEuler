// Project Euler
// Problem 7

#include<iostream>

using namespace std;

const int size = 100*1000;
int p[size];
int pind = 0;

const int N = 10001;

int main(){
	p[pind++] = 2;
	for (int i = 3;; i += 2){
		bool ok = true;
		for (int j = 0; j < pind && p[j] * p[j] <= i; j++)
			if (i % p[j] == 0){
				ok = false;
				break;
			}

		if (ok)
			p[pind++] = i;
		if (pind == N)
			break;

	}
	
	cout << p[N - 1] << endl;
	
	system("pause");
	return 0;
}
