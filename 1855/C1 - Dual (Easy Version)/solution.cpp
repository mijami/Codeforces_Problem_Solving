#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
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
        vector<int>vec,v;
        int hi=-99;
        int l=99;
 
        int hin,lin;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(a>hi && a>0)
            {
                hi=a;
                hin=i+1;
            }
             if(a<l && a<0)
            {
                l=a;
                lin=i+1;
            }
        }
        v=vec;
        sort(v.begin(),v.end());
        if(v==vec)
        {
            cout << "0
";
            continue;
        }
        vector<pair<int, int> > mp;
        if(hi>0 && hi<2)
        {
 
            mp.push_back( make_pair(hin,hin) );
            mp.push_back( make_pair(hin,hin) );
            mp.push_back( make_pair(hin,hin) );
            hi=hi*8;
            vec[hin-1]=hi;
        }
        if(hi>0)
        {
 
            for(int i=0; i<n-1; i++)
            {
                if(vec[i]>vec[i+1])
                {
                    while(vec[i]>vec[i+1])
                    {
                        vec[i+1]+=hi;
                        mp.push_back( make_pair(i+2,hin) );
                        if(vec[i+1]>hi)
                        {
                            hi=vec[i+1];
                            hin=i+2;
                        }
                    }
                }
            }
            cout << mp.size() << "
";
            for(int i=0; i<mp.size(); i++)
            {
                cout << mp[i].first << " " << mp[i].second << "
";
            }
            cout << "
";
 
        }
        else
        {
 
            for(int i=n-1; i>0; i--)
            {
                if(vec[i]<vec[i-1])
                {
 
                    while(vec[i]<vec[i-1])
                    {
                        vec[i-1]+=l;
 
                        mp.push_back( make_pair(i,lin) );
                        if(vec[i-1]<l)
                        {
                            l=vec[i-1];
                            lin=i;
                        }
                    }
                }
            }
            cout << mp.size() << "
";
            for(int i=0; i<mp.size(); i++)
            {
                cout << mp[i].first << " " << mp[i].second << "
";
            }
            cout << "
";
 
        }
    }
 
 
 
 
 
    return 0;
}