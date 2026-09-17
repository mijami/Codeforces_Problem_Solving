#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >>t;
 
    while(t--)
    {
 
        int n;
        cin >> n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0 && i*2<=n)
            {
                cout << i << " " << i*2 << " ";
                mp[i]++;
                mp[i*2]++;
                int j=i*2;
                while(j*2<=n && mp[j*2]==0)
                {
                    cout << j*2 << " ";
                    mp[j*2]++;
                    j=j*2;
                }
            }
            else if(mp[i]==1 && mp[i*2]==0 && i*2<=n)
            {
                cout << i*2 << " ";
                mp[i*2]++;
                int j=i*2;
                while(j*2<=n && mp[j*2]==0)
                {
                    cout << j*2 << " ";
                    mp[j*2]++;
                    j=j*2;
                }
            }
            else if(mp[i]==0 && i*2>n)
            {
                cout << i << " ";
                mp[i]++;
            }
        }
        cout << "
";
 
 
 
 
    }
 
 
 
    return 0;
}