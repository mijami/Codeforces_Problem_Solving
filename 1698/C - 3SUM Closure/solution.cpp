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
        int n,k;
        cin >> n;
        vector<ll>vec,sat;
        ll mi=0,pl=0;
        map<int,int>mp;
        int cntp=0;
        int cntm=0;
        int cntz=0;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
            mp[a]++;
            if(a<0)
            {
                cntm++;
                mi=a;
                sat.pb(a);
            }
            if(a>0)
            {
                cntp++;
                pl=a;
                sat.pb(a);
            }
            if(a==0)
            {
                cntz++;
                if(cntz<10)
                {
                    sat.pb(a);
                }
            }
 
        }
 
        if(cntz==n)
        {
            cout << "YES" << "
";
 
        }
        else if(cntm==cntp && cntp==1 && cntz)
        {
            if(mi==(-1*pl))
            {
                cout << "YES" << "
";
            }
            else{
                cout << "NO" << "
";
            }
        }
        else if( (cntm>1 && cntz) || (cntp>1 && cntz) || cntp>2 || cntm>2)
        {
            cout << "NO" << "
";
        }
        else
        {
            int siz=sat.size();
            int flag=0;
            for(int i=0; i<siz; i++)
            {
                if(flag) break;
                for(int j=i+1; j<siz; j++)
                {
                    if(flag) break;
                    for(int k=j+1; k<siz; k++)
                    {
                        if(flag) break;
                        if(i!=j && j!=k && i!=k)
                        {
                            if(mp[vec[i]+vec[j]+vec[k]]==0)
                            {
                                flag++;
                            }
                        }
                    }
                }
            }
            if(flag)
            {
                cout << "NO" << "
";
            }
            else
                cout << "YES" << "
";
        }
 
    }
 
    checkmate
}