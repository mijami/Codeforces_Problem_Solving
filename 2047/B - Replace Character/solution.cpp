#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define newline cout << "
";
 
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
 
        string a;
        cin >> a;
        map<char,int>mp;
        int mn=INT_MAX;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            mx=max(mx,mp[a[i]]);
            mn=min(mn,mp[a[i]]);
        }
        string maax="",miin="";
        int fl=0;
        map<char,int>mp2;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]==mx && maax =="" &&  mp2[a[i]]==0)
            {
                maax+=a[i];
                mp2[a[i]]++;
            }
            else if(mp[a[i]]==mn && miin =="" && mp2[a[i]]==0)
            {
                miin+=a[i];
                //cout << miin << " ";
                mp2[a[i]]++;
 
 
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==miin[0])
            {
                a[i]=maax[0];
                break;
            }
        }
        cout << a << "
";
 
 
    }
 
 
    return 0;
}