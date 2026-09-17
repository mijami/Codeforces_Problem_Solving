#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
        ll a,b,l;
        cin >> a >> b >> l;
 
 
        int cnt=0;
        int flag=0;
        map<ll,int>mp;
        for(int i=0;i<=30;i++)
        {
            for(int j=0;j<=30;j++)
            {
 
 
                if( pow(b,j) > l)
                {
                    break;
                }
                if(pow(a,i) > l)
                {
                    flag++;
                    break;
                }
                ll z=  pow(a,i) * pow(b,j);
                if( l%z ==0)
                {
                    ll k=l/z;
                    if(mp[k]==0) 
                    {   
                        cnt++;
                        mp[k]++;
                    }
                    
 
                }
            }
            if(flag)
            {
                break;
            }
 
        }
        cout << cnt << "
";
 
 
 
 
    }
 
 
    return 0;
}