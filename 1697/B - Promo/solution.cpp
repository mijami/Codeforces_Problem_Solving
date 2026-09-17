#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int n,m;
    cin >> n >> m;
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    sort(vec.rbegin(),vec.rend());
    vector<ll>v;
    ll s=0;
    for(int i=0;i<n;i++)
    {
        s+=vec[i];
        v.pb(s);
    }
    for(int i=0; i<m; i++)
    {
        ll sum=0;
        int a,b;
        cin >> a >> b;
        //5 5 3 2 1
        //5 10 13 15 16
        //
        int k=a-b;
        sum=v[a-1]-v[k-1];
        if(sum<=0)
        {
            sum=v[b-1];
        }
        cout << sum << "
";
    }
 
 
    checkmate
}