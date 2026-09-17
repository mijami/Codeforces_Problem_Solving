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
 
    int t;
    cin >> t;
 
    while(t--)
    {
        vector<ll>vec;
        int n;
        cin >> n;
 
        int flag=0;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a ;
            vec.pb(a);
            mp[a]=i;
        }
        int pos1= mp[1]+1;
        int pos2= mp[2]+1;
        int pos3=mp[n]+1;
        if(pos1<pos2)
        {
            swap(pos1,pos2);
        }
 
        if(pos1>pos3 && pos2 < pos3)
        {
            cout << "1 1
";
        }
        else if(pos3>pos1)
        {
            cout << pos1 << " " << pos3 << "
";
        }
        else if(pos2>pos3)
        {
            cout << pos2 << " " << pos3 << "
";
        }
 
 
    }
 
    return 0;
}