#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define for(i,n) for(int i=0;i<n;i++)
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
 
        int x=1;
        for(i,n)
        {
            if(a[i]==b[i] && a[i]=='1')
            {
                x=0;
                break;
            }
        }
        if(x==1)
        {
            cout << "YES" << "
";
        }
        if(x==0)
        {
            cout << "NO" << "
";
        }
    }
 
    checkmate
}