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
        vector<int>vec;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            mp[a]++;
        }
 
 
 
        int k=mp[0];
        if(mp[0]==n)
        {
            cout << 1 << "
";
        }
        else if(n-k>= k-1)
        {
            cout << 0 << "
";
        }
        else if(n-k == mp[1])
        {
            cout << 2 << "
";
        }
        else
        {
            cout<< 1 << "
";
        }
 
        //1 0 0 0 2 0 3 0
        //0 0 0 0 0 1 2 3
 
    }
 
    return 0;
}