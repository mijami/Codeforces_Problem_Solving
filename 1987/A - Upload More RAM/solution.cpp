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
        int n,k;
        cin >> n >> k;
        int j=0;
        int i=0;
        while(1)
        {
            i++;
            j++;
            if(j==n)
            {
                break;
            }
            i+=(k-1);
        }
        cout << i << "
";
    }
 
 
    return 0;
}