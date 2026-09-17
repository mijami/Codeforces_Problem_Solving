#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int k=0;
        int i=0,j=n-1;
        for(;;)
        {
            if(vec[i]==1)
            {
                while(j>i)
                {
                    if(vec[j]==0)
                    {
                        j--;
                        k++;
                        break;
                    }
                    j--;
                }
            }
            
            i++;
            if(i>=j)
            {
                break;
            }
        }
        cout << k << "
";
        
    }
    
    
    return 0;
}