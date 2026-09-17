#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
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
        int n,on,nott;
        cin >> n >> on  >> nott;
        string a;
        cin >> a;
        int onln=0,ofln=0;
        int flag=0;
        int onn=0;
        int ans=0;
        for(int i=0; i<nott; i++)
        {
           if(a[i]=='+' )
           {
               if(flag==0)
               {
                   onn++;
               }
               onln++;
               if(onln+on-ofln==n)
               {
                   ans++;
               }
           }
           else
           {
               ofln++;
               flag++;
           }
        }
        if(on==n || on+onn==n || ans)
        {
            cout << "YES
";
        }
        else if(on+onln-ofln==n)
        {
            cout << "YES
";
        }
        else if(on+onln>=n)
        {
            cout << "MAYBE
";
        }
        else
        {
            cout << "NO
";
        }
    }
 
 
 
}
 
 