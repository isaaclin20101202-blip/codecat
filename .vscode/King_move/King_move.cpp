#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a>> b>> c >>d;
    if((c == a+1 || c == a-1 || c == a) && (d == b+1 || d == b-1 || d == b))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
