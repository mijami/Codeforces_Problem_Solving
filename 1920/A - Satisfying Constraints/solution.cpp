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
 
    int ct;
    cin >> ct;
    while(ct--)
    {
 
        int t;
        cin >> t;
        vector<int>vec;
        int mini=-1;
        int maxi=INT_MAX;
        while(t--)
        {
            int a,b;
            cin >> a >> b;
 
            if(a==1)
            {
                mini=max(mini,b);
            }
            else if(a==2)
            {
                maxi=min(b,maxi);
            }
            else vec.pb(b);
        }
        int cnt=0;
        map<ll,int>mp;
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i]>=mini && vec[i]<=maxi && mp[vec[i]]==0)
            {
                mp[vec[i]]++;
                cnt++;
            }
        }
        cnt= maxi-mini-cnt+1;
        if(mini>maxi)
        {
            cnt=0;
        }
        cout << cnt << "
";
 
    }
 
 
    return 0;
}