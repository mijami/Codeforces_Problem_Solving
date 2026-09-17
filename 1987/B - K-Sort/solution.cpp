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
        vector<ll>vec,v,ans;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        v=vec;
        sort(v.begin(),v.end());
        if(v==vec)
        {
            cout << "0
";
            continue;
        }
        int cnt=0;
        int flag=0;
        ll mx=-999;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,vec[i]);
            if(vec[i]<mx)
            {
                ans.pb(mx-vec[i]);
                //cout << mx-vec[i] << " ";
            }
 
        }
        //cout << "
";
        sort(ans.begin(),ans.end());
        int sz=ans.size();
        ll m=0;
        ll cm=0;
        for(int i=0;i<ans.size();i++)
        {
 
            m+= (sz+1-i) * (ans[i]-cm);
 
            cm+=(ans[i]-cm);
        }
        cout << m << "
";
 
    }
 
 
    return 0;
}