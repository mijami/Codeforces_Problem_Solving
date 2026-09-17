#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n ; i++)
    {
        cin >> arr[i];
 
    }
    int k;
    cin >> k;
    int a,b;
 
    for(int i=0; i<k ; i++)
    {
        cin >> a >> b;
 
        arr[a-2]+=b-1;
        arr[a]+=arr[a-1]-b;
        arr[a-1]=0;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << "
";
    }
    return 0;
}