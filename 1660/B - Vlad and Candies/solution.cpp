#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
 
        int n;
        cin >> n;
        vector<int >vec;
        int a;
 
        for(int i=0; i<n; i++)
        {
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.rbegin(),vec.rend());
        if(n==1 && vec[0]>1)
        {
            cout << "NO" << "
";
        }
        else if(vec[0]-vec[1]>1)
        {
            cout << "NO" << "
";
        }
        else {
            cout << "YES" << "
";
        }
 
    }
 
 
    return 0;
}