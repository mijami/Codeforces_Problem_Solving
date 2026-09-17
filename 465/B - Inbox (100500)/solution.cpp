#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
 
            if(vec[i]==1 && cnt && vec[i-1]==0)
            {
                cnt+=2;
            }
            else if(vec[i]==1)
            {
                cnt++;
            }
        }
        cout << cnt << "
";
 
    }
 
    return 0;
}