#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >>d;
    if ((a+b)%2 == 0)
    {
        int e = 1;
    }
    else
    {
        int e = 0;
    }
    if((c+d)%2 == 0)
    {
        int f = 1;
    }
    else
    {
        int f = 0;
    }
    if(e == f)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
