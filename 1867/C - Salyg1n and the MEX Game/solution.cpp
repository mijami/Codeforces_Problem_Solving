#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
 
        vector<int>vec,v;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        int x=-1;
        for(int i=0; i<n; i++)
        {
            if(i!=vec[i])
            {
                x=i;
                break;
            }
        }
        if(x==-1)
        {
            x=n;
        }
 
        int cnt=0;
        while(1)
        {
            cnt++;
            if(cnt>=2*n+1)
            {
                break;
            }
            cout << x << "
";
            cout.flush();
            int y;
            cin >> y;
            if(y==-1)
            {
                break;
            }
            else
            {
                x=y;
            }
 
        }
 
 
 
 
    }
 
 
 
 
 
}