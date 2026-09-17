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
        string a,b;
        cin >> a >> b;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i] || (a[i]=='B' && b[i]=='G') || (a[i]=='G' && b[i]=='B'))
            {
                continue;
            }
            else
            {
                flag=1;
            }
        }
        if(flag)
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