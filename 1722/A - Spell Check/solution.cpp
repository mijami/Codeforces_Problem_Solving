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
        string a;
        cin >> a;
        if(n!=5)
        {
            cout << "NO" << "
";
            continue;
        }
        int k=0;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='T' && mp[a[i]]==0)
            {
                mp[a[i]]++;
                k++;
            }
            else if(a[i]=='i' && mp[a[i]]==0)
            {
                mp[a[i]]++;
                k++;
            }
            else if(a[i]=='m' && mp[a[i]]==0)
            {
                mp[a[i]]++;
                k++;
            }
            else if(a[i]=='u' && mp[a[i]]==0)
            {
                mp[a[i]]++;
                k++;
            }
            else if(a[i]=='r' && mp[a[i]]==0)
            {
                mp[a[i]]++;
                k++;
            }
        }
        if(k==5)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
    }
 
    checkmate
}