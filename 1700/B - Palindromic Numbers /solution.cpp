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
    vector<int>vec;
 
    while(t--)
    {
        int n,m;
        cin >> n;
 
        string a;
        cin >> a;
        int x=a[0]-'0';
        x=1;
 
        if((a[0]-'0') < 9)
        {
            x=9;
            m=n;
        }
 
 
        int arr[n];
        int ans[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=x;
        }
       // 1111
         //818
        //293
        int an,y,z=0;
        int mi;
        for(int i=n-1;i>=0;i--)
        {
            mi=(a[i]-'0');
            if(z==1)
            {
                mi=(a[i]-'0')+1;
            }
            if(arr[i]<(mi))
            {
                y=11;
                an=y-mi;
                z=1;
            }
            else
            {
                an=arr[i]-mi;
                z=0;
            }
            ans[i]=an;
        }
        for(int i=0;i<n;i++)
        {
            cout << ans[i];
        }
        cout << "
";
    }
 
    checkmate
}