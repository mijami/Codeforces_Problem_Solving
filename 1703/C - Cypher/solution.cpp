#include <bits/stdc++.h>
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<n; i++)
        {
            int m;
            cin >> m;
            for(int j=0; j<m; j++)
            {
                char aa;
                cin >> aa;
                if(aa=='D')
                {
                    arr[i]++;
                    arr[i]=arr[i]%10;
                }
                else
                {
                    arr[i]--;
                    arr[i]=arr[i]+10;
                    arr[i]=arr[i]%10;
                }
            }
 
        }
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "
";
 
 
    }
 
    checkmate
 
 
 
 
}