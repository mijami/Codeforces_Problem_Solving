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
        vector<ll> vec,vec2;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        int k=0;
        int kf=0;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec2.pb(a);
            if(vec2[i]>vec[i])
            {
                flag++;
            }
            if(vec2[i]!=0)
            {
                k++;
                kf=i;
            }
 
 
        }
        int def;
        if(k>0)
        {
          def=vec[kf]-vec2[kf];
        }
        if(flag==0)
        {
            for(int i=0; i<n; i++)
            {
                if(vec[i]-vec2[i] != def && vec2[i]!=0 && k>0)
                {
                    flag++;
                    break;
                }
                if(vec2[i]==0 && vec[i]-vec2[i]>def && k>0)
                {
                    flag++;
                    break;
                }
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