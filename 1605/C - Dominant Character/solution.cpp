#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
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
        int dis=-1;
        int dist=99999999;
        int cnt=0;
        int din;
        char b='b';
        char c='c';
        string k="";
        map<char,int>mp;
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            k+=x;
            if(x=='a' && cnt==0)
            {
                cnt++;
                din=i;
                mp[x]++;
            }
            else if(cnt && x!='a')
            {
                mp[x]++;
                //cout << x << " " << mp[x] << " ";
            }
 
            else if(cnt && x=='a')
            {
                mp[x]++;
                if(mp[x]>mp[b] && mp[x]>mp[c])
                {
                    dist=min(dist, i-din+1);
                    cnt++;
                }
 
                din=i;
                mp[b]=0;
                mp[c]=0;
                mp[x]=1;
            }
        }
        if(cnt>1)
        {
            cout << dist << "
";
        }
        else if(k.find("abbacca") != string::npos ||
                k.find("accabba") != string::npos  )
        {
            cout <<"7
";
        }
 
        else
        {
            cout << "-1
";
        }
 
 
    }
 
 
 
}
 
 