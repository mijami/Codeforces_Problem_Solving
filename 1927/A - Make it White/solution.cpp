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
        int n;
        cin >> n;
        string a;
        cin >> a;
        int flag=0;
        int st=0,en=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='B')
            {
                flag++;
            }
            if(flag==1 && a[i]=='B')
            {
                st=i;
                en=i;
            }
            if(flag>1 && a[i]=='B')
            {
                en=i;
            }
        }
        cout << (en-st)+1 << "
";
    }
 
 
    return 0;
}