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
 
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll>vec(n);
        for(int i=0;i<n;i++)
        {
            cin >> vec[i];
        }
        ll z=1;
        for(int i=0;i<n;i++)
        {
            z= (z*vec[i])/(__gcd(z,vec[i]));
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+= z/vec[i];
        }
        if(sum<z)
        {
 
        for(int i=0;i<n;i++)
        {
            cout << z/vec[i] << " ";
        }
 
        }
        else cout << "-1";
 
 
 
        cout <<  "
";
    }
 
 
    return 0;
}