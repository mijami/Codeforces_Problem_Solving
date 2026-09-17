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
 
        vector<ll>vec,v;
        ll sum=0;
 
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
 
        }
        for(int i=0;i<m;i++)
        {
            ll a;
            cin >> a;
            v.pb(a);
        }
        sort(vec.begin(),vec.end());
        sort(v.rbegin(),v.rend());
 
        int cnt=0;
        while(1)
        {
            cnt++;
            if(cnt>k || (k%2==0 && cnt==7) )
            {
                break;
            }
            if(cnt>k || (k%2!=0 && cnt==6) )
            {
                break;
            }
            if(v[0]>vec[0] && cnt%2!=0)
            {
                swap(v[0],vec[0]);
                sort(vec.begin(),vec.end());
                sort(v.rbegin(),v.rend());
            }
            else if(v[m-1]<vec[n-1] && cnt%2==0)
            {
                swap(v[m-1],vec[n-1]);
                sort(vec.begin(),vec.end());
                sort(v.rbegin(),v.rend());
            }
 
        }
        for(int i=0;i<n;i++)
        {
            sum+=vec[i];
 
 
        }
        cout << sum << "
";
 
 
 
 
 
 
 
 
 
    }
 
 
    return 0;
}