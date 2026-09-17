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
        int arr[n];
        ll sum=0;
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
            if(arr[i]%2==0)
            {
                even++;
            }
            else
                odd++;
        }
        if(even==n)
        {
            cout << "NO" << "
";
        }
        else if(odd==n && n%2==0)
        {
            cout << "NO" << "
";
        }
        else
            cout << "YES" << "
";
 
    }
 
    checkmate
}