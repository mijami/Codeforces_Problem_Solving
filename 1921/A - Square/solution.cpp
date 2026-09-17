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
        int k=4;
        int a1=0;
        map<int,int>mp;
        while(k--)
        {
            int a,b;
            cin >> a >> b;
            int fl=0;
            if(mp[a] && fl==0)
            {
                a1=abs(mp[a]-b);
                fl++;
            }
            mp[a]=b;;
        }
        cout << a1*a1 << "
";
 
    }
 
 
 
    return 0;
}