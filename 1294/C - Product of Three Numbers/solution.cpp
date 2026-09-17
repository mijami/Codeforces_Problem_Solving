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
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                vec.pb(i);
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout << "NO" << "
";
            continue;
        }
        int k=n/vec[0];
        flag=0;
        for(int i=2;i<sqrt(k);i++)
        {
            if(k%i==0)
            {
                if(i != vec[0]) vec.pb(i);
                if(vec.size()==2)
                {
                    flag++;
                }
            }
        }
        if(flag==0)
        {
            cout << "NO" << "
";
            continue;
        }
        int x= n/(vec[1]*vec[0]);
        if(x != vec[0] && x != vec[1])
        {
            cout << "YES
";
            cout << vec[0] << " " << vec[1] << " " << n/(vec[1]*vec[0]) << "
";
        }
        else
        {
            cout << "NO" << "
";
        }
 
 
    }
 
    checkmate
}