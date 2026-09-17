#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
 
    cin >> t;
    while(t--)
    {
        int k,n;
        cin >> k >> n;
        vector<int>vec;
        int x=0;
        map<int,int>mp;
        for(int i=1; i<=n; i++)
        {
            mp[i]++;
            vec.pb(i);
            i+=x;
            x++;
            if(vec.size() == k)
            {
                break;
            }
 
        }
 
        if(vec.size()< k)
        {
            for(int i=n; i>=1; i--)
            {
                if(mp[i]==0)
                {
                    vec.pb(i);
                }
                if(vec.size() == k)
                {
                    break;
                }
            }
        }
        sort(vec.begin(),vec.end());
        for(int i=0; i<vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << "
";
 
    }
 
    return 0;
}