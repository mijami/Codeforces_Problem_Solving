#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
 
    int xr[300001];
    for(int i=1; i<=300001; i++)
    {
        xr[i] = (xr[i-1]^i);
    }
 
    int t, a, b;
 
    cin >> t;
 
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        int k = xr[a-1];
 
        if(k==b)
        {
            cout << a << "
";
        }
        else if((b^k)!= a)
        {
            cout << a+1 << "
";
        }
        else
        {
            cout << a+2 << "
";
        }
    }
    return 0;
}