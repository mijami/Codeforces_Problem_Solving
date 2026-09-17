#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, b, d;
    cin >> n >> b >> d;
    int arr[n];
    long long int in=0;
    long long int c=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]<=b){
            in += arr[i];
        }
        if(in > d){
            in=0;
            c++;
        }
    }
 
    cout << c << "
";
    return 0;
}