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
 
        ll n;
        cin >>n;
        ll x=1,y=4,z=0;
        z=n-5;
 
        if(z==6)
        {
            z--;
            x++;
        }
        else if(z%3==0)
        {
            z--;
            y++;
 
        }
        if(x==y || y==z || x==z || z%3==0 || n<7)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
            cout << x << " " << y <<  " " << z << "
";
 
        }
 
    }
 
 
    return 0;
}