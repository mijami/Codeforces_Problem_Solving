#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        vector<int>vec;
        vec.pb(a);
         vec.pb(b);
          vec.pb(c);
          int k=5;
        while(k--)
        {
            sort(vec.begin(),vec.end());
            vec[0]++;
        }
        cout << vec[0]*vec[1]*vec[2] << "
";
    }
 
    return 0;
}
 
 