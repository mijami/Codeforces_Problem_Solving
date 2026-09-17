#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
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
 
 
        vector<int>vec;
 
        int n,k;
        cin >> n >> k;
 
        string a;
        cin >> a;
        int cnt=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='B')
            {
                int y=k-1;
                cnt++;
                while(y-- && i<n)
                {
                    a[i]='B';
                    i++;
                }
            }
        }
 
 
        cout << cnt << "
";
 
 
 
    }
 
 
    return 0;
}