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
    cin >> t;
 
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>vec,v;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        v=vec;
        sort(v.begin(),v.end());
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]!=i)
            {
                vec.pb(i);
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            vec.pb(n);
        }
        k=k%(n+1);
        k--;
        int j=0;
        for(int i=vec.size()-1-k; i<vec.size(); i++)
        {
            cout << vec[i] << " ";
            j++;
            if(j==n)
            {
                break;
            }
        }
        if(j<n)
        {
            for(int i=0; i<vec.size(); i++)
            {
                cout << vec[i] << " ";
                j++;
                if(j==n)
                {
                    break;
                }
            }
        }
        cout << "
";
    }
 
 
 
}
 
 