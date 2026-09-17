#include <bits/stdc++.h>
#define pb push_back
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
        int a,b;
        cin >> a >> b;
        int x=abs(a);
        int y=abs(b);
        if(x==y)
        {
            cout << x*2 << "
";
        }
        else
        {
            int k=min(x,y);
            int z=max(x,y);
            z=z-k;
            int ans=k*2;
            z=(z*2)-1;
            cout << ans+z << "
";
        }
 
 
 
    }
 
    return 0;
}