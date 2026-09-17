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
    int cas=0;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        map<int,int>mp;
        char arr[n][k];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin >> arr[i][j];
            }
            mp[i]++;
        }
        int cnt=0;
        int pos=0;
        int neg=0;
        for(int i=0;i<k;i++)
        {
 
            for(int j=0;j<n;j++)
            {
                 if(arr[j][i]=='+' && mp[j])
                 {
                     pos++;
 
                 }
                 else if(mp[j] && arr[j][i]=='-')
                 {
                     neg++;
 
                 }
            }
            //cout << pos << " "  << neg << "
";
            if(pos==neg)
            {
                char x=arr[0][i];
                for(int j=0;j<n;j++)
                {
                    if(arr[j][i]!=x && mp[j])
                    {
                        mp[j]=0;
                        neg--;
                    }
                }
            }
            else if(pos>neg && arr[0][i]=='+')
            {
                for(int j=0;j<n;j++)
                {
                    if(arr[j][i]=='-' && mp[j])
                    {
                        mp[j]=0;
                        neg--;
                    }
                }
            }
            else if(pos>neg && arr[0][i]=='-')
            {
                for(int j=0;j<n;j++)
                {
                    if(arr[j][i]=='+' && mp[j])
                    {
                        mp[j]=0;
                        pos--;
                    }
                }
            }
            else if(pos<neg && arr[0][i]=='+')
            {
                for(int j=0;j<n;j++)
                {
                    if(arr[j][i]=='-' && mp[j])
                    {
                        mp[j]=0;
                        neg--;
                    }
                }
            }
            else if(pos<neg && arr[0][i]=='-')
            {
                for(int j=0;j<n;j++)
                {
                    if(arr[j][i]=='+' && mp[j])
                    {
                        mp[j]=0;
                        pos--;
                    }
                }
            }
            cnt=max(pos,neg);
            pos=0;
            neg=0;
        }
        cout << cnt << "
";
 
 
    }
    return 0;
}
 
 