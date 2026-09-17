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
        vector<int>vec;
        int f=0,s=0,t=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        ll sum=0;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(vec[i]==0 && cnt==0)
            {
                t=i;
                cnt++;
            }
            if(vec[i]==1)
            {
                f++;
                s=i;
            }
            if(f && vec[i]==0)
            {
                sum+=f*1;
            }
        }
 
 
 
        ll ans=sum;
        sum=0;
 
        if(cnt) vec[t]=1;
        f=0;
        for(int i=0; i<n; i++)
        {
 
            if(vec[i]==1)
            {
                f++;
            }
            if(f && vec[i]==0)
            {
                sum+=f*1;
            }
        }
        ans=max(ans,sum);
        sum=0;
        if(f) vec[s]=0;
 
        if(cnt) vec[t]=0;
 
        f=0;
        for(int i=0; i<n; i++)
        {
 
            if(vec[i]==1)
            {
                f++;
            }
            if(f && vec[i]==0)
            {
                sum+=f*1;
            }
        }
        ans=max(ans,sum);
        cout << ans <<"
";
    }
 
 
    return 0;
}