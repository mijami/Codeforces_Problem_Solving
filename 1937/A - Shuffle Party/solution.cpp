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
        ll n;
        cin >> n;
 
        ll j=2;
        for(int i=0;i<32;i++)
        {
            j=j*2;
            if(j>n)
            {
                j=j/2;
                break;
            }
        }
        if(n==1)
        {
            cout << 1 << "
";
        }
        else 
        {
            cout << j << "
";
        }
 
 
    }
 
 
 
    return 0;
}