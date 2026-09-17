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
        vector<ll>vec;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        int cnt=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]<vec[i+1] && i==0)
            {
                cnt++;
            }
            else if(i==n-1 && vec[i]<vec[i-1])
            {
                cnt++;
            }
            else if(vec[i]==vec[i+1] && vec[i]<vec[i-1] && i>0)
            {
                j=i;
                while(vec[j]==vec[i+1] && i<n-1)
                {
                    i++;
                }
                if(i==n-1)
                {
                    cnt++;
                }
                if(vec[i]<vec[i+1] && i<n-1)
                {
                    cnt++;
                }
            }
            else if(vec[i]==vec[i+1] &&  i==0)
            {
                while(vec[j]==vec[i+1] && i<n-1)
                {
                    i++;
                }
                if(i==n-1)
                {
                    cnt++;
                }
                if(vec[i]<vec[i+1] && i<n-1)
                {
                    cnt++;
                }
            }
            else if(vec[i]<vec[i-1] && vec[i]<vec[i+1] && i>0 && i<n-1)
            {
                cnt++;
            }
 
 
        }
        if(cnt==1 || n==1)
        {
            cout << "YES
";
        }
 
        else
        {
            cout << "NO
";
        }
    }
 
 
    return 0;
}