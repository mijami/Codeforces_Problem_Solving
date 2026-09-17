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
        int n,m;
        cin >> n >> m;
        int a[n][m];
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
            }
        }
        ll x=0;
        int k;
        int l;
        ll s=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                x=0;
                k=i;
                l=j;
                x+=a[k][l];
 
                while(k+1<n && l+1<m)
                {
 
                    k++;
                    l++;
                    x+=a[k][l];
 
                }
                k=i;
                l=j;
                while(k-1>=0 && l-1>=0)
                {
 
                    k--;
                    l--;
                    x+=a[k][l];
 
                }
                k=i;
                l=j;
                while(k-1>=0 && l+1<m)
                {
                    k--;
                    l++;
                    x+=a[k][l];
 
                }
                k=i;
                l=j;
                while(k+1<n && l-1>=0)
                {
 
                    k++;
                    l--;
                    x+=a[k][l];
                }
                s=max(s,x);
 
            }
        }
        cout << s << "
";
 
    }
 
    checkmate
}