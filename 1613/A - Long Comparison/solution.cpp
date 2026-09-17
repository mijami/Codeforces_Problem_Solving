#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
 
    while(t--)
    {
        string a,b;
        int n,m;
        cin >> a >> n;
        cin >> b >> m;
        if((a.size()+n) > (b.size()+m))
        {
            cout << ">" << "
";
        }
        else if((a.size()+n) < (b.size()+m))
        {
            cout << "<" << "
";
        }
        else
        {
            vector<int>vec,v;
 
            int x=max(a.size(),b.size());
            int as=x-a.size();
            int bs=x-b.size();
            for(int i=0;i<a.size();i++)
            {
                vec.pb((a[i]-'0'));
            }
            for(int i=0;i<as;i++)
            {
                vec.pb(0);
            }
            for(int i=0;i<b.size();i++)
            {
                v.pb((b[i]-'0'));
            }
            for(int i=0;i<bs;i++)
            {
                v.pb(0);
            }
 
            int flag=0;
            for(int i=0;i<x;i++)
            {
                if(vec[i]>v[i])
                {
                    flag=1;
                    break;
                }
                else if(vec[i]<v[i])
                {
                    flag=-1;
                    break;
                }
            }
            if(flag==1)
            {
                cout << ">" << "
";
            }
            else if(flag==-1)
            {
                cout << "<" << "
";
            }
            else
                cout << "=" << "
";
        }
 
    }
 
    checkmate
}