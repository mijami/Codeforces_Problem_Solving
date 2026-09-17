#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
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
        ll n;
        cin >> n;
        vector<ll>vec,ve;
 
        ll sum=0;
        map<ll,int>mp;
        ll m=n-1;
        ve.pb(0);
        for(int i=0; i < m; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
            ve.pb(i+1);
        }
        ve.pb(n);
        sum= (n*(n+1))/2;
        ll dif=0;
        int flag=0;
        if(vec[m-1]>sum)
        {
            flag++;
            cout << "NO
";
            continue;
        }
        if(vec[m-1]<sum)
        {
            vec.pb(sum);
        }
        vector<ll>check;
        dif= vec[0]-0;
        if(dif<=n)
        {
            mp[dif]++;
            ve[dif]=0;
        }
        else
        {
            check.pb(dif);
        }
        //cout << vec[0] << " ";
        for(int i=1; i<vec.size(); i++)
        {
            //cout << vec[i] << " ";
            dif=vec[i] - vec[i-1];
            if(dif<=n)
            {
                mp[dif]++;
                ve[dif]=0;
                if(mp[dif]>1)
                {
                    check.pb(dif);
                }
            }
            else
            {
                check.pb(dif);
            }
        }
        if(check.size())
        {
 
            if(check.size()>1)
            {
                flag++;
                cout << "NO
";
                continue;
            }
            for(int i=0; i<=check[0]; i++)
            {
                check[0]= check[0]-ve[i];
                //cout << check[0] << " ";
            }
            if(check[0]!=0)
            {
                flag++;
                cout << "NO
";
                continue;
            }
 
        }
        if(flag)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
        }
 
    }
 
 
 
 
 
    return 0;
}
 