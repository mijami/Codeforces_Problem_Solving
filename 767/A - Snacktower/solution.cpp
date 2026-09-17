#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vector<int>vec;
    map<int ,int>mp;
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >>a;
        vec.push_back(a);
 
    }
    
    int k=n;
    for (int i = 0; i < n; i++)
    {
        mp[vec[i]]++;
        while(mp[k])
        {
            cout << k-- << " ";
        }
        cout << "
";
    }
 
 
    checkmate
}