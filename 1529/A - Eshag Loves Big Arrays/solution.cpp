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
        int n;
        cin >> n;
        vector<int>vec;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(i>0 && vec[i]!=vec[i-1])
            {
               flag++;
            }
        }
        if(flag==0)
        {
            cout << 0 << "
";
            continue;
        }
        sort(vec.begin(),vec.end());
        int c=0;
        for(int i=1;i<n;i++)
        {
            if(vec[i]>vec[0])
                c++;
        }
        cout << c << "
";
 
 
    }
 
    checkmate
}