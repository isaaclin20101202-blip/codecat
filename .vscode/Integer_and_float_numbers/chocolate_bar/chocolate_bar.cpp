#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((c%b == 0 || c%a ==0) && a*b >= c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}