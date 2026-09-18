
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d;
    if((a == c || b == d) || (a+b) == (c+d) || (a-b) == (c-d))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
