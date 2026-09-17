#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
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
 
        int n;
        cin >> n;
        vector<int>vec;
        ll s=1;
        int mi=10;
        int ma=-1;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a==0 && cnt==0)
            {
                a++;
                cnt++;
            }
            s=s*a;
 
            ma=max(a,ma);
            mi=min(a,mi);
        }
        if(cnt)
        {
            cout << s << "
";
            continue;
        }
        ll x=  (s/ma)*(ma+1);
        ll y= (s/mi)*(mi+1);
        cout << max(x,y) << "
";
 
 
    }
 
 
    return 0;
}