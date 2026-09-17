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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >> b;
            if(a-b >0)
            {
                cnt++;
            }
        }
        cout << cnt << "
";
 
 
    }
 
 
 
 
 
    return 0;
}
 