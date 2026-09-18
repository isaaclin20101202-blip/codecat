#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(((a + b)%2 == 0 &&(c+d)%2 == 0)||(a+b)%2!= 0 && (c+d)%2!=0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}