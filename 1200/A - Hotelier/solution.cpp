#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int n;
    cin >> n;
    int arr[10]={0};
    int l=0,r=9;
    for(int i=0;i<n;i++)
    {
        char a;
        cin >> a;
        if(a=='L')
        {
            for(int j=0;j<10;j++)
            {
                if(arr[j]==0)
                {
                    arr[j]=1;
                    break;
                }
            }
        }
        else if(a=='R')
        {
            for(int j=9;j>=0;j--)
            {
                if(arr[j]==0)
                {
                    arr[j]=1;
                    break;
                }
            }
        }
        else {
            int k=a-'0';
            arr[k]=0;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout << arr[i];
    }
    cout << "
";
 
 
 
    checkmate
}