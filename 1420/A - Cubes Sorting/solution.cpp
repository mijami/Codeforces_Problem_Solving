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
        vector<int>vec,v;
        int flag=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            mp[a]++;
            if(mp[a]>1)
            {
                flag=1;
            }
        }
        v=vec;
        sort(v.rbegin(),v.rend());
        if(flag)
        {
            cout << "YES" << "
";
        }
        else if(v!=vec)
        {
            cout << "YES" << "
";
        }
        else if(v==vec)
            cout << "NO" << "
";
 
    }
 
    checkmate
}