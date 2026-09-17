#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
#define newline cout << "
";
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k,x;
        cin >> n >> k >> x;
 
        ll a=n-k;
        if( ((k*(k+1))/2) > x )
        {
            cout << "NO
";
        }
        else if( ((n*(n+1))/2) -  ((a*(a+1))/2) >=x && ((k*(k+1))/2) <= x  )
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
 
 
 
 
 
 
    }
 
 
    return 0;
}