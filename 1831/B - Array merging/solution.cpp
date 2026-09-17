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
        vector<int>vec,vec2,vec3;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec2.pb(a);
        }
        if(n==1)
        {
            if(vec[0]==vec2[0])
            {
                cout << 2 << "
";
            }
            else
            {
                cout << "1
";
            }
            continue;
        }
        int cnt=1;
        int ans=1;
        map<int,int>mp;
        //mp[vec[0]]++;
        for(int i=1; i<n; i++)
        {
            if(vec[i]==vec[i-1])
            {
                cnt++;
            }
            else
            {
                mp[vec[i-1]]=max(mp[vec[i-1]],cnt);
                mp[vec[i]]=max(1,mp[vec[i]]);
                cnt=1;
            }
        }
        if(vec[n-2]==vec[n-1])
        {
            mp[vec[n-2]]=  max(mp[vec[n-2]],cnt);
        }
 
        map<int,int>mp2;
        cnt=1;
        for(int i=1; i<n; i++)
        {
            if(vec2[i]==vec2[i-1])
            {
                cnt++;
            }
            else
            {
                mp2[vec2[i-1]]=max(mp2[vec2[i-1]],cnt);
                mp2[vec2[i]]=max(1,mp2[vec2[i]]);
                cnt=1;
            }
        }
        if(vec2[n-2]==vec2[n-1])
        {
            mp2[vec2[n-2]]=  max(mp2[vec2[n-2]],cnt);
        }
        for(int i=0;i<n;i++)
        {
            ans=max(mp2[vec[i]]+mp[vec[i]],ans);
            ans=max(mp2[vec2[i]]+mp[vec2[i]],ans);
        }
 
        cout << ans <<  "
";
 
 
    }
    return 0;
}