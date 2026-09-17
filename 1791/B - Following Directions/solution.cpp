#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define pb push_back
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        int x=0,y=0;
        int n;
        cin >> n;
        string a;
        cin >> a;
        int flag=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='U')
            {
                y++;
            }
            if(a[i]=='D')
            {
                y--;
            }
            if(a[i]=='L')
            {
                x--;
            }
            if(a[i]=='R')
            {
                x++;
            }
            if(x==1 && y==1)
            {
                flag++;
            }
        }
        if(flag)
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