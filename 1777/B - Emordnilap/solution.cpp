#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define ll long long int
#define checkmate return 0;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    vector<ll>vec;
    ll k=1;
    vec.pb(0);
    for(int i=1;i<100050;i++)
    {
        k=k%1000000007;
        k=k*i;
        k=k%1000000007;
        vec.pb(k);
    }
 
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n==1)
        {
            cout << "0
";
            continue;
        }
        ll x = n*(n-1);
        x=x%1000000007;
        x= (x*vec[n])%1000000007;
        cout << x << "
";
    }
 
 
    checkmate
}