#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        long long int a,b;
        cin >> a >> b;
        long long int n= 1+( (b-1)*(b))/2;
        long long int val=0;
        if(b==a)
        {
            cout << "1
";
            return 0;
        }
        long long int ans=INT_MAX;
        if(a==1) cout << "0
";
        else if(n >= a )
        {
            long long int l=0, r=b-1;
            while(l<=r)
            {
                long long int mid = (l+r)/2;
 
                long long pre = ((mid * (mid+1)) /2);
                if(mid ==0) pre=0;
 
                val = n- pre ;
                if(val>=a)
                {
                    ans= (b-1)-mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
 
            }
            cout << ans << "
";
        }
        else
        {
            cout << "-1
";
        }
 
 
 
    }
    return 0;
}