#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >>b;
    int c=a;
    if(a < b)
    {
        for(int i = a;i <= b; i++)
            {
                cout << i << " " ;
            }
    }
    else
    {
        for(int i = a; i >= b; i--)
            {
                cout << i << " ";
            }
    }

}