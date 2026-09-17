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
 
        map<char,int>mp;
 
        string x;
        cin >> x;
        int m;
        cin >> m;
        for(int i=0; i<m; i++)
        {
            char a;
            cin >> a;
            mp[a]++;
        }
        int k=0,y=0;
        int rightm;
        for(rightm=n-1; rightm>=0; rightm--)
        {
            if(mp[x[rightm]])
            {
                break;
            }
 
        }
        for(int i=0; i<rightm; i++)
        {
            if(mp[x[i]])
            {
                k=1;
            }
            else
            {
                k++;
            }
            y=max(k,y);
 
        }
        cout << y << "
";
    }
 
    checkmate
}