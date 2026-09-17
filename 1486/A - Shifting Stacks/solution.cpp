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
        int n;
        cin >> n;
        vector<ll>vec,v,v2;
        ll s=0,su=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            s+=a;
            v.pb(s);
            su+=i;
            v2.pb(su);
 
 
            if(v2[i]>v[i])
            {
                flag++;
            }
        }
        if(flag)
        {
            cout << "NO" << "
";
 
        }
        else
            cout << "YES" << "
";
    }
 
    checkmate
}