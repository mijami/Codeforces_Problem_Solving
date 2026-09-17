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
        int n,k,x;
        cin >> n >> k >> x;
 
        int cnt=0;
        n--;
        cnt++;
        while(n>0 && (k>0 || x >0))
        {
 
            if(k>0 && n >0)
            {
                k--;
                cnt++;
                n--;
                cnt++;
            }
            if(x>0 && n>0)
            {
                x--;
                cnt++;
                n--;
                cnt++;
            }
        }
        cout << cnt << "
";
 
 
    }
 
 
 
 
 
    return 0;
}
 