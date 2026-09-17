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
        string a;
        vector<string>vec;
        map<string,int>mp;
        for(int i=0;i<3;i++)
        {
            for(int i=0;i<n;i++)
            {
                cin >> a;
                mp[a]++;
                vec.pb(a);
            }
        }
        int k=0;
        for(int i=0;i<3;i++)
        {
            int x=0;
            for(int j=0;j<n;j++)
            {
                if(mp[vec[k]]==1)
                {
                    x+=3;
                    k++;
                }
                else if(mp[vec[k]]==2)
                {
                    x+=1;
                    k++;
                }
                else if (mp[vec[k]]==3)
                {
                    x+=0;
                    k++;
                }
            }
            cout << x << " ";
        }
        cout << "
";
 
 
    }
 
    checkmate
}