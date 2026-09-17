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
        vector<int> vec,vec2,vec3;
        int l=0,k=0,t=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            vec2.pb(a);
 
            if(a<0)
            {
                l++;
            }
 
        }
        sort(vec2.begin(),vec2.end());
        int flag=0;
        if(vec==vec2)
        {
            cout << "YES" << "
";
        }
        else
        {
            for(int i=0;i<l;i++)
            {
                vec[i]=(abs(vec[i]))*-1;
                //cout << vec[i] << " ";
            }
            for(int i=l;i<n;i++)
            {
                vec[i]=abs(vec[i]);
                //cout << vec[i] << " ";
 
            }
            vec2=vec;
            sort(vec.begin(),vec.end());
            if(vec!=vec2)
            {
                cout << "NO" << "
";
            }
            else
                cout << "YES" << "
";
        }
 
    }
 
    checkmate
}