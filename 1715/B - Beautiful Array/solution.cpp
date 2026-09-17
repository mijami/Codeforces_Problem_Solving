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
        ll n,k,b,s;
        cin >> n >> k >> b >> s;
 
        ll x= (k*b);
        if(s-x > k-1)
        {
            x+=k-1;
        }
        ll y = (s-x);
        ll z= k-1;
        ll zz= (b*k)+(k-1) +(k-1)*(n-1);
        if((k*b)>s || zz < s)
        {
            cout << "-1" << "
";
            continue;
        }
        for(int i=0;i<n-1;i++)
        {
            if(y-z>0)
            {
                cout << z << " ";
                y=y-z;
            }
            else
            {
                cout << y << " ";
                y=y-y;
            }
        }
        cout << x << "
";
 
 
    }
 
    checkmate
}