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
 
        int n ;
        cin >> n ;
 
        vector<int>vec;
 
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(a<0)
            {
                sum+= (a*-1);
            }
            else
            {
                sum+=a;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]<0)
            {
                cnt++;
                while(vec[i]<1 && i<n)
                {
                    i++;
                }
            }
        }
        cout << sum << " " << cnt << "
";
 
 
 
 
 
 
 
 
    }
 
 
 
 
 
    return 0;
}
 