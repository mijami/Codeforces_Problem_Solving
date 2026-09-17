#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define for(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define e4;  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4;
 
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
 
        int x=max(a,b);
        int y=min(a,b);
        int s=0,d=0;
        if(a==0 || b==0)
        {
            cout << 0 << "
";
        }
        else if(a==b && a>1)
        {
            cout << (a+b)/3 << "
";
        }
        else
            if(x/y>=2)
            {
                cout << y << "
";
            }
            else
                cout << (a+b)/3 << "
";
 
 
    }
 
    checkmate
}