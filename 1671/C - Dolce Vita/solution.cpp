#include <bits/stdc++.h>
 
using namespace std;
 
#define e4 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define checkmate return 0;
#define pb push_back
 
int main()
{
    e4;
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
             int a;
             cin >> a;
             vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        long long int item=0;
        long long int costl=0;
 
        for(int i=0;i<n;i++)
        {
            int mx_day=x-vec[0]+1;
            int mn_day=0;
            long long int tmp=0;
            
 
            while(mn_day<=mx_day)
            {
                long long int mid=((mn_day+mx_day)/2);
                long long int cost=vec[i]+mid-1;
                long long int remain= x-(costl)-((mid-1)*i);
                if(cost>remain)
                {
                    mx_day=mid-1;
                }
                else
                {
                    tmp=mid;
                    mn_day=mid+1;
                }
 
            }
            item+=tmp;
            costl+=vec[i];
 
        }
        cout << item << "
";
    }
 
    checkmate
}