#include <bits/stdc++.h>
using namespace std;
#define e4 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long int
#define checkmate return 0;
 
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>vec;
 
        int x=0;
        for(int i=9;i>0;i--)
        {
            if(x>=n) break;
            vec.pb(i);
            x+=i;
        }
        sort(vec.begin(),vec.end());
        int k=x-n;
        int i=0;
        int s=vec.size();
        while(k!=0 && i<s)
        {
            if(vec[i]>1)
            {
                k--;
                vec[i]--;
            }
            else
            {
                i++;
            }
        }
        if(k==0)
        {
            for(int i=0;i<vec.size();i++)
            {
                cout << vec[i];
            }
            cout << "
";
 
        }
 
    }
 
 
 
    checkmate
 
}