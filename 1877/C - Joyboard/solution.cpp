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
 
        ll n,m,k;
        cin >> n >> m >> k;
 
        if( k>3)
        {
            cout << "0
";
        }
        else if(k==1)
        {
            cout << 1 << "
";
        }
        else if(k==2)
        {
            ll ans= min(m,n-1) + m/n ;
            cout << ans << "
";
        }
 
        else cout << m- min(m,n-1) - m/n << "
";
 
    }
 
 
    return 0;
}