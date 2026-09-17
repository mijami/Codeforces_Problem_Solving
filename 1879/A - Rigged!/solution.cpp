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
 
        vector<int>vec;
        ll x,y;
        cin >> x >> y;
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            ll a,b;
            cin >> a >> b;
            if(x>a || y>b)
            {
                continue;
            }
            else
            {
                flag++;
            }
        }
        if(flag)
        {
            cout << "-1
";
        }
        else{
            cout << x << "
";
        }
 
 
 
 
 
 
 
 
    }
 
 
    return 0;
}