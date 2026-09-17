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
        int n;
        cin >> n;
        vector<int>vec,v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        v=vec;
        sort(vec.begin(),vec.end());
        if(vec[0]==vec[n-1] )
        {
            cout << "-1
";
            continue;
        }
        vec=v;
        int cnt=INT_MAX;
        int cnt2=-1;
        for(int i=0;i<n;i++)
        {
            if(vec[i-1]==vec[i+1] && i>0 && i<n-1 && vec[i]!=vec[i-1] )
            {
                cnt=min(cnt,i);
                cnt=min(cnt,n-i-1);
 
                if(cnt2!=i && vec[i]!=vec[0])
                {
 
                    if(cnt2!=-1) cnt= min(cnt,abs(cnt2-i)-1);
                    cnt2=i;
                }
 
            }
        }
        cout << cnt << "
";
 
 
    }
 
 
    return 0;
}