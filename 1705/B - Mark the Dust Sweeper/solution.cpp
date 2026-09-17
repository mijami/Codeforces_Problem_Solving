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
        ll s=0;
        ll cnt=0;
        int flag=0;
        int in;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(i<n-1)
            {
                s+=a;
            }
            if(a>0)
            {
                flag++;
            }
            if(flag && a==0)
            {
                cnt++;
            }
 
        }
        if(vec[n-1]==0 && s>0)
        {
            cnt--;
        }
        cout << s+cnt << "
";
    }
 
    checkmate
}