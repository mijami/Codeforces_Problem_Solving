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
    while(t--)
    {
        ll p;
        cin >> p;
        ll a,b,c;
        cin >> a >>b >> c;
 
        if(p%a==0 ||  p%b==0 || p%c==0)
        {
            cout << 0 << "
";
 
        }
        else
        {
 
            ll x=a-(p%a);
            ll y=b-(p%b);
            ll z=c-(p%c);
            cout << min(x,min(y,z)) << "
";
        }
 
    }
 
    checkmate
}