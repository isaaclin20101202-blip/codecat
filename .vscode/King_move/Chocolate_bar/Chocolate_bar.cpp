#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a%c == 0 || c%a == 0 || b% c == 0 || c%b == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}