#include <bits/stdc++.h>
using namespace std;
#define e4 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long int
#define checkmate return 0;
int fact(int n);
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
int fact(int n)
{
    if(n==0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main()
{
    e4
 
    string a,b;
    cin >> a  >> b;
    int n=b.size();
    int m=a.size();
    if(n!=m)
    {
        cout << "0.000000000000" << "
";
        return 0;
    }
    int k=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='+')
        {
            k++;
        }
        else
        {
            k--;
        }
    }
    int q=0;
    int k2=0;
    for(int i=0; i<n; i++)
    {
        if(b[i]=='?')
        {
            q++;
        }
        else if(b[i]=='+')
        {
            k2++;
        }
        else
        {
            k2--;
        }
    }
    int x=k-k2;
    if(q==0 && k2==k)
    {
        cout << "1.000000000000" << "
";
    }
    else if(q==0 && k2!=k)
    {
        cout << "0.000000000000" << "
";
    }
 
    else if(x > q)
    {
        cout << "0.000000000000" << "
";
    }
    else if(x <= q)
    {
        int temp=q-x;
        if(temp % 2 !=0)
        {
            cout << "0.000000000000" << "
";
        }
        else
        {
 
            double all= pow(2,q);
            int y=(q-x)/2;
            double ans = nCr(q,x+y);
            cout << fixed << setprecision(12) << ans/all << "
";
        }
    }
 
 
 
 
    checkmate
 
}