#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define for(i,n) for(int i=0;i<n;i++)
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        if(a*2<=b)
        {
            cout << a << " " << a*2 << "
";
        }
        else
        {
            cout << -1 << " " << -1 << "
";
        }
 
    }
 
    checkmate
}