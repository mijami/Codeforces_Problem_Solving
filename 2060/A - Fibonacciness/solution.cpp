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
    int t=1;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int cnt=0;
        int ans=0;
        for(int i=-200; i<200; i++)
        {
            cnt=0;
            if(b+i==c)
            {
                cnt++;
            }
            if(i+c==d)
            {
                cnt++;
            }
            if(a+b==i)
            {
                cnt++;
            }
            ans=max(cnt,ans);
        }
        cout << ans << "
";
 
 
 
 
 
 
    }
    return 0;
}