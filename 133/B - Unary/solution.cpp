#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string a;
    cin >> a;
    string b="";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='>')
        {
            b+="1000";
        }
        else if(a[i]=='<')
        {
            b+="1001";
        }
        else if(a[i]=='+')
        {
            b+="1010";
        }
        else if(a[i]=='-')
        {
            b+="1011";
        }
        else if(a[i]=='.')
        {
            b+="1100";
        }
        else if(a[i]==',')
        {
            b+="1101";
        }
        else if(a[i]=='[')
        {
            b+="1110";
        }
        else if(a[i]==']')
        {
            b+="1111";
        }
    }
    int n=b.size();
    unsigned long long int x=1;
    ll cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        if(b[i]=='1')
        {
            cnt+=x;
            cnt=cnt%1000003;
        }
        x=x*2;
        x=x%1000003;
    }
    cout << cnt%1000003 << "
";
 
 
 
 
    return 0;
}