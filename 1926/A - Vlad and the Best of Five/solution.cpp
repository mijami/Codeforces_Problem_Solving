#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 100001
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
    int cnt=0;
    while(t--)
    {
 
 
       string a;
       cin >> a;
       map<char,int>mp;
       for(int i=0;i<a.size();i++)
       {
           mp[a[i]]++;
       }
       if(mp['A']>mp['B'])
       {
           cout << "A
";
       }
       else
       {
           cout << "B
";
       }
 
    }
    return 0;
}