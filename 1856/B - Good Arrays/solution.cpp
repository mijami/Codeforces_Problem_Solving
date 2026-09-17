#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
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
        int n;
        cin >> n;
 
        vector<int>vec,v;
        map<int,int>mp;
        ll s=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            mp[a]++;
            s+=a;
 
        }
 
 
        if(n==1 || n==mp[1])
        {
            cout << "NO
";
        }
        else if(mp[1]>(n/2))
        {
 
            int pos=mp[1];
            int sec=n-pos;
            s-=sec;
            if(pos*2<=s)
            {
                cout << "YES
";
            }
            else
            {
                cout << "NO
";
            }
        }
        else
        {
            cout << "YES
";
        }
 
    }
 
 
 
 
 
 
    return 0;
}