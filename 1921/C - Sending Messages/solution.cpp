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
        ll n,f,a,b;
        cin >> n >> f >> a >> b;
        vector<ll>vec;
        vec.pb(0);
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+= min((vec[i]-vec[i-1])*a,b);
        }
        if(sum<f)
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