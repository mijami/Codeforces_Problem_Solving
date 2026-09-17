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
        int n,k;
        cin >> n >> k;
        vector<int>vec,v;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int cnt0=0;
        int cnt1=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==vec[0])
            {
                cnt0++;
                j=i;
                if(cnt0==k)
                {
                    break;
                }
            }
        }
        for(int i=n-1;i>j;i--)
        {
            if(vec[i]==vec[n-1])
            {
                cnt1++;
                if(cnt1==k)
                {
                    break;
                }
            }
        }
        if(cnt0==k && cnt1==k)
        {
            cout << "YES
";
        }
        else if(vec[0]==vec[n-1] && (cnt0==k || cnt1==k))
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
 
 
 
 
 
 
 
 
    }
 
 
 
 
 
    return 0;
}
 