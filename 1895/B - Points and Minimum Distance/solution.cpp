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
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        int dist=0;
        int x=vec[0],y=vec[(2*n)-1];
        for(int i=0;i<n;i++)
        {
            int x1=vec[i];
            int y1=vec[ (n*2)-1-i];
            dist+=abs(x-x1)+abs(y-y1);
            x=x1;
            y=y1;
        }
        cout << dist << "
";
        for(int i=0;i<n;i++)
        {
            cout << vec[i] << " " << vec[(2*n)-1-i] << "
";
        }
 
 
 
 
 
 
 
    }
 
 
    return 0;
}