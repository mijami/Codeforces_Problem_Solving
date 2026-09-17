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
        int n;
        cin >> n;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        map<char,int>mp;
        char arr[26];
        arr[0]='a';
        for(int i=1; i<26; i++)
        {
            arr[i]=arr[i-1]+1;
 
        }
        for(int i=0; i<n; i++)
        {
 
            for(int j=0; j<26; j++)
            {
                if(mp[arr[j]]==vec[i])
                {
                    cout << arr[j];
                    mp[arr[j]]++;
                    break;
                }
            }
 
        }
        cout << "
";
    }
 
 
    return 0;
}