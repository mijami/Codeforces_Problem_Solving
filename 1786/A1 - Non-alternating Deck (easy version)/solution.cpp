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
        for(int i=2;i<=n;)
        {
 
 
            if(s+i>n)
            {
                break;
            }
            x+=i;
            s+=i;
            if(s+i+1>n)
            {
                break;
            }
            x+=i+1;
            s+=i+1;
            if(s+i+2>n)
            {
                flag=1;
                break;
            }
            s+=i+2;
            if(s+i+3>n)
            {
                flag=1;
                break;
            }
            s+=i+3;
            i=i+4;
        }
        if(s<n && flag==0) x+=n-s;
        cout << n-x << " " << x << "
";
    }
    return 0;
}