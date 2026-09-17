#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    int arr[n]={},brr[n]={};
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(i==0) x=arr[0];
        if(i>0) x= arr[i] | x;
 
    }
    for(int i=0;i<n;i++)
    {
 
        cin >> brr[i];
        if(i==0) y=brr[0];
        if(i>0) y= brr[i] | y;
 
    }
    cout << x + y << "
";
 
 
 
    return 0;
}