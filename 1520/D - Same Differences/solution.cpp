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
        map<int,int>mp;
        ll x=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            a-=i;
            x+=mp[a];
            mp[a]++;
        }
 
        cout << x << "
";
 
    }
 
    checkmate
}