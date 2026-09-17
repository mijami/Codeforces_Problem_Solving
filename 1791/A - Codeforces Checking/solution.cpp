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
    string x="codeforces";
    map<char,int>mp;
    for(int i=0;i<x.size();i++)
    {
        mp[x[i]]++;
    }
    while(t--)
    {
        char a;
        cin >> a;
        if(mp[a])
        {
            cout << "YES
";
        }
        else
        {
            cout <<"NO
";
        }
 
    }
    return 0;
}