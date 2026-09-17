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
        string a;
        cin >> a;
        int zr=0;
        int on=0;
        int fl=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='1')
            {
                on++;
            }
            else
            {
                zr++;
            }
            if(a[i]!=a[i+1])
            {
                fl++;
            }
        }
        if(n==1 && a[0]=='0')
        {
            cout << "YES
";
        }
        else if(fl || zr>on)
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