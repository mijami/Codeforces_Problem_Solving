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
        int n,m;
        cin >> n >> m;
        vector<int>vec,v,vect;
 
        int mxm=-1;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        map<int,int>mp;
        for(int i=0; i<m; i++)
        {
            int a;
            cin >> a;
 
            if(mp[a]==0) v.pb(a);
            mp[a]++;
        }
        //sort(v.rbegin(),v.rend());
        ll arr[35]= {};
        ll j=1;
        arr[0]=1;
        for(int k=1; k<=30; k++)
        {
            j=j*2;
            arr[k]=j;
        }
        vect=vec;
 
        for(int i=0; i<v.size(); i++)
        {
 
 
                for(int k=0; k<n; k++)
                {
                    if(vec[k]%2!=0)
                    {
                        continue;
                    }
                    if(vec[k]%arr[v[i]]==0)
                    {
                        //cout << vec[k] << " " << arr[v[i]-1] << " 
";
                        vec[k]+=arr[v[i]-1];
 
                    }
                }
 
 
 
        }
        for(int i=0; i<n; i++)
        {
            cout << vec[i] << " ";
        }
        newline
 
 
 
 
 
 
    }
 
 
    return 0;
}