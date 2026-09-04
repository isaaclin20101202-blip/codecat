#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c;
  cin >> a >> b >> c;
  int A = (100*a+b)*c;
  cout << A/100 << " " << A%100 << endl;
}