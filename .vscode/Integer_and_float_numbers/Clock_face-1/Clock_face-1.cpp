#include<bits/stdc++.h>
using namespace std;

int main()
{
  float a,b,c;
  cin >> a >> b >> c;
  float A = 3600*a+60*b+c;
  float B = A/120;
  cout << B << endl;
}