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
        int n;
        cin >> n;
        int fl=0;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin  >> a;
            if(a==i || a<i)
            {
                fl++;
            }
        }
        if(fl) cout <<"YES
";
        else cout << "NO
";
    }
    return 0;
}
 
 