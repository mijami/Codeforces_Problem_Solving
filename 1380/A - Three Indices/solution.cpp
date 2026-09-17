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
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int a,b,c;
        int flag=0;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                a=i;
                b=i+1;
                c=i+2;
                flag++;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << "
";
            cout << a << " " << b << " " << c << "
";
        }
        else
            cout << "NO" << "
";
 
    }
 
 
 
    checkmate
}