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
 
        int q;
        cin >> q;
        map<int,int>mp,mp2;
 
        vector<int>vec,ans;
        for(int j=0; j<q; j++)
        {
 
            int n;
            cin >>  n;
            for(int i=0; i<n; i++)
            {
                int a ;
                cin >> a;
                mp[a]++;
                mp2[a]=j+1;
            }
 
        }
        int arr[q+20]= {};
        for(auto x:mp2)
        {
 
            arr[x.second]=x.first;
 
        }
        int f=0;
        for(int i=1;i<q+1;i++)
        {
            if(arr[i]==0)
            {
                f++;
                break;
            }
        }
        if(f)
 
        {
            cout << "-1
";
            continue;
        }
        for(int i=1; i<q+1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "
";
 
 
 
 
    }
    return 0;
 
}