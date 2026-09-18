#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if((a-c)*(a-c) + (b-d)*(b-d) ==5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}