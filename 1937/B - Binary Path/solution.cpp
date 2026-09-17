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
        int n;
        cin >> n;
 
        string a,b;
        cin >> a >> b;
 
        string ans="",ans2="";
        ans+=a[0];
 
       // 0 0 1 1
 
       int cnt=1;
 
 
        int bb=0;
        for(int i=0;i<n;i++)
        {
            if(i==n-1 && bb==0)
            {
                ans2=ans;
                ans+=b[i];
                bb++;
            }
            else if(bb)
            {
                ans+=b[i];
            }
            else if(a[i+1]=='1' && b[i]=='0' &&  i+1<n && bb==0)
            {
                bb++;
                ans2=ans;
                ans+=b[i];
            }
            else if(a[i+1]=='0' && i+1<n) 
            {
                ans+=a[i+1];
            }
            else if(a[i+1]=='1' && b[i]=='1' &&  i+1<n)
            {
                ans+='1';
            }
        }
        int k=ans2.size();
        //cout << k << " ";
        for(int i=k-1;i>=0;i--)
        {
            if(a[i]==b[i-1] && i-1>=0)
            {
                cnt++;
            }
            else break;
        }
        
        cout << ans << "
";
        cout << cnt << "
";
 
 
 
    }
 
 
 
    return 0;
}