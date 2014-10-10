// Project Euler
// Problem 11

#include<iostream>
#include<fstream>

using namespace std;
const int n = 20;
int grid[n][n];

// The File containing the Grid
ifstream fin("11.txt");

int main(){
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			fin >> grid[i][j];
			
	int ans = 0; 
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i + 4 < n && j + 4 < n){
				// Vertical
				int vert = 1;
				for (int k = 0; k < 4; k++)
					vert *= grid[i + k][j];
				if (vert > ans)
					ans = vert;

				// Horizontal
				int horz = 1;
				for (int k = 0; k < 4; k++)
					horz *= grid[i][j + k];
				if (horz > ans)
					ans = horz;

				// Diagonally LD
				int diag = 1;
				for (int k = 0; k < 4; k++)
					diag *= grid[i + k][j + k];
				if (diag > ans)
					ans = diag;
			}
			if (4 < i && j + 4 < n){
				// Diagonally LD
				int diag2 = 1;
				for (int k = 0; k < 4; k++)
					diag2 *= grid[i - k][j + k];
				if (diag2 > ans)
					ans = diag2;
			}

		}
	}
	cout << ans << endl;
	system("pause");
	return 0;
}
