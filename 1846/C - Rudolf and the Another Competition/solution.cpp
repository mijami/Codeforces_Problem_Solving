#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
//B4TMAN
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,h;
        cin >> n >> m >>h;
        vector<int>vec;
        for(int i=0; i<m; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        int solve=0;
        long long penalty=0;
        long long total=0;
        int rnk=n;
        for(int i=0; i<m; i++)
        {
 
            if(penalty+vec[i]<=h)
            {
                penalty+=vec[i];
                total+=penalty;
                solve++;
            }
            else
            {
                break;
            }
        }
 
        for(int i=1; i<n; i++)
        {
            int slv=0;
            int penalty2=0;
            long long total2=0;
            vector<int>vect;
            for(int i=0; i<m; i++)
            {
                int a;
                cin >> a;
                vect.pb(a);
            }
            sort(vect.begin(),vect.end());
            for(int i=0; i<m; i++)
            {
 
                if(penalty2+vect[i]<=h)
                {
                    penalty2+=vect[i];
                    total2+=penalty2;
                    slv++;
                }
                else
                {
                    break;
                }
            }
            if(slv<solve)
            {
                rnk--;
            }
            else if(slv==solve && total<=total2)
            {
                rnk--;
            }
 
        }
        cout << rnk << "
";
    }
}