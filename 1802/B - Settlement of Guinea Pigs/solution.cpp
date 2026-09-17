#include <bits/stdc++.h>
#define pb push_back
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
        int neg=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int cnt=0;
        int ans=0;
        int male=0;
        int female=0;
        int cage=0;
        int total=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==1)
            {
                total++;
                cnt++;
                if(cage)
                {
                    cnt--;
                    cage--;
                }
            }
            else if(vec[i]==2 && cnt)
            {
                male=total-1;
                female=total-male;
                int need= (male+1)/2 + (female+1)/2;
                if(cnt>need)
                {
                    cage=cnt-need;
 
                }
                else cage=0;
            }
        }
 
        cout << cnt;
 
        cout << "
";
 
    }
 
    return 0;
}