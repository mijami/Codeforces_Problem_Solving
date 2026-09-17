#include <bits/stdc++.h>
using namespace std;
#define e4 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define checkmate return 0;
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>vec;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a>k && i<k)
            {
                cnt++;
            }
        }
        cout << cnt << "
";
    }
 
 
 
    checkmate
 
}