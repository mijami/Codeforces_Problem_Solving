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
        int n;
        cin >> n;
        int k=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            k+=a;
            int x=sqrt(k);
            if(x * x == k && x%2!=0)
            {
                cnt++;
            }
        }
        cout << cnt << "
";
 
 
 
    }
 
 
    return 0;
}