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
    cin >> t;
    int sz=26;
    while(t--)
    {
        string a;
        cin >> a;
        int m=0;
        int n=a.size();
        vector<bool> prev(sz, false);
        for(auto &i :a)
        {
            if(prev[i-'a'])
            {
                m+=2;
                for(int j=0;j<sz;j++)
                {
                    prev[j]=false;
                }
            }
            else
                prev[i-'a']=true;
        }
        cout << n-m << "
";
    }
 
    checkmate
}