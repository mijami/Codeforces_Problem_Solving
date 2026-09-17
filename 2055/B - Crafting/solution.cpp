#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
 
        int n;
        cin >> n;
        vector<long long>vec,v;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            long long a;
            cin >> a;
            v.pb(a);
        }
        long long d=LONG_MAX;
        long long flag=0;
        long long cnt=0;
        long long d1=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]<v[i])
            {
                d1=v[i]-vec[i];
                cnt++;
            }
            if(vec[i]>=v[i])
            {
                d=min(d,vec[i]-v[i]);
            }
        }
        if( (cnt==0) ||  (cnt==1 && d1<=d) ) cout << "YES
";
 
        else
        {
            cout << "NO
";
        }
 
    }
 
 
 
    return 0;
}
 
 