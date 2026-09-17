#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#define newline cout << "
";
 
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
        int n;
        cin >> n;
        int arr[n][n];
        vector<int>vec,v;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> arr[i][j];
            }
        }
 
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int flag=0;
            ll k;
            for(int j=0; j<n; j++)
            {
                if(i!=j && flag==0)
                {
                    flag++;
                    k=arr[i][j];
                }
                else if(i!=j && flag!=0)
                {
                    k=k&arr[i][j];
                }
            }
 
            vec.pb(k);
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if( (vec[i]|vec[j]) != arr[i][j] && i!=j)
                {
                    ans=1;
                }
            }
        }
        if(ans)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
            for(int i=0; i<n; i++)
            {
                cout << vec[i] << " ";
            }
            cout << "
";
 
        }
 
 
 
 
 
 
 
 
 
    }
 
 
    return 0;
}