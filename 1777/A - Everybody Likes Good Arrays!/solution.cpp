#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define ll long long int
#define checkmate return 0;
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
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i-1]%2==0 && i>0 &&vec[i]%2==0)
            {
                cnt++;
            }
            if(vec[i-1]%2!=0 && i>0 &&vec[i]%2!=0)
            {
                cnt++;
            }
        }
        cout << cnt << "
";
    }
 
    checkmate
}