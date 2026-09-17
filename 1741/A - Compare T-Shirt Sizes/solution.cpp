#include <bits/stdc++.h>
#define pb push_back
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
        string a,b;
        cin >> a >> b;
        int n=a.size();
        int m=b.size();
        if(a[n-1]==b[m-1])
        {
            if(a[n-1]=='L')
            {
 
                if(n>m)
                {
                    cout << ">
";
                }
                else if(n<m)
                {
                    cout << "<
";
                }
                else cout << "=
";
 
            }
            else if(a[n-1]=='S')
            {
 
                if(n>m)
                {
                    cout << "<
";
                }
                else if(n<m)
                {
                    cout << ">
";
                }
                else cout << "=
";
 
            }
            else cout << "=
";
        }
        else if(a[n-1]!=b[m-1])
        {
            if(a[n-1]=='L')
            {
                cout << ">
";
            }
            else if(b[m-1]=='L')
            {
                cout << "<
";
            }
            else if(a[n-1]=='S')
            {
                cout << "<" << "
";
            }
            else if(b[m-1]=='S')
            {
                cout << ">
";
            }
        }
 
 
    }
 
    return 0;
}