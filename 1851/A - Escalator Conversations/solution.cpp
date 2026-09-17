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
        int n,m,k,h;
        cin >> n >> m >> k >> h;
        vector<int>vec;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(abs(a-h)%k ==0)
            {
                if(abs(a-h)/k < m && abs(a-h)>0)
                {
                    cnt++;
                    //cout << a << " ";
                }
            }
        }
        cout << cnt << "
";
 
 
 
 
 
 
    }
 
 
 
 
 
    return 0;
}
 