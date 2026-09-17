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
        vector<int>vec,v,v2;
        int n,k;
        cin >> n >> k;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v2.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            if((k | vec[i]) != k)
            {
                break;
            }
            flag= flag|vec[i];
        }
 
        for(int i=0;i<n;i++)
        {
            if((k | v[i]) != k)
            {
                break;
            }
            flag=flag |v[i];
        }
 
        for(int i=0;i<n;i++)
        {
            if((k | v2[i]) != k)
            {
                break;
            }
            flag= flag | v2[i];
        }
        if(flag== k)
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
 