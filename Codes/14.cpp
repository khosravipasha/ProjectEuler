// Project Euler
// Problem 14

#include<iostream>

using namespace std;

int collatz1(long long x){
	int c = 0;
	while (x != 1){
		if (x % 2 == 0)
			x /= 2;
		else
			x = x * 3 + 1;
		c++;
	}
	return c;
}

const int mx = 1000 * 1000;
int main(){
	int ans = 0;
	int num = 0;
	for (int i = 1; i < mx; i++){
		int cur = collatz1(i);
		if (cur > ans){
			ans = cur;
			num = i;
		}
//		if (i % 100000 == 0)
//			cout << "i : " << i << endl;
	}
	cout << num << endl;
	system("pause");
	return 0;
}

