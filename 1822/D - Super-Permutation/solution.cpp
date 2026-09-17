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
        if(n%2 != 0 && n>1)
        {
            cout << "-1
";
            continue;
        }
        else if(n==1)
        {
            cout << 1 << "
";
            continue;
        }
        else
        {
 
            int k=n-1;
            int x=2;
            for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    vec.pb(n);
                }
                else if(i%2==0)
                {
                    vec.pb(x);
                    x+=2;
                }
                else {
                    vec.pb(k);
                    k-=2;
                }
            }
        }
 
        for(int i=0;i<n;i++)
        {
            cout << vec[i] << " ";
        }
        cout << "
";
 
    }
 
    return 0;
}