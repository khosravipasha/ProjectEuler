// Project Euler
// Problem 3

#include<iostream>
using namespace std;

long long num = 600851475143;
int factor = 1;

int main(){
	int i = 2;
	while (num > 1){
		if (num % i == 0){
			factor = i;
			num /= i;
		}
		i++;
	}
	cout << factor << endl;
	return 0;
}
