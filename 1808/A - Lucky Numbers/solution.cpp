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
        int a,b;
        cin >> a >> b;
        int ans=-1;
        int ans2;
        for(int i=b;i>=max(b-100,a);i--)
        {
            string a=to_string(i);
            sort(a.begin(),a.end());
            int n=a.size();
            int r=a[n-1]-'0';
            int l=a[0]-'0';
            if(r-l>ans)
            {
                ans=r-l;
                ans2=i;
 
            }
 
        }
        cout <<ans2 << "
";
    }
    return 0;
}
 
 