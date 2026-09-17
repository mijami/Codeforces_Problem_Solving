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
 
        int cnt=1;
        int cnt2=1;
        int ans=0;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]=='<' && a[i-1]== '<')
            {
                cnt++;
            }
            else if(a[i]=='>'  && a[i-1]== '>')
            {
                cnt2++;
 
            }
            else if(a[i] != a[i-1])
            {
 
                ans =max(ans,cnt2);
                ans =max(ans,cnt);
                cnt=1;
                cnt2=1;
            }
        }
        ans =max(ans,cnt2);
        ans=max(ans,cnt);
 
 
        cout << ans+1 << "
";
 
 
    }
 
    return 0;
}