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
        int dup=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
            mp[a]++;
            if(mp[a]>1)
            {
                dup++;
            }
        }
 
        dup+=mp.size();
 
        vector <int > ans;
        while(ans.size()<n)
        {
            ans.push_back(dup);
            if(dup>mp.size())
            {
                dup--;
            }
        }
        reverse(ans.begin(), ans.end());
        for(int i=0; i<n; i++)
        {
            cout << ans[i] <<" ";
        }
        cout << "
";
 
    }
 
    checkmate
}