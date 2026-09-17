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
        int n;
        cin >> n;
        string a;
        cin >> a;
        map<char,int>mp;
 
        int ans=1;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            if(mp['R'] && a[i]=='L')
            {
                ans=0;
                mp['L']++;
            }
            else if(a[i] == 'L'){
                ans=i+1;
            }
        }
        if(mp['L'] && mp['R'])
        {
            cout << ans << "
";
        }
        else
        {
            cout << "-1
";
        }
 
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 