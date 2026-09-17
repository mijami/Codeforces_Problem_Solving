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
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int ans;
        int flag=0;
        int check;
        int fin;
        if(n==2)
        {
            cout << vec[0] << "
";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            check=vec[i];
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    continue;
                }
                if( flag==0)
                {
                    ans=vec[j]^vec[j+1];
                    flag++;
                }
                else if(flag && j+1<n)
                {
                    ans=ans^vec[j+1];
                }
 
            }
            if(check == ans)
            {
                cout << ans << "
";
                break;
            }
        }
    }
 
    checkmate
}