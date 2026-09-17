#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
 
        map<char,int>mp;
 
        char x=a[n-1];
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i] != x)
            {
                cnt++;
            }
        }
        cout << cnt << "
";
    }
}