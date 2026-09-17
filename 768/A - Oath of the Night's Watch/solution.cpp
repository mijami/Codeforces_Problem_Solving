#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k=0;
    int flag=arr[0];
    sort(arr,arr+n);
    for(int i=1; i<n-1; i++){
        if(arr[i] > arr[0] && arr[i] < arr[n-1]){
            k++;
        }
    }
    cout << k << "
";
 
    return 0;
}