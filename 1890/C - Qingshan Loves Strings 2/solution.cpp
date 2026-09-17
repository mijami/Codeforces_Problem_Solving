#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
#define newline cout << "
";
 
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
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        if(n%2!=0)
        {
            cout << "-1
";
            continue;
        }
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]!=n/2)
            {
                flag++;
            }
        }
 
 
        if(flag)
        {
 
            cout << "-1
";
        }
        else
        {
 
            vector<int>vec;
            string x="01";
 
            for(int i=0; i<n/2; i++)
            {
 
                if(a[i]==a[n-(i+1)] && a[i]=='1')
                {
                    vec.pb(i);
                    string b="";
                    string c="";
                    //string d="";
                    for(int j=0; j<i; j++)
                    {
                        b+=a[j];
                    }
                    for(int j=i; j<n; j++)
                    {
                        c+=a[j];
                    }
                    b+=x;
                    b+=c;
                    a=b;
                    n+=2;
                }
                else if(a[i]==a[n-(i+1)])
                {
 
                    vec.pb(n-i);
                    string b="";
                    string c="";
                    //string d="";
                    for(int j=0; j<=n-(i+1); j++)
                    {
                        b+=a[j];
                    }
                    for(int j=n-(i+1)+1; j<n; j++)
                    {
                        c+=a[j];
                    }
                    b+=x;
                    b+=c;
                    a=b;
                    n+=2;
                }
            }
 
            if(flag)
            {
                cout << "-1
";
            }
            else
            {
                cout << vec.size() << "
";
                for(int i=0; i<vec.size(); i++)
                {
                    cout << vec[i] << " ";
                }
                cout << "
";
            }
 
 
        }
 
 
 
    }
 
 
    return 0;
}