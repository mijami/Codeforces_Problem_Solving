#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
        int b[n]= {0};
        vector<pair<int, int> > mp;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            mp.push_back( make_pair(a,i) );
        }
        sort(mp.begin(),mp.end());
        int k=n;
        for(int i=0; i<n; i++)
        {
            b[mp[i].second]=k;
            k--;
 
        }
 
 
 
        for(int i=0; i<n; i++)
        {
            cout << b[i] << " ";
        }
        cout << "
";
 
 
 
 
    }
 
 
 
 
 
}