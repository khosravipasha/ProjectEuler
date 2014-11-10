// Project Euler
// Problem 18

#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

const int N = 100;

int d[N][N];
int m[N][N];

ifstream fin = ifstream("18.txt");

const int inf = (int)(1 << 31);

int main(){
	int lines = 15;
	cout << inf << endl;
	for (int i = 0; i < lines; i++)
		for (int j = 0; j <= i; j++)
			fin >> m[i][j];
	d[0][0] = m[0][0];
	for (int i = 1; i < lines; i++)
		for (int j = 0; j <= i; j++){
			int path1 = inf;
			int path2 = inf;

			if (j>0)
				path1 = d[i - 1][j - 1] + m[i][j];
			if (j < i)
				path2 = d[i - 1][j] + m[i][j];

			d[i][j] = max(path1, path2);

		}

	int ans = inf;
	for (int i = 0; i < lines; i++)
		ans = max(ans, d[lines - 1][i]);
	cout << ans << endl;

	system("pause");

	return 0;
}
