#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int n;
    cin >> n;
    vector<int>vec,v;
    long long int s=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    sort(vec.begin(),vec.end());
 
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        vector<int>::iterator upper1;
        upper1=upper_bound(vec.begin(),vec.end(),x);
        cout << upper1-vec.begin() << " ";
    }
    checkmate
}