#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            a.pb(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            b.pb(x);
        }
        if(a==b)
        {
            cout << "YES
";
            continue;
        }
        int x=0;
 
        int y=0;
        for(int i=0;i<n-1;i++)
        {
            if(b[i]>b[i+1]+1 && a[i]<b[i])
            {
                y++;
            }
 
            if(a[i]>b[i])
            {
                y++;
                break;
            }
        }
        if(b[n-1]>b[0]+1 && a[n-1]<b[n-1] || a[n-1]>b[n-1])
        {
            y++;
        }
        if(y)
        {
            cout << "NO" << "
";
        }
        else
        {
            cout << "YES" << "
";
        }
    }
 
    checkmate
}