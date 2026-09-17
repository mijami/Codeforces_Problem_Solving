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
        vector<int>vec;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            int k=a%10;
            mp[k]++;
            if(mp[k]<=3)
            {
                vec.pb(k);
            }
        }
 
        int flag=0;
        n=vec.size();
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    if( (vec[i]+vec[j]+vec[k]) % 10 == 3 )
                    {
                        flag++;
                        if(flag) break;
                    }
                }
            }
        }
 
 
 
       if(flag)
       {
           cout << "YES" << "
";
       }
       else
       {
           cout << "NO" << "
";
       }
 
 
    }
 
    checkmate
}