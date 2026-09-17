#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
        string s;
        cin >> s;
 
        int mis = 0;
        for(int i = 0;i < n/2;++i)
        {
            if(s[i] != s[n-i-1])
            {
                mis++;
            }
        }
        for(int i=0;i<=n;i++)
        {
            if(i<mis)
            {
                cout << "0";
                continue;
            }
            if(i==mis)
            {
                cout << "1";
                continue;
            }
            int left=i-mis;
            int mx=n-(mis*2);
            if(left>mx)
            {
                cout << "0";
                continue;
            }
 
            if(n%2==0)
            {
                cout << (left%2==0? "1" : "0");
            }
            else{
                cout << 1;
            }
 
 
 
        }
        cout << "
";
 
 
 
    }
 
 
 
    return 0;
 
}