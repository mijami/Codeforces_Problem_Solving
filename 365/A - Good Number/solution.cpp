#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t,n;
    cin >> t >> n;
    int l=0;
    while(t--)
    {
        string a;
        cin >> a;
        int k=0;
        map<int,int>mp;
 
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]-'0']++;
        }
 
        for(int i=0;i<=n;i++)
        {
            if(mp[i]>0)
            {
                k++;
            }
        }
 
        if(k==n+1)
        {
            l++;
        }
    }
    cout << l << "
";
    checkmate
}