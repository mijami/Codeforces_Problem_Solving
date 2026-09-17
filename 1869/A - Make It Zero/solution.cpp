#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(a==0)
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            cout << 0 << "
";
            continue;
        }
        int s=vec[0];
        for(int i=1;i<n;i++)
        {
            s=s^vec[i];
        }
        if(s==0)
        {
            cout << "1
";
            cout << "1 " << n << "
";
        }
        else if(n%2==0)
        {
            cout << 2 << "
";
            cout << "1 " << n << "
";
            cout << "1 " << n << "
";
        }
        else 
        {
            cout << 4 << "
";
            cout << "1 " << n << "
";
            cout << "1 " << n-1 << "
";
            cout << n-1 << " " << n << "
";
            cout << n-1 << " "<< n << "
";
        }
 
 
    }
 
 
 
    return 0;
 
}