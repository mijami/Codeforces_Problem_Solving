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
        vector<char>vec;
        for(int i=0;i<n;i++)
        {
            if(i+1==n && a[i]!=0)
            {
                int x=a[i]-'0';
                vec.pb('a'+x-1);
            }
 
            else if(a[i]!='0' && a[i+1]!='0' && a[i+2]=='0' && a[i+3]=='0' )
            {
                int x=a[i]-'0';
                vec.pb('a'+x-1);
                x=(a[i+1]-'0')*10;
                int y= (a[i+2]-'0');
                x=x+y;
                vec.pb('a'+x-1);
                i++;
                i++;
                i++;
            }
            else if(a[i]!='0' && a[i+1]!='0' && a[i+2]!='0')
            {
                int x=a[i]-'0';
                vec.pb('a'+x-1);
            }
            else if(a[i]<'3' && a[i+1]=='0' && a[i+2]=='0')
            {
                int x=(a[i]-'0')*10;
                vec.pb('a'+x-1);
                i++;
                i++;
            }
            else if(a[i]!=0 && a[i+1]!='0' && a[i+2]=='0')
            {
                int x=(a[i]-'0')*10;
                int y= (a[i+1]-'0');
                x=x+y;
                vec.pb('a'+x-1);
                i++;
                i++;
            }
            else if(a[i]!='0' && a[i+1]!='0')
            {
                int x=a[i]-'0';
                vec.pb('a'+x-1);
                i++;
            }
            
        }
        for(int i=0;i<vec.size();i++)
        {
            cout << vec[i];
        }
        cout << "
";
    }
 
    checkmate
}
 