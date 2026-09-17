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
        int n;
        cin >> n;
        string a;
        cin >> a;
        if(n%2!=0)
        {
            cout << "-1
";
        }
        else
        {
            string b="",c="";
            int k=n/2;
            map<char,int>mp;
            int flag=0;
            for(int i=0; i<n; i++)
            {
                mp[a[i]]++;
                if(mp[a[i]]>k)
                {
                    flag++;
                }
            }
            if(flag)
            {
                cout << "-1
";
            }
            else
            {
                map<char,int>m;
 
                vector<char>vec;
 
                for(int i=0; i<n/2; i++)
                {
                    b+=a[i];
                }
                for(int i=n-1; i>=n/2; i--)
                {
                    c+=a[i];
 
                }
                for(int i=0; i<n/2; i++)
                {
                    if(b[i]==c[i])
                    {
                        m[c[i]]++;
                        if(m[c[i]]==1)vec.pb(c[i]);
                    }
                }
                vector<int>ve;
                int k=0;
                for(int i=0; i<vec.size(); i++)
                {
                    ve.pb(m[vec[i]]);
                    k+=m[vec[i]];
                }
                int x=0;
 
                if(ve.size())
                {
                    sort(ve.rbegin(),ve.rend());
                    x=max( (k+1)/2,ve[0]);
 
                }
                cout << x << "
";
 
 
            }
 
        }
 
    }
 
    return 0;
}