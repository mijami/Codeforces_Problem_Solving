#include <bits/stdc++.h>
using namespace std;
 
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >>t;
 
    while(t--)
    {
        int n, b, x, y;
        vector<int>vec(n+5);
        cin >> n >> b >> x >> y;
        int i=1;long long int sum=0;
        while(i<=n)
        {
 
            if( (vec[i-1]+x) <= b)
            {
                vec[i]=vec[i-1] + x;
 
            }
            else
            {
                vec[i] = vec[i-1] - y;
            }
            sum+=vec[i];
            i++;
        }
        cout << sum << "
";
 
 
    }
 
 
    checkmate
 
}
 
 