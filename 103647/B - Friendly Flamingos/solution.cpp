#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        vector<int > vec;
        int n;
        cin >> n;
        int od=0;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            sum+=a;
            if(a%2!=0)
            {
                od++;
            }
        }
        sort(vec.begin(),vec.end());
        vector<int>::iterator lower, upper;
        int mean=sum/n;
        lower = lower_bound(vec.begin(), vec.end(), mean);
 
        int k = (lower - vec.begin());
 
        if((double)(sum-vec[k])/(n-1)==vec[k])
        {
            cout << "YES" << "
";
        }
        else cout << "NO" << "
";
 
    }
 
    checkmate
}