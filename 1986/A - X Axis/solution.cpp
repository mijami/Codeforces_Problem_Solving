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
 
    int t=1;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        cout << max( abs(b-c) ,max(abs(a-b),abs(a-c)) ) << "
";
 
 
        //cout << ans << "
";
 
    }
 
 
    return 0;
}