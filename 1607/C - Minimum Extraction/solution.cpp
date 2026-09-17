#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t, n;
    cin >> t;
 
    for(int i=0; i<t; i++){
        
        cin >> n;
        long long int arr[n];
        
        for(int l=0; l<n; l++){
            cin >> arr[l];
        }
        sort(arr, arr+n);
 
        long long int first = arr[0];
        long long int m=arr[0];
        
        for(int l=1; l<n; l++){
            long long int second= arr[l]-first;
            m= max(m, second);
            first=arr[l];
        }
        
        cout << m << "
";
    }
    return 0;
}