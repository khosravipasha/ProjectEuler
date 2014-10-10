// Project Euler
// Problem 9

#include<iostream>
using namespace std;

int main(){
	/*
	 a^2 + b^2 = c^2
	 a + b + c = 1000
	*/

	// We have to check all the possibilities,
	// but the trick is if we have a and b then we get c = 1000 - a - b

	for (int a = 1; a < 1000; a++){
		for (int b = a + 1; b < 1000; b++){
			int c = 1000 - a - b;
			if (a*a + b*b == c*c){
				cout << a << " " << b << " " << c << endl;
				cout << "The answer is : " << a*b*c << endl;
			}
		}
	}
	system("pause");
	return 0;
}
