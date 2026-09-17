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
        int n;
        cin >> n;
        string a;
        cin >> a;
        int stk=0;
        int close=0;
        //)((((
        int cnt=0;
        //
        for(int i=0; i<n; i++)
        {
            if(a[i]=='(' && stk==0 && close==0)
            {
                stk++;
            }
            else if(stk>0 && close==0 && (a[i]==')' || a[i]=='(') )
            {
                stk=0;
                cnt++;
            }
//            )(((((
            else if(a[i]==')' && close ==0 && stk==0)
            {
                close++;
            }
            else if(close>0 && stk==0 && a[i]=='(')
            {
                int j=i;
                int fl=0;
                while( j<n)
                {
                    stk++;
                    j++;
                    if(a[j]==')')
                    {
                        fl=j;
                        j=-1;
                        break;
                    }
 
                }
                if(j==-1)
                {
                    i=fl;
                    close =0;
                    cnt++;
                    stk=0;
                }
            }
            else if(close>0 && stk==0 && a[i]==')')
            {
                close=0;
                cnt++;
            }
 
        }
 
        cout << cnt << " " << close+stk << "
";
    }
 
    checkmate
}