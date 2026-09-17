#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
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
        int fl=0;
        if(n==2)
        {
            if( (a[0]!='W' && a[1]=='W') || (a[0]=='W' && a[1]!='W'))
            {
                cout << "NO
";
            }
            else if(a[0]!=a[1])
            {
                cout << "YES
";
            }
            else if(a[0]==a[1] && a[0]=='W') cout << "YES
";
            else cout << "NO
";
            continue;
        }
        else if(n==1)
        {
            if(a[0]=='W')
            {
                cout << "YES
";
            }
            else cout << "NO
";
            continue;
        }
        int r=0;
        int b=0;
        int w=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='R')
            {
                r=1;
            }
            else if(a[i]=='B')
            {
                b=1;
            }
            else if(a[i]=='W')
            {
                if(r||b)
                {
                    if(r+b!=2)
                    {
                        fl=1;
                    }
                }
                r=0,b=0;
            }
        }
        if(r||b)
        {
            if(r+b!=2)
            {
                fl=1;
            }
        }
        if(fl) cout << "NO
";
        else cout << "YES
";
 
    }
 
    return 0;
}