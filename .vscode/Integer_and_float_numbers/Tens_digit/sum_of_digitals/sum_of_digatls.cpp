#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int A = a-a/10*10;
  int B = a/10%10;
  int C = a/100;
  cout << A+B+C << endl;
}