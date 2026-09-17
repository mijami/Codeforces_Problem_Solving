#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
 
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#define newline cout << "
";
 
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
 
        int a,b;
        cin >> a >> b;
 
        if(a>b)
        {
            swap(a,b);
        }
        int c=a,d=b;
        if(a==1 && b==1)
        {
            cout << "NO
";
            continue;
        }
        if(a%2==0)
        {
            c=a/2;
            d=b*2;
        }
        else if(b%2==0)
        {
            c=b/2;
            d=a*2;
        }
 
        if(c>d)
        {
            swap(c,d);
        }
        if(a==c && b==d)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
        }
 
 
 
 
    }
 
 
    return 0;
}