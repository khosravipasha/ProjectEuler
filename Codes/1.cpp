// Project Euler Solution for
// Problem 1

#include<iostream>
using namespace std;

const int n = 1000;
int sum = 0;

int main(){

  for(int i=1;i<n;i++)
    if(i%3==0 || i%5==0)
      sum += i;
      
  cout << sum << endl;
  return 0;
}
