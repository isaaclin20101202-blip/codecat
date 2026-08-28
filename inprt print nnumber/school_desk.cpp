#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >>c;
    int A = a/2 + b/2 +c/2 + a%2 +b%2 + c%2;
    cout << A << endl;
}