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
        int n,k,x;
        vector<int>vec;
 
        cin >> n >> k >> x;
        map<int,int>mp;
        int one=0,tw=0,thre=0;
        for(int i=1;i<=k;i++)
        {
            if(i==1 && i!=x)
            {
                one++;
            }
            if(i==2 && i!=x)
            {
                tw++;
            }
            if(i==3 && i!=x)
            {
                thre++;
            }
        }
 
        if(one)
        {
            cout << "YES
";
            cout << n << "
";
            for(int i=0;i<n;i++)
            {
                cout << "1 ";
            }
            cout << "
";
        }
        else if(tw && n%2==0)
        {
            cout << "YES
";
            cout << n/2 << "
";
            for(int i=0;i<n/2;i++)
            {
                cout << "2 ";
            }
            cout << "
";
        }
        else if(thre && tw &&  n%2!=0 && n>1)
        {
            cout << "YES
";
            int div=(n/2);
            cout << div << "
";
            for(int i=1;i<div;i++)
            {
                cout << "2 ";
            }
            cout << "3";
            cout << "
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
 