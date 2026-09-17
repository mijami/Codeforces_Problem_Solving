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
        ll n,k;
        cin >> n >> k;
        
        if(n==k && n==1) cout << "1
";
        else cout << k-n << "
";
 
    }
    return 0;
}