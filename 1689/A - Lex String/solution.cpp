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
 
    while(t--)
    {
        vector<char>vec;
        int n,m,k;
        cin >> n >> m >> k;
        string a,b;
        cin >> a >> b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int cnt=0;
        bool x=true;
        int i=0,j=0;
        if(a[0]>b[0])
        {
            x=false;
        }
        while(i<n && j<m)
        {
 
            if(cnt<k && x==true)
            {
                vec.pb(a[i]);
                i++;
                cnt++;
                if(b[j]<a[i])
                {
                    x=false;
                    cnt=0;
                }
            }
            else if(cnt<k && x==false)
            {
 
                vec.pb(b[j]);
                j++;
                cnt++;
                if(b[j]>a[i])
                {
                    x=true;
                    cnt=0;
                }
            }
            if(cnt>=k && x==true)
            {
                x=false;
                cnt=0;
            }
            else if(cnt>=k && x==false)
            {
                x=true;
                cnt=0;
            }
 
 
        }
        for(int i=0;i<vec.size();i++)
        {
            cout << vec[i];
        }
        cout << "
";
    }
 
    checkmate
}