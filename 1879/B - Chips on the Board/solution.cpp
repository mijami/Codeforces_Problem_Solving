#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
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
        ll n,k;
        cin >> n;
        vector<int>vec,v,x,y;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        } 
        x=vec;
        sort(x.begin(),x.end());
        y=v;
        sort(y.begin(),y.end());
        ll sum=0;
        ll sum1=0,sum2=0;
 
 
        for(int i=0; i<n; i++)
        {
            sum1+=(x[0]+y[i]);
            sum2+=(y[0]+x[i]);
        }
        sum=min(sum1,sum2);
 
 
        cout << sum << "
";
 
 
 
 
 
 
 
 
 
    }
 
 
    return 0;
}