// Euler Project
// Problem 4
#include <iostream>
using namespace std;

bool isPalindrome(int x){
	int tmp = x;
	int rev = 0;
	while (tmp > 0){
		int cur = tmp % 10;
		rev *= 10;
		rev += cur;
		tmp /= 10;
	}
	return (x == rev);
}


int main(){
	int ans = 0;
	for (int i = 100; i < 1000; i++)
		for (int j = 100; j < 1000; j++)
			if (i*j>ans && isPalindrome(i*j))
				ans = i*j;
	cout << ans << endl;
	system("pause");
	return 0;
}
