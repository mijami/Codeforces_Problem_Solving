#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            if(mp[a]>=k)
            {
                v.pb(a);
                mp[a]=-9999999;
            }
        }
        if(v.size()==0)
        {
            cout << "-1" << "
";
            continue;
        }
        sort(v.begin(),v.end());
 
        int l=v[0];
        int r=v[0];
        int lo=v[0];
 
        int ma=0;
 
        //long increasing substring
        for(int i=1; i<v.size(); i++)
        {
            if((v[i]-1)==v[i-1])
            {
                if(v[i]-l > ma)
                {
                    lo=l;
                    r=v[i];
                    ma=r-lo;
                }
            }
            else l=v[i];
        }
        cout << lo << " " << r << "
";
    }
 
    checkmate
}