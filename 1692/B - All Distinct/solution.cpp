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
        map<int,int>mp;
        int k=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            if(mp[a]>1)
            {
                k++;
            }
        }
        if(k%2==0)
        {
            cout << n-k << "
";
        }
        else
            cout << n-(k+1) << "
";
    }
 
    checkmate
}