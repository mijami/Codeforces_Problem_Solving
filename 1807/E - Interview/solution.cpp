#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
 
using namespace std;
 
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>vec;
        ll sum=0;
        vec.pb(0);
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            sum+=a;
            vec.pb(sum);
        }
        int l = 1, r = n;
        while (l < r)
        {
 
            int mid = (l + r) / 2;
            cout <<"? " << mid-l+1 << " ";
            ll x;
 
                for(int i=l; i<=mid; i++)
                {
                    cout << i << " ";
                }
                cout << "
";
 
                fflush(stdout);
 
 
            cin >> x;
            ll origin=vec[mid]-vec[l-1];
 
            if (x==origin) l = mid + 1;
            else r = mid;
        }
 
        printf("! %d
", l);
        fflush(stdout);
    }
    return 0;
 
}