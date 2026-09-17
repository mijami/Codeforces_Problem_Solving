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
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            mp[vec[i]]=a;
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            cout << vec[i] << " ";
        }
        cout << "
";
        for(int i=0;i<n;i++)
        {
            cout << mp[vec[i]] << " ";
        }
        cout << "
";
 
 
    }
 
 
 
    return 0;
}