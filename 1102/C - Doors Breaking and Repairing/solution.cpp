#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    vector<int>vec;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
        if(a<=x)
        {
            cnt++;
        }
    }
    if(x>y)
    {
        cout << n << "
";
    }
    else{
        cout << (cnt+1)/2 << "
";
    }
    return 0;
}