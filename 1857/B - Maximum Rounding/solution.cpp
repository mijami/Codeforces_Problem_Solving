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
        string a;
        cin >> a;
        int n=a.size();
 
        vector<int>vec,v;
        for(int i=0;i<n;i++)
        {
            int x= a[i]-'0';
            vec.pb(x);
        }
        int l=0;
        for(int i=n-1;i>=0;i--)
        {
            if(vec[i]>=5 )
            {
                v.pb(0);
                l=v.size();
                if(i>0)
                {
                    vec[i-1]=vec[i-1]+1;
                }
                else{
                    v.pb(1);
                }
            }
            else
            {
                v.pb(vec[i]);
            }
        }
        for(int i=0;i<l;i++)
        {
            if(v[i]>0)
            {
                v[i]=0;
            }
        }
 
        for(int i=v.size()-1;i>=0;i--)
        {
            cout << v[i] ;
        }
        cout << "
";
 
    }
 
 
 
 
 
    return 0;
}