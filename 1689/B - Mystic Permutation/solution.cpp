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
        int n;
        cin >> n;
        vector<int>vec,v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        if(n==1)
        {
            cout << "-1" << "
";
            continue;
        }
        v=vec;
        sort(vec.begin(),vec.end());
        bool x=false;
        int s;
        for(int i=0; i<n; i++)
        {
            if(vec[i]==v[i] && i+1<n)
            {
                swap(vec[i],vec[i+1]);
            }
            else if(vec[i]==v[i] && i+1==n)
            {
                swap(vec[i],vec[i-1]);
            }
        }
 
        for(int i=0; i<n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << "
";
    }
 
    checkmate
}