#include <bits/stdc++.h>
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> vec;
        vector<ll>vecin;
        for(int i=0;i<n;i++)
        {
            vecin.pb(i+1);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        ll l=0,r=0;
        int fl=1;
        while(r<n)
        {
            while(r< n-1 && vec[r] == vec[r+1])
            {
                r++;
            }
            if(l==r)
            {
                fl=0;
            }
            else
            {
                rotate(vecin.begin()+l, vecin.begin()+r, vecin.begin()+r+1);
            }
            l=r+1;
            r++;
        }
        if(fl)
        {
            for(int i=0;i<n;i++)
            {
                cout << vecin[i] << " ";
            }
            cout << "
";
        }
        else{
            cout << "-1" << "
";
        }
 
    }
 
    checkmate
 
 
 
 
}