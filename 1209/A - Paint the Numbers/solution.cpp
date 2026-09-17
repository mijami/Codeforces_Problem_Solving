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
    int n=t;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    map<int,int>mp;
 
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec[j]%vec[i]==0)
            {
                mp[j]++;
            }
        }
    }
    int y=0;
    for(int i=0;i<n;i++)
    {
        if(mp[i]==0)
        {
            y++;
        }
    }
    cout << y << "
";
 
    checkmate
}