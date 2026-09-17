#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>vec;
        for(int i=0;i<k;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
 
        long long sum=0;
        for(int i=0;i<k-1;i++)
        {
            if(vec[i]>1) {
                sum+=((vec[i]-1)*2)+1;
            }
            else sum+=vec[i];
        }
        cout << sum << "
";
 
 
 
 
    }
 
    return 0;
}
 
 