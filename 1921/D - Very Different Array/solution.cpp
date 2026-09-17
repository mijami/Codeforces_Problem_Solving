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
        ll n,m;
        cin >>n >>m;
        vector<ll>vec,v;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
 
        for(int i=0; i<m; i++)
        {
            ll a;
            cin >> a;
            v.pb(a);
        }
        sort(vec.begin(),vec.end());
        sort(v.rbegin(),v.rend());
        int j=m-n;
        int k=0;
        ll sum=0;
        int dif=0;
        int l=0;
        for(int i=0; i<n; i++)
        {
 
 
            dif=abs(vec[i]-v[l]);
 
 
            if(dif < abs(vec[i]-v[i+j]) && k==0)
            {
                dif=abs(vec[i]-v[i+j]);
                k++;
                l=i+j;
            }
            l++;
            sum+=dif;
        }
        cout << sum << "
";
 
    }
 
 
 
    return 0;
}