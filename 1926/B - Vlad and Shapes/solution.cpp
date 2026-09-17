#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 100001
#define newline cout << "
";
 
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
       int arr[n][n];
       int one=0;
       int cnt=0;
       for(int i=0;i<n;i++)
       {
           cin >> a;
           for(int j=0;j<n;j++)
           {
               if(a[j]=='1')
               {
                   arr[i][j]=1;
                   one++;
               }
               else
               {
                   arr[i][j]=0;
               }
           }
 
       }
       int cnt2=0;
       
       
       int flag=0;
       for(int i=0;i<n;i++)
       {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]==1 && flag==0)
                {
                    flag++;
                    if(arr[i+1][j]==1 && arr[i][j+1]==1) cnt2++;
                    break;
                }
            }
            if(cnt2) break;
       }
       if(cnt2==0)
       {
           cout << "TRIANGLE
";
       }
       else
       {
           cout << "SQUARE
";
       }
 
    }
    return 0;
}