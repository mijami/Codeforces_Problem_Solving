#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define pb push_back
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll>vec,v;
        map<ll,int>mp;
        ll mx=-1;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
 
            vec.pb(a);
 
        }
        sort(vec.begin(),vec.end());
        ll cnt=0;
        ll mins=0;
        int siz=vec.size();
        for(int i=0; i<siz; i++)
        {
            vec[i]-=mins;
            if(vec[i]>1)
            {
                cnt+=vec[i]-1;
                vec[i]=vec[i]+1-vec[i];
            }
            if(vec[i]==1)
            {
                vec[i]=vec[i]-1;
                mins+=1;
            }
        }
 
        cout << cnt << "
";
    }
    return 0;
}