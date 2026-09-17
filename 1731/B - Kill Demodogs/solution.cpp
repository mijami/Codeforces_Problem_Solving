#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
 
    while(t--)
    {
        ll k=1e9+7;
        ll n;
        cin >> n;
        ll x;
        x=(n*(n+1))%k;
        ll y=((4*n)-1) %k;
        x=(x*y) %k;
        x=(x*337)%k;
 
        cout << x << "
";
    }
 
 
 
 
 
    return 0;
}