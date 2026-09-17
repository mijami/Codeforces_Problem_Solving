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
        int n;
        cin >> n;
        int x;
        cin >> x;
        vector<pair<int,int>>mp;
        vector<int>arr,brr,crr;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            mp.pb(make_pair(a,i));
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            brr.pb(a);
        }
        sort(brr.begin(),brr.end());
        for(int i=x;i<n;i++)
        {
            crr.pb(brr[i]);
        }
        for(int i=0;i<x;i++)
        {
            crr.pb(brr[i]);
        }
 
        sort(mp.begin(),mp.end());
        int cnt=0;
        int vec[n]={};
        for(int i=x;i<n;i++)
        {
            if(mp[i].first>crr[i])
            {
                cnt++;
            }
            vec[mp[i].second]=crr[i];
        }
        for(int i=0;i<x;i++)
        {
            if(mp[i].first>crr[i])
            {
                cnt++;
            }
            vec[mp[i].second]=crr[i];
        }
 
        if(cnt==x)
        {
            cout << "YES
";
 
            for(int i=0;i<n;i++)
            {
                cout << vec[i] << " ";
            }
            newline
        }
        else
        {
            cout << "NO
";
        }
 
 
 
 
    }
 
 
    return 0;
}