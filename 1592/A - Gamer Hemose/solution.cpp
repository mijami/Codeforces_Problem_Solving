#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4; ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main()
{
    e4;
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,p;
        cin >> n >> p;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.rbegin(),vec.rend());
        ll sum=vec[0]+vec[1];
        ll s=vec[0];
        ll s2=vec[1];
 
        if(s>=p)
        {
            cout << 1 << "
";
        }
        else if(sum >=p)
        {
            cout << 2 << "
";
        }
        else
        {
            int l=(p/sum)-1;
            sum=sum*l;
            int cnt=l*2;
            int i=0;
 
            for(;;)
            {
                sum+=s;
                cnt++;
                if(sum>=p)
                {
                    i=cnt;
                    break;
                }
                sum+=s2;
                cnt++;
                if(sum>=p)
                {
                    i=cnt;
                    break;
                }
 
            }
 
            cout << i << "
";
        }
 
    }
 
    checkmate
}