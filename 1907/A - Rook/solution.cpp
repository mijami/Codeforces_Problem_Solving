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
        string a;
        cin >> a;
        int x=a[1]-'0';
        char y='a';
        for(int i=1;i<=8;i++)
        {
            if(i!=x)
            {
                cout << a[0] << i << "
";
            }
        }
        for(int i=1;i<=8;i++)
        {
            if(y!=a[0])
            {
                cout << y << x << "
";
            }
            y++;
        }
 
    }
 
 
 
    return 0;
}