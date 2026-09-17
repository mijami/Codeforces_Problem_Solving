#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
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
            mp[vec[i]]++;
        }
        sort(vec.begin(),vec.end());
        if(vec[0]==vec[n-1])
        {
            cout << "-1
";
        }
        else
        {
            cout << mp[vec[0]] << " " << n-mp[vec[0]] << "
";
            for(int i=0;i<mp[vec[0]];i++)
            {
                cout << vec[i] << " ";
            }
            cout << "
";
            for(int i=mp[vec[0]];i<n;i++)
            {
                cout << vec[i] << " ";
            }
            cout << "
";
        }
 
    }
 
 
 
    return 0;
}