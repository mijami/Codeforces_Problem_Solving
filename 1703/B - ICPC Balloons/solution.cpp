#include <bits/stdc++.h>
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<char,int>mp;
        char a;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin >> a;
 
            if(mp[a]==0)
            {
                cnt+=2;
            }
            else
                cnt++;
            mp[a]++;
        }
        cout << cnt << "
";
    }
 
    checkmate
 
 
 
 
}