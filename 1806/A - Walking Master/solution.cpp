#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
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
        ll x,y;
        cin >> x >> y;
        ll a,b;
        cin >> a >> b;
        ll cnt=0;
        if(b-y>= a-x && b>=y )
        {
            cnt+=b-y;
            ll fl=cnt;
            x+=fl;
            cnt+=x-a;
        }
        else
            cnt=-1;
        cout << cnt << "
";
 
 
    }
 
    return 0;
}