#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
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
        string a;
        cin >> a;
 
        if(a=="abc" || a=="acb" || a=="bac" || a=="cba")
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
 
 
    }
 
 
    return 0;
}