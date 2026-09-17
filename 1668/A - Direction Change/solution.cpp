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
        int a,b;
        cin >> a >> b;
        if(a==1 && b==1)
        {
            cout << 0 << "
";
        }
        else if(a==1 && b>2)
        {
            cout << -1 << "
";
        }
        else if(b==1 && a>2)
        {
            cout << -1 << "
";
        }
        else if(a==1 || b==1)
        {
            cout << 1 << "
";
        }
        else if(a==b)
        {
            cout << (a-1)*2 << "
";
        }
        else if(a>b || b>a)
        {
            int k=min(a,b);
            int y=max(a,b);
            int x=(k-1)*2;
            if((y-k)%2==0)
            {
                x+=(y-k)*2;
            }
            else
                x+=((y-k-1)*2)+1;
            cout << x << "
";
        }
    }
 
    checkmate
}