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
        int n;
        cin >> n;
        int m=(n*(n-1))/2;
        vector<ll>vec,v;
        map<ll,int>mp;
        for(int i=0;i<m;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
            mp[a]++;
        }
        sort(vec.begin(),vec.end());
        for(auto x:mp)
        {
            v.pb(x.first);
        }
        int cnt=n-1;
        if(v.size()<n-1)
        {
            for(int i=0;i<v.size();i++)
            {
                if(mp[v[i]]>=cnt)
                {
                    mp[v[i]]-=cnt;
                    cnt--;
                }
                while(mp[v[i]]>=cnt && cnt>0)
                {
                    //cout << v[i] << " " << cnt << " 
";
                    v.pb(v[i]);
                    mp[v[i]]-=cnt;
                    cnt--;
                }
                if(v.size() >= n-1)
                {
                    break;
                }
            }
        }
        if(v.size()<n) v.pb(vec[m-1]);
        for(int i=0;i<v.size();i++)
        {
            cout << v[i] << " ";
        }
        cout << "
";
    }
//    1 2 3 4
    //1 2 3 5 5
    //1 
  //  1 1 1 2 2 3
    //1 1 2 2 3
 
   // 1 1 1 1 1 1 1 2 2 2
 
 
 
 
    return 0;
}