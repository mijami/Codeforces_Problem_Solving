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
        int n,k,x;
        cin >> n >> k >> x;
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        ll sum_arr[n+5]={0};
        ll rev_sum[n+5]={0};
        sort(vec.begin(),vec.end());
        ll sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=vec[i];
            rev_sum[i]=sum;
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=vec[i];
            sum_arr[i]=sum;
        }
        sum=INT_MIN;
 
        for(int i=0;i<=k;i++)
        {
 
            if(n-x-1-i < n-x-i && n-x-1-i >= 0)
            {
 
                sum=max(sum,sum_arr[n-x-1-i]-(rev_sum[n-x-i]-rev_sum[n-i]));
            //cout << sum << "
";
 
            }
            else if(n-x-i==0)
            {
                sum=max(sum, -(rev_sum[n-x-i]-rev_sum[n-i]));
            }
            else
            {
                sum=max(sum, -(rev_sum[0]-rev_sum[n-i]));
            }
        }
        if(x==n)
        {
            sum=max(sum,(sum_arr[n-1-k]*-1));
        }
        if(k==n)
        {
            sum=max(sum,(ll)0);
        }
        cout << sum << "
";
 
    }
 
 
 
    return 0;
}