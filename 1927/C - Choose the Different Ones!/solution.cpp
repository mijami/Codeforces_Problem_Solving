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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int>vec,vect;
        map<int,int>mp,mp2,ansm;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            if(mp[a]==0 && a<=k)
            {
                vec.pb(a);
            }
 
            mp[a]++;
        }
        for(int i=0; i<m; i++)
        {
            int a;
            cin >> a;
            if(mp2[a]==0 && a<=k)
            {
                vect.pb(a);
            }
            mp2[a]++;
        }
        n=vec.size();
        m=vect.size();
 
        sort(vec.begin(),vec.end());
        sort(vect.begin(),vect.end());
        vector<int>ans;
 
        int j=k/2;
        int j2=k/2;
 
 
 
 
        for(int i=0; i<n; i++)
        {
            if(mp[ vec[i]] && mp2[vec[i]]==0 && j)
            {
                ans.pb(vec[i]);
                ansm[vec[i]]++;
                j--;
            }
        }
 
        for(int i=0; i<m; i++)
        {
            if(mp[vect[i]]==0 && mp2[vect[i]] && j2)
            {
                ans.pb(vect[i]);
                ansm[vect[i]]++;
                j2--;
            }
        }
        if(j)
        {
            for(int i=0; i<n; i++)
            {
                if(ansm[vec[i]]==0 && j)
                {
                    ans.pb(vec[i]);
                    ansm[vec[i]]++;
                    j--;
                }
            }
        }
 
        if(j2)
        {
            for(int i=0; i<m; i++)
            {
 
                if(ansm[vect[i]]==0 && j2)
                {
                    ans.pb(vect[i]);
                    ansm[vect[i]]++;
                    j2--;
                }
            }
        }
 
 
        if(ans.size()==k)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
 
 
 
 
 
 
 
    }
 
 
    return 0;
}