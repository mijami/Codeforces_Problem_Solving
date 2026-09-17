#include <bits/stdc++.h>
using namespace std;
#define e4 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long int
#define checkmate return 0;
 
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>vec;
        map<int,int>mp,m;
        int k=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            m[a]++;
        }
        for(int i=0;i<n;i++)
        {
            m[vec[i]]--;
            if(m[vec[i]]==1)
            {
                k=i+1;
            }
        }
        cout << k << "
";
 
 
    }
 
 
 
    checkmate
 
}