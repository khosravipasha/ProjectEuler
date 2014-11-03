// Project Euler
// Problem 15

#include<iostream>
using namespace std;


// The answer is C(40,20) = 40 choose 20
// We have to find [40!] / [(20!)*(20!)]


const int size = 21;
bool cancelled[size];

int main(){
	long long ans = 1;
	double check = 1.0;
	for (int top = 40; top > 20; top--){
		ans *= top;
		check *= top;
		for (int i = 1; i <= 20; i++)
			if (!cancelled[i] && ans % i == 0){
				ans /= i;
        			check /= i;
				cancelled[i] = true;
			}
	}

	cout << ans << endl;

	cout.precision(15);
	cout << check << endl;
	system("pause");
	return 0;
}
