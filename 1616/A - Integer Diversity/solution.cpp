#include <bits/stdc++.h>
 
using namespace std;
 
#define    checkmate    return 0;
 
 
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
        vector<int > vec;
        map<int, int > mp;
        int two=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(abs(a));
            mp[abs(a)]++;
 
        }
        int ans=mp.size();
        for(auto i:mp){
            if(i.second >1 && i.first!=0)
            {
                ans++;
            }
        }
 
        cout << ans << "
";
 
    }
    checkmate
}
//1 0 -3 0 4 -4 2 2 -4 0
//1 0 -3 4 -4 2