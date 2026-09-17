#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    long long int a,b;
    vector<long long int> v,v2;
    long long int n,m;
    cin >> n;
    map<long long int, long long  int > mp,mp2;
    for(long long int i=0;i<n;i++){
        cin >> a;
        v.pb(a);
        mp[a]=i+1;
        mp2[a]=n-i;
    }
    cin >> m;
    long long int va=0, p=0;
    for(long long int i=0; i<m;i++)
    {
        cin >> b;
        v2.pb(b);
        va+=mp[b];
        p+=mp2[b];
    }
    cout << va << " " << p << "
";
 
 
    checkmate
}