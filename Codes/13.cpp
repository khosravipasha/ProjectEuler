// Project Euler9
// Problem 13

// TODO: Find the better and more complete bignum I wrote before and use it

#include<fstream>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
const int digits = 100;

struct Bignum{
	int a[digits];
	int n = 1;

	void reset(){
		for (int i = 0; i < digits; i++)
			a[i] = 0;
	}
	Bignum(){
		reset();
	}
	Bignum(int x){
		reset();
		a[0] = x;
		normalize();
	}
	Bignum(string x){
		reset();
		for (int i = x.size() - 1; i >= 0; i--){
			a[x.size() - i - 1] = x[i] - '0';
		}
		n = x.size();
	}

	void normalize(){
		for (int i = 0; i < n; i++){
			if (a[i]>9){
				a[i + 1] += a[i] / 10;
				a[i] %= 10;
			}
		}
		while (a[n] > 0){
			a[n + 1] = a[n] /10;
			a[n] %= 10;
			n++;
		}
	}
	Bignum operator + (Bignum B){
		Bignum ans = Bignum();
		int c = max(n, B.n);
		ans.n = c;
		for (int i = 0; i < c; i++)
			ans.a[i] = a[i] + B.a[i];

		ans.normalize();
		return ans;
	}

	int operator [] (int N){
		return a[N];
	}
	string print(){
		string ans = "";
		for (int i = n - 1; i >= 0; i--)
			ans.push_back('0' + (char)a[i]);
		return ans;
	}
};

ifstream fin = ifstream("13.txt");

int main(){
	string cur;
	Bignum ans = Bignum(0);
	while (fin >> cur)
	{
		Bignum cc = Bignum(cur);
		ans = ans + cc;
	}
	for (int i = 1; i <= 10; i++)
		cout << ans[ans.n - i];
	cout << endl;
	system("pause");
	return 0;
}
