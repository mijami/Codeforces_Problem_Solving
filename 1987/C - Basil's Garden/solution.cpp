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
        int n,k;
        cin >> n ;
        vector<ll>vec;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        ll cnt=0;
        ll mx=-9999;
        for(int i=0;i<n;i++)
        {
            if(vec[i]+i>mx)
            {
                mx=vec[i]+i;
            }
 
        }
 
 
        cout << mx << "
";
 
 
 
 
 
    }
 
 
    return 0;
}