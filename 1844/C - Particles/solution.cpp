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
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        long long int sum=0,sum2=0;
        int fl=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && vec[i]>0)
            {
                sum+=vec[i];
                fl++;
            }
            if(i%2!=0 && vec[i]>0)
            {
                sum2+=vec[i];
                fl++;
            }
        }
        sort(vec.begin(),vec.end());
        if(fl)
        {
            cout << max(sum,sum2) << "
";
        }
        else
        {
            cout << vec[n-1] << "
";
        }
 
    }
 
 
 
 
 
    return 0;
}
 