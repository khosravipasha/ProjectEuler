// Project Euler
// Problem 5

#include<iostream>
using namespace std;

const int n = 20;

int main(){
	long long ans = 1;

	for (int i = 2; i <= n; i++){
		long long cur = 1;
		while (cur <= n)
			cur *= (long long)i;
		cur /= i;
		if (ans % cur != 0)
			ans *= cur;
		// cout << "~ " << ans << endl;
	}
	cout << ans << endl;

	system("pause");

	return 0;
}
