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
        int x,y;
        cin >> x >> y;
        int k= x^y;
        int ans=1;
        if(k%2==0)
        {
            k=k/2;
            ans=ans*2;
            while(k%2==0)
            {
                k=k/2;
                ans=ans*2;
            }
        }
        cout << ans << "
";
 
    }
 
 
    return 0;
}