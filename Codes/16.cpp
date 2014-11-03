// Project Euler
// Problem 16

#include<iostream>
using namespace std;

const int size = 500;

struct Bignum{
	int d[size];
	int ind = 1;

	Bignum(int x){
		reset();
		d[0] = x;
		normalize();
	}
	void reset(){
		for (int i = 0; i < size; i++)
			d[i] = 0;
	}
	void normalize(){
		for (int i = 0; i < ind; i++){
			d[i + 1] += d[i] / 10;
			d[i] %= 10;
		}
		while (d[ind] > 0){
			d[ind + 1] = d[ind] / 10;
			d[ind] %= 10;
			ind++;
		}
	}
	Bignum operator* (int x){
		Bignum ans = Bignum(0);
		ans.ind = ind;
		for (int i = 0; i < ind; i++)
			ans.d[i] = x * d[i];
		ans.normalize();
		return ans;
	}
	int operator !(){
		int sum = 0;
		for (int i = 0; i < ind; i++){
			sum += d[i];
		}
		return sum;
	}
	friend ostream &operator << (ostream & out, Bignum &x){
		for (int i = x.ind - 1; i >= 0; i--)
			out << x.d[i];
		return out;
	}
};


int main(){
	Bignum num = Bignum(1);
	
	for (int i = 0; i < 1000; i++)
		num = num * 2;
	cout << !num << endl;

	system("pause");
	return 0;
}
