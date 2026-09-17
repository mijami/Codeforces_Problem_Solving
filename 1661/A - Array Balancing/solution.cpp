#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v,vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
 
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        ll sum=0;
 
 
        for(int i=1;i<n;i++)
        {
            sum+=min(abs(vec[i-1]-vec[i])+ abs(v[i-1]-v[i]), abs(vec[i-1]-v[i])+abs(v[i-1]-vec[i]));
 
        }
        cout << sum << "
";
 
    }
 
    checkmate
}