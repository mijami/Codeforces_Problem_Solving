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
        map<int,int>mp;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a%2!=0) a+=a%10;
            if(mp[a]==0)
            {
                mp[a]++;
                vec.pb(a);
                if(a%10==0)
                {
                    flag++;
                }
            }
        }
        sort(vec.begin(),vec.end());
        int k=vec.size();
 
        if(flag==1 && flag==k)
        {
            cout << "YES
";
            continue;
        }
        else if(flag>0)
        {
            cout << "NO" << "
";
            continue;
        }
        int x;
        for(int i=0;i<k;i++)
        {
            while(vec[i]%10 != 2)
            {
                x= vec[i]%10;
                vec[i]=vec[i]+x;
            }
        }
        for(int i=1;i<k;i++)
        {
            if((vec[i]-vec[i-1]) % 20 !=0)
            {
                flag=-1;
                break;
            }
        }
        if(flag==-1)
        {
            cout << "NO" << "
";
        }
        else
        {
            cout << "YES" << "
";
        }
    }
 
    checkmate
}