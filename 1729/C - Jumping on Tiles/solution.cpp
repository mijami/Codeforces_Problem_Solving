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
        string a;
        cin >> a;
 
        int n=a.size();
        char x=a[0];
        char y=a[n-1];
        if(x>y)
        {
            swap(x,y);
        }
        int cnt=0;
        vector<char>vec;
        map<char,int>mp;
        vector<vector<int>> vect(28);
        for(int i=0;i<n;i++)
        {
 
            if(a[i]>=x && a[i]<=y)
            {
                cnt++;
                vec.pb(a[i]);
                int k=a[i]-'a'+1;
                vect[k].pb(i);
            }
        }
        sort(vec.begin(),vec.end());
        ll sum=0;
        for(int i=0;i<vec.size()-1;i++)
        {
            sum+=abs((vec[i]-'a'+1)-(vec[i+1]-'a'+1));
        }
        cout << sum << " ";
        cout << cnt << "
";
 
 
        if(a[0]<=a[n-1])
        {
 
        for(int i=0;i<vec.size();i++)
        {
            int k=vec[i]-'a'+1;
            mp[k]++;
            if(mp[k]>1) continue;
            sort(vect[k].begin(),vect[k].end());
            for(int j=0;j<vect[k].size();j++)
            {
                cout << vect[k][j]+1 << " ";
            }
        }
 
        }
        else
        {
            for(int i=vec.size()-1;i>=0;i--)
            {
            int k=vec[i]-'a'+1;
            mp[k]++;
            if(mp[k]>1) continue;
            sort(vect[k].begin(),vect[k].end());
            for(int j=0;j<vect[k].size();j++)
            {
                cout << vect[k][j]+1 << " ";
            }
        }
        }
        cout << "
";
 
 
    }
 
    checkmate
}
 