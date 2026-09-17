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
        int n,m,k;
        cin >> n >> m >> k;
        int cnt=(n)/m;
        int cnt2= (cnt*(m-1));
        if(n%m>0)
        {
            cnt2+=((n%m)-1);
        }
 
        if(k>=n-1 || m==1 || k>=cnt2)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
        }
 
    }
 
 
    return 0;
}