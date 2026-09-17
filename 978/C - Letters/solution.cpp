#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
 
/*
vector<pair<int,int>> vec[1000005];
vector<int> dp;
map<pair<int,int>,int> rec;
 
 
void DFS(int current, int parent)
{
    for(auto i:vec[current])
    {
        int to= i.first;
        int id= i.second;
        if(to==parent)
        {
            continue;
        }
        rec[{current,to}]=id;
        rec[{to,current}]=id;
        if(dp[current]!=INT_MAX)
        {
            if(current==1)
            {
                dp[to]=1;
            }
            else
            {
                if(id>rec[{current,parent}])
                {
                    dp[to]=dp[current];
                }
                else{
                    dp[to]=dp[current]+1;
                }
            }
        }
        DFS(to,current);
    }
}
 
*/
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    //cin >> t;
 
    while(t--)
    {
 
        ll n;
        cin >> n;
        ll m;
        cin  >> m;
        vector<ll>dorm,let;
        ll s=0;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            s+=a;
            dorm.pb(s);
        }
        for(ll i=0; i<m; i++)
        {
            ll a;
            cin >> a;
            let.pb(a);
        }
        ll i=0;
        ll k;
        for(ll j=0; j<m; j++)
        {
            while(let[j]>dorm[i])
            {
                i++;
            }
            if(i==0)
            {
                cout << i+1 << " " << let[j] << "
";
            }
            else
            {
                cout << i+1 << " " << let[j]-dorm[i-1] << "
";
            }
 
 
        }
 
    }
 
 
 
 
 
    return 0;
}
 