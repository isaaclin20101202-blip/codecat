#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    int A = 3600 * (d-a) + 60 * (e-b) + (f-c);
    cout << A << endl;

}