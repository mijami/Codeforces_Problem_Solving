#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
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
        vector<pair<ll, ll> > mp;
        map<int,int>mpp;
        map<int,int>ind;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            mp.push_back( make_pair(a%k,i+1) );
            mpp[a%k]++;
            if(mpp[a%k]==1 && a%k!=0)
            {
                vec.pb(a%k);
 
            }
 
        }
 
        sort(vec.rbegin(),vec.rend());
        sort(mp.begin(),mp.end());
 
        for(int i=0;i<n;i++)
        {
            if(mp[i].first==0){
                cout <<  mp[i].second<< " ";
            }
            else break;
        }
        int x=0;
        for(int i=0;i<vec.size();i++)
        {
            x+= mpp[vec[i]];
            int l= n-x;
            for(int j=l;j<mpp[vec[i]]+l;j++)
            {
                cout <<  mp[j].second<< " ";
            }
 
        }
        cout << "
";
 
 
 
 
 
    }
 
 
 
 
 
    return 0;
}
 