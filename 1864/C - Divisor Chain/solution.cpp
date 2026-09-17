#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
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
        ll n;
        cin >> n;
 
        vector<ll>vec;
        map<ll,int>mp;
        ll k=1;
 
        for(int i=0; i<n; i++)
        {
            if(k<=n && mp[k]==0)
            {
                vec.pb(k);
 
                mp[k]++;
                if(k==n)
                {
                    break;
                }
            }
            else
            {
                //cout<< "HERE " << k << " 
";
                k=k/2;
                int y=k/2;
                while(k<=n && y>0)
                {
                    if(k+y <=n && mp[k+y]==0)
                    {
                        vec.pb(k+y);
                        mp[k+y]++;
                        k=k+y;
                    }
                    else{
                        y=y/2;
                    }
                }
                break;
            }
            k=k*2;
        }
        if(mp[n]==0)
        {
            vec.pb(n);
            mp[n]++;
        }
        int si=vec.size();
        if(n%2!=0)
        {
 
            if(mp[n-1]==0 && n!=1)
            {
                vec.pb(n-1);
                mp[n-1]++;
            }
 
        }
 
        sort(vec.rbegin(),vec.rend());
        cout << vec.size() << "
";
        for(int i=0; i<vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << "
";
 
 
    }
 
 
 
}
 
 