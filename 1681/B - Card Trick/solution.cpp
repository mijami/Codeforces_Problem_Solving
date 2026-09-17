#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> a,b;
        int n,m;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            a.pb(x);
        }
        cin >> m;
        ll s=0;
        for(int i=0;i<m;i++)
        {
            int x;
            cin >> x;
            b.pb(x);
            s+=x;
        }
        ll k=s;
        if(s>n)
        {
            k=s - (s/n * n);
        }
        else if(s==n)
        {
            k=0;
        }
        cout << a[k] << "
";
 
    }
 
    checkmate
}