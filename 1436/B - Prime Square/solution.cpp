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
    vector<int>vec;
    map<int,int>mp;
    mp[0]++;
    for(int i=2; i<1500; i++)
    {
        int flag=1;
        for(int j=2; j<=sqrt(i); j++)
        {
            if(i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            mp[i]++;
            vec.pb(i);
        }
    }
 
    while(t--)
    {
        int n;
        cin >> n;
        int k=n-1;
        int x=-1;
        for(int i=k;i<1500;i++)
        {
            if(mp[i]==1)
            {
                if(mp[i-k]==0)
                {
                    x=i-k;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    cout << x << " ";
                }
                else
                    cout << 1 << " ";
            }
            cout << "
";
        }
        cout << "
";
 
    }
 
    checkmate
}