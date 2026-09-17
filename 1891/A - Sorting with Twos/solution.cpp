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
        int n,m;
        cin >> n;
        vector<int>vec,v;
 
 
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        v=vec;
        sort(v.begin(),v.end());
        if(v==vec)
        {
            cout << "YES
";
            continue;
        }
 
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(vec[i]>vec[i+1])
            {
                int j=i+1;
                int k=1;
                for(;;)
                {
 
                    k=k*2;
                    if(k>j)
                    {
                        k=k/2;
                        break;
                    }
                }
 
                if(k<j)
                {
                    flag++;
                }
            }
        }
        if(flag)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
        }
 
 
    }
 
 
    return 0;
}