#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        if(n<m) swap(n,m);
        ll x= n+m+(m-2);
        if(n==1 && m==1)
        {
            x=0;
        }
        cout << x << "
";
    }
 
    checkmate
}