#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
        int x;
        ll m;
        cin >> x >> m;
        int cnt=0;
        for(ll i=1; i<=min(2LL*x,m); i++)
        {
            ll k= (i^x);
            if (x!=i && ( (x % k) == 0 || (i%k) ==0 )  )
            {
                cnt++;
            }
 
        }
        cout << cnt << "
";
 
    }
 
 
    return 0;
}