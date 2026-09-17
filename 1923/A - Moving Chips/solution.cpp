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
        vector<int>vec;
        int flag=0;
        int cnt=0;
        int r=-1;
        int j=-1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a==1)
            {
                flag++;
            }
            if(flag && a==0)
            {
                cnt++;
                r=i;
            }
            if(flag && a==1)
            {
                j=i;
            }
            vec.pb(a);
        }
        if(r>j)
        {
            cnt=cnt-(r-j);
        }
        cout << cnt << "
";
 
 
 
 
    }
 
 
 
    return 0;
}