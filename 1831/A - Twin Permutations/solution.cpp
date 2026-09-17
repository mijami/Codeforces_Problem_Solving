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
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
 
        }
        int k=n+1;
        for(int i=0; i<n; i++)
        {
            cout << k-vec[i] << " ";
 
        }
        cout << "
";
 
 
    }
    return 0;
}