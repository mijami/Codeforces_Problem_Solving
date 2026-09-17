#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,j;
        cin >> n >> j;
        vector<int>vec;
        int y=2*n;
        for(int i=0;i<y;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        int k=n;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if( (vec[k]-vec[i]) < j)
            {
                flag++;
                break;
            }
            k++;
        }
        if(flag)
        {
            cout << "NO" << "
";
        }
        else
            cout << "YES" << "
";
    }
 
    checkmate
}