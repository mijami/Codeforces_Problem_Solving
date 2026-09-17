#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 100001
#define newline cout << "
";
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
 
 
 
    int k=2*100005;
    int arr[200050];
    for(int i=0; i<200050; i++)
    {
        int sum=i;
        int s=0;
        if(sum>=10)
        {
            while(sum>0)
            {
                s+=sum%10;
                sum=sum/10;
 
            }
        }
        arr[i]=arr[i-1]+s+sum;
    }
 
 
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << "
";
 
    }
    return 0;
}