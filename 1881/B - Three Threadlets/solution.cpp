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
 
        ll a,b,c;
        cin >> a >> b >> c;
 
 
        vector<int>vec;
        vec.pb(a);
        vec.pb(b);
        vec.pb(c);
 
 
        sort(vec.begin(),vec.end());
        int cnt=0;
        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i]!=vec[i+1])
            {
 
                ll k=vec[i+1]-vec[i];
                //cout << k << " ";
                vec.pb(k);
                vec[i+1]-=k;
                //cout << vec[i+1] << " ";
                cnt++;
                sort(vec.begin(),vec.end());
                i=0;
                if(cnt==3)
                {
                    break;
                }
            }
        }
 
 
 
        //cout << vec[vec.size()-1] <<  " ";
 
        if(cnt<4 && vec[0]==vec[vec.size()-1])
        {
            cout << "YES" << "
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