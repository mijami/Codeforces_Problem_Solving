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
        int n,k,x;
        cin >> n >> k >> x;
        int cnt=0;
        ll s=0;
        int I=-1;
        for(int i=0;i<n;i++)
        {
            if(i==k)
            {
                continue;
            }
            else if(i<=x && i<k)
            {
                s+=i;
                cnt++;
                I=i;
            }
        }
        if(k> x+1 || n<k)
        {
            s=-1;
        }
        
        else
        {
            while(cnt<n)
            {
                if(k!=x) s+=x;
                else s+=x-1;
                cnt++;
            }
        }
        cout << s << "
";
 
    }
 
    return 0;
}