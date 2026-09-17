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
        int n,k;
        cin >> n >> k;
        vector<int>vec;
        char arr[n][k];
        char ans[n][k];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                ans[i][j]=arr[i][j];
            }
        }
 
        int flag=0;
        for(int i=0; i<n; i++)
        {
            int b=0,w=0;
            int u=0;
            for(int j=0; j<k; j++)
            {
                //cout << ans[i][j];
                if(ans[i][j]=='L')
                {
                    ans[i][j]='B';
                    ans[i][j+1]='W';
                    b++;
                    w++;
                }
                if(ans[i][j]=='U' && u==0)
                {
                    ans[i][j]='B';
                    ans[i+1][j]='W';
                    b++;
                    u=1;
                }
                if(ans[i][j]=='U' && u==1)
                {
                    ans[i][j]='W';
                    ans[i+1][j]='B';
                    b++;
                    u=0;
                }
 
            }
            //cout << b << " " << w;
 
            if(b!=w && b+w%2==0)
            {
 
 
                for(int j=0; j<k; j++)
                {
                    if(arr[i][j]=='U')
                    {
                        swap(ans[i][j],ans[i+1][j]);
                        b--;
                        w++;
                        if(b==w)
                        {
                            break;
                        }
                    }
                }
 
 
 
            }
            else if( (b+w)%2!=0)
            {
                flag++;
                break;
            }
        }
        for(int i=0; i<k; i++)
        {
            int b=0,w=0;
            for(int j=0; j<n; j++)
            {
                //cout << ans[i][j];
                if(ans[j][i]=='B')
                {
                    b++;
                }
                if(ans[j][i]=='W')
                {
                    w++;
                }
 
            }
            //cout << b << " " << w;
 
            if(b!=w && (b+w)%2==0)
            {
 
 
                for(int j=0; j<n; j++)
                {
                    if(arr[j][i]=='L')
                    {
                        swap(ans[j][i],ans[j][i+1]);
                        b--;
                        w++;
                        if(b==w)
                        {
                            break;
                        }
                    }
                }
 
 
 
            }
            else if( (b+w)%2!=0)
            {
                flag++;
                break;
            }
        }
        if(flag)
        {
            cout << "-1
";
            continue;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                cout << ans[i][j];
            }
            cout << "
";
        }
        cout << "
";
 
 
    }
 
 
 
}
 
 