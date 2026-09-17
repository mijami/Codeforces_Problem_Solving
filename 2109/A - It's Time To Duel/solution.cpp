#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define newline cout << "
";
using namespace std;
 
static const int UNCOLORED = -1;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
 
    int t;
    cin >> t;
    while(t--)
    {
 
        int n;
        cin >> n;
        vector<int>vec,v,v2;
        int mz=0, m1=0;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(vec[i]==vec[i-1] && vec[i]==0 && i>0)
            {
                flag++;
            }
            if(a==0)
            {
                mz++;
            }
            else m1++;
        }
        if(mz==m1 && n==2)
        {
            cout << "NO
";
        }
        else if(mz==n || m1==n || flag)
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