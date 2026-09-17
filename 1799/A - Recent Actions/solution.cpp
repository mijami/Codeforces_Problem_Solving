#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
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
        int m;
        cin >> m;
        vector<int>vec;
        map<int,int>mp;
        for(int i=0; i<m; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            if(mp[a]==1)
            {
                vec.pb(i+1);
            }
        }
        int x=0;
        if(vec.size()<n)
        {
            x=n-vec.size();
        }
        for(int i=0; i<x; i++)
        {
            cout << "-1 ";
        }
 
        if(vec.size()>n)
        {
 
            for(int i=n-1; i>=0; i--)
            {
                cout << vec[i] << " ";
            }
        }
        else
        {
            for(int i=vec.size()-1; i>=0; i--)
            {
                cout << vec[i] << " ";
            }
 
        }
        cout << "
";
    }
 
 
 
    return 0;
}