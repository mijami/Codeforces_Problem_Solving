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
        map<string,int>mp;
        vector<string>vec;
        for(int i=0;i<n;i++)
        {
            string a;
            cin >> a;
            vec.pb(a);
            mp[a]++;
        }
        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=1;j<vec[i].size();j++)
            {
                string pref= vec[i].substr(0,j),suff = vec[i].substr(j,vec[i].size()-j);
                if(mp[pref] && mp[suff])
                {
                    flag=1;
                }
            }
            cout << flag;
 
        }
        cout << "
";
    }
 
 
    checkmate
}