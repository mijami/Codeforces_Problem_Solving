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
    int cas=0;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>vec,v;
        vector<int>lr;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
 
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
 
        int l=-1,r=-1;
        int ans=-1;
        int in,out;
        int flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]!=vec[i])
            {
                flag=1;
            }
            if(v[i]<=v[i+1] && l==-1)
            {
                l=i+1;
                r=i+2;
            }
            else if(v[i]<=v[i+1] )
            {
                r=i+2;
            }
            else if(l>0 && r>0 && v[i]>v[i+1] )
            {
                if(r-l>ans && flag)
                {
                    in=l;
                    out=r;
                    ans=r-l;
                }
                l=-1;
                r=-1;
                flag=0;
            }
        }
        if(l>0 && r>0 && r-l>ans && flag)
        {
            in=l;
            out=r;
            ans=r-l;
        }
        cout << in << " " << out << "
";
    }
    return 0;
}
 
 