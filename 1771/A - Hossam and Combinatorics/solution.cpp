#include <bits/stdc++.h>
using namespace std;
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
        int n;
        cin >> n;
        vector<long long int>vec;
        for(int i=0;i<n;i++)
        {
            long long int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        map<long long int,long long int>mp;
        for(int i=0;i<n;i++)
        {
            mp[vec[i]]++;
        }
        long long int ans= mp[vec[0]]*mp[vec[n-1]]*2;
        long long int an= (mp[vec[0]]-1)*mp[vec[n-1]] ;
        if(vec[0]==vec[n-1])
        {
            cout << an<< "
";
        }
        else{
            cout << ans << "
";
        }
    }
 
 
 
    return 0;
}