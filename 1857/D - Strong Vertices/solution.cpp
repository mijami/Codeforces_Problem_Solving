#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        int arr[n];
        int x=-INT_MAX;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            arr[i]=a[i]-b[i];
            x=max(x,arr[i]);
            mp[arr[i]]++;
        }
        cout << mp[x] << "
";
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                cout << i+1 << " ";
            }
        }
        cout << "
";
 
 
 
    }
 
 
 
 
 
}