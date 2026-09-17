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
        int cnt=0;
        vector<int>vec;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int flag=0,fl=0;
        for(int i=n-1; i>=0; i--)
        {
            if(vec[i]<vec[i-1] && i>0)
            {
                flag=i;
                int j=i-1;
                while(j>=0)
                {
                    if(mp[vec[j]]==0)
                    {
                        mp[vec[j]]=1;
                        cnt++;
                    }
                    j--;
                }
                flag =i;
                if(i>0) flag=i-1;
                i=n-1;
                while(i>flag && i>=0)
                {
                    if(mp[vec[i]]==1)
                    {
                        while(i>flag && i>=0)
                        {
 
                            if(mp[vec[i]]==0)
                            {
                                mp[vec[i]]=1;
                                cnt++;
                            }
                            i--;
                        }
                    }
                    i--;
                }
                fl=1;
            }
            if(fl)
            {
                break;
            }
        }
        cout << cnt << "
";
 
 
    }
 
 
    checkmate
}