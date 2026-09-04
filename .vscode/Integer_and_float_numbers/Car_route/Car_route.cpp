#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b;//300 350
  cin >> a >> b;
  int A = b/a;
  float B = b%a;
  if (B > 0)
  {
    B = 1; 
  }
  cout << A+B << endl;
}