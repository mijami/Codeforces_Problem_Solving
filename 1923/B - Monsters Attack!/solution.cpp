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
        ll n,k;
        cin >> n >> k;
        vector<ll>vec;
 
 
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
 
        }
        vector<pair<ll, ll> >mp;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            mp.push_back( make_pair(abs(a),i));
        }
        sort(mp.begin(),mp.end());
 
 
        ll pos=0;
        ll rem=0;
        ll flag=0;
        for(int i=0; i<n; i++)
        {
 
            ll j=mp[i].second;
 
            ll l= min(rem,vec[j]);
 
            vec[j]=vec[j]- min(rem,vec[j]);
            rem=rem-l;
            //cout << vec[j] << " ";
            if(vec[j]>k)
            {
 
                ll u=(vec[j]/k);
                if(k*u< vec[j])
                {
                    u++;
                }
                //cout << k << " " << u << " ";
                rem+= (k*u) - vec[j];
                pos+=u;
            }
            else if(vec[j]>0)
            {
                rem+= k-vec[j];
                pos++;
            }
            //cout << pos << " " << rem << "
";
            if(pos > mp[i].first)
            {
                flag++;
                break;
            }
        }
        if(flag)
        {
            cout << "NO
";
        }
        else
        {
            cout  << "YES
" ;
        }
 
 
 
 
 
 
 
    }
 
 
 
    return 0;
}