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
        int n;
        cin >> n ;
        vector<int>vec,v;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        map<int,int>mp;
        v=vec;
        sort(v.begin(),v.end());
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0 && vec[i]%2!=0)
            {
                flag++;
            }
            else if(v[i]%2!=0 && vec[i]%2==0)
            {
                flag++;
            }
        }
        if(flag)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
        }
 
 
 
 
 
 
 
 
 
    }
 
 
 
 
 
    return 0;
}
 