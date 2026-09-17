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
        vector<int>vec,v;
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(i+1<n && vec[i]>vec[i+1])
            {
                j++;
                i++;
            }
        }
        cout << j << "
";
 
    }
 
    checkmate
}