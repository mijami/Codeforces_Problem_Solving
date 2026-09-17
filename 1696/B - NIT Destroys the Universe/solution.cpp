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
        ll n;
        cin >> n ;
        vector<ll >vec;
        ll x;
        int cnt=0;
 
        for(int i=0; i<n; i++)
        {
            cin >> x;
            vec.pb(x);
        }
        for(int i=0; i<n; i++)
        {
            if(vec[i]!=0)
            {
                cnt++;
                while(vec[i]!=0 && i < n)
                {
                    i++;
                }
                i--;
            }
            else if(vec[i]==0)
            {
                while(vec[i]==0 && i< n)
                {
                    i++;
                }
                i--;
            }
        }
        if(cnt>2)
        {
            cnt=2;
        }
        cout << cnt << "
";
    }
 
    checkmate
}