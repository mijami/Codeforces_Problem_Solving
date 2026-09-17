#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
int main()
{
    ll n;
    cin >> n;
 
    vector<ll>vec;
    vec.pb(1);
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            vec.pb(i);
            if(n/i!=i)
            {
                vec.pb(n/i);
            }
        }
    }
    vec.pb(n);
    int si=vec.size();
    vec[si-1]=n*(n+1)/2;
    for(int i=1;i<si-1;i++)
    {
        ll t=n/vec[i];
 
        ll x= 1+(t-1)*vec[i];
        ll y= t*(1+x) /2;
        vec[i]=y;
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<si;i++)
    {
        cout << vec[i] << " ";
    }
    cout << "
";
 
    return 0;
}