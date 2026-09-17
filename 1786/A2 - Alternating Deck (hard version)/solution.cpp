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
        int n;
        cin >> n;
        ll x=0;
        ll s=1;
        int flag=0;
        int xb=0;
        int xw=0;
        int yw=1;
        int yb=0;
        for(int i=2;i<=n;)
        {
 
 
            if(s+i>n)
            {
                break;
            }
            x+=i;
            s+=i;
 
            xb+=(i+1)/2;
            xw+=i/2;
 
 
 
 
            if(s+i+1>n)
            {
                break;
            }
            xb+=(i+1+1)/2;
            xw+=(i+1)/2;
            x+=i+1;
            s+=i+1;
            if(s+i+2>n)
            {
                flag=1;
                break;
            }
            yb+=(i+2)/2;
            yw+=(i+1+2)/2;
            s+=i+2;
            if(s+i+3>n)
            {
                flag=1;
                break;
            }
            yb+=(i+3)/2;
            yw+=(i+1+3)/2;
            s+=i+3;
            i=i+4;
        }
        if(s<n && flag==0)
        {
            x+=n-s;
            int i=n-s;
            xb+=(i+1)/2;
            xw+=i/2;
        }
        if(s<n && flag==1)
        {
            int i=n-s;
            yw+=(i+1)/2;
            yb+=i/2;
        }
        cout << yw <<" "<< yb << " " << xw << " " << xb << "
";
    }
    return 0;
}