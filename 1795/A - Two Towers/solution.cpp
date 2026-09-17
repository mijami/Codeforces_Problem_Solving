#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define pb push_back
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
              cnt++;
            }
        }
        if(a[n-1]==b[m-1]) cnt++;
        for(int i=m-1;i>=1;i--)
        {
            if(b[i]==b[i-1])
            {
              cnt++;
            }
        }
        if(cnt>1)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
        }
    }
    return 0;
}