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
 
        int n;
        cin >> n;
        int arr[n]= {0};
        if(n>2)
        {
            arr[n-1]=2;
            arr[n/2]=1;
            int k=3;
            for(int i=0; i<n; i++)
            {
                if(arr[i]==0)
                {
                    cout << k << " ";
                    k++;
                }
                else
                {
                    cout << arr[i] << " ";
                }
            }
            cout << "
";
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout << i+1 << " ";
 
            }
            cout << "
";
        }
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
    return 0;
}
 