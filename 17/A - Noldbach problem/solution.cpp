#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
 
bool prime (int n)
  {
  for(int z = 2; z<=sqrt(double(n));z++)
     if( n%z == 0 )
        return false;
 
   return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
 
    vector<int>vec;
    for(int i=5;i<=1000;i+=2)
    {
        if(prime(i)){
            vec.push_back(i);
        }
    }
    vector<int> sec;
    for(int i=0;i<vec.size();i++)
    {
 
        if(prime(vec[i]+vec[i+1]+1)){
            sec.push_back(vec[i]+vec[i+1]+1);
        }
    }
    int i=0;
    while(sec[i] <= n)
    {
        i++;
    }
    if(i>=k)
    {
        cout << "YES" << "
";
    }
    else {
        cout << "NO" << "
";
    }
 
    checkmate
}