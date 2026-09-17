#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
 
        string a;
        cin >> a;
 
        int flag=0;
        vector<int>vec;
        int zoro=0,sanji=0;
        int n=a.size();
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='0')
            {
                zoro++;
                sanji=0;
                vec.pb(0);
            }
            if(a[i]=='1')
            {
                zoro=0;
                sanji++;
                vec.pb(1);
            }
            if( a[i]=='?' && (zoro || sanji==0))
            {
                vec.pb(0);
            }
            if(a[i]=='?' && sanji)
            {
                vec.pb(1);
            }
        }
        for(int i=0;i<vec.size();i++)
        {
            cout << vec[i] ;
        }
        cout << "
";
 
 
    }
 
    return 0;
}