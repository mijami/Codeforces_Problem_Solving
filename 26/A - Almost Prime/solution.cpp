#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define M 1000000
vector<int>vec;
bool marked[M+1];
void sieve(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (marked[i] == false)
        {
            vec.pb(i);
            for (int j = i + i; j <= n; j += i)
            {
                marked[j] = true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
 
    sieve(3000);
 
    ll a;
    cin >> a;
    int cnt=0;
    int ans=0;
    for(int j=5; j<=a; j++)
    {
        cnt=0;
        for(int i=0; i<vec.size(); i++)
        {
            if(j%vec[i]==0)
            {
                cnt++;
            }
 
            if(vec[i]>(a/2)) break;
 
        }
        if(cnt==2)
        {
            ans++;
        }
    }
    cout << ans << "
";
 
 
    checkmate
 
}