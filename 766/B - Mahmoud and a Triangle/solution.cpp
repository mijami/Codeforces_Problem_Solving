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
 
 
    int n;
    cin >> n;
    vector<int>vec;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    sort(vec.begin(),vec.end());
    int flag=0;
    for(int i=0; i<n-2; i++)
    {
        // 1 2 4
        if( (vec[i+2] < (vec[i+1]+vec[i])) )
        {
            flag++;
            break;
        }
 
    }
    if(flag)
    {
        cout << "YES" << "
";
    }
    else
        cout << "NO" << "
";
 
 
 
    checkmate
}