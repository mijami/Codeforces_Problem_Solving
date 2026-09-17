#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#define newline cout << "
";
 
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
        ull n,m;
        cin >> n >> m;
 
 
        vector<ull>vec,pres;
        for(int i=0; i<n; i++)
        {
            ull a;
            cin >> a;
            vec.pb(a);
 
        }
        unsigned long long int sum=0;
 
        int flag=0;
 
        for(int i=0;i<n;i++)
        {
            sum+=vec[i];
            pres.pb(sum);
        }
        for(int i=1;i<n;i++)
        {
            if(pres[flag]+vec[i] >= (i+1)*m )
            {
                flag=i;
            }
        }
 
 
        if(flag+1==n)
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