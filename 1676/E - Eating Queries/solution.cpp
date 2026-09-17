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
        int n,q;
        cin >> n >> q;
        vector<int>vec;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            sum+=a;
        }
        sort(vec.rbegin(),vec.rend());
        vector<ll> presum(n);
        presum[0] = vec[0];
        for (int i = 1; i < n; i++)
        {
            presum[i] = presum[i - 1] + vec[i];
 
        }
        while(q--)
        {
            int x;
            cin >> x;
            auto lower1 = lower_bound(presum.begin(), presum.end(), x);
            if(x>sum)
            {
                cout << "-1" << "
";
            }
            else
            {
                ll pos=lower1-presum.begin()+1;
                cout<<pos<<endl;
            }
        }
 
    }
 
 
    checkmate
}