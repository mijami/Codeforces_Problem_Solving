#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
 
        int n,m;
        cin >> n >> m;
        string a;
        cin >> a;
        long long int arr[n+5][m+5]={};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> arr[i][j];
            }
        }
        int r=0,c=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='D')
            {
                long long k=0;
                for(int j=0;j<m;j++)
                {
                    k+=arr[r][j];
                }
                k=(k*-1);
                arr[r][c]=k;
                r++;
 
            }
            else
            {
                long long k=0;
                for(int j=0;j<n;j++)
                {
                    k+=arr[j][c];
                }
                k=(k*-1);
                arr[r][c]=k;
                c++;
 
            }
            if(r==n-1 && c==m-1)
            {
                long long k=0;
                for(int j=0;j<n;j++)
                {
                    k+=arr[j][c];
                }
                k=(k*-1);
                arr[r][c]=k;
            }
 
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << "
";
        }
 
 
 
 
    }
 
 
 
    return 0;
}
 
 