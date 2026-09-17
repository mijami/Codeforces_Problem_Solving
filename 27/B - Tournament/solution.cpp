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
 
    int n;
    cin >> n;
    map<int,int>win,mp;
    int m= ((n*(n-1))/2) -1;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >>  a >> b;
        mp[a]++;
        mp[b]++;
        win[a]++;
    }
    vector<int>vec;
    for(int i=1;i<=n;i++)
    {
        if(mp[i]<n-1)
        {
            vec.pb(i);
        }
    }
    if(win[vec[0]]>win[vec[1]])
    {
        cout << vec[0] << " " << vec[1] << "
";
    }
    else
    {
        cout << vec[1] << " " << vec[0] << "
";
    }
 
 
    return 0;
}