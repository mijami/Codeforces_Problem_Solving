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
        int a,b,c;
        cin >> a >> b >> c;
        int cnt=0;
 
        if(a<b)
        {
            swap(a,b);
        }
        while(a>b)
        {
 
            if(c>=abs(a-b))
            {
                a=b;
                b=a;
                cnt++;
                break;
            }
            else if(c<abs(a-b))
            {
                a=a-c;
                b=b+c;
                cnt++;
            }
        }
        cout << cnt << "
";
 
 
    }
 
 
 
    return 0;
 
}