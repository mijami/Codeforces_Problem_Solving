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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        sum+=a;
    }
    int x=0;
    for(int i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)!=1)
        {
            x++;
        }
    }
    cout << x << "
";
    checkmate
}