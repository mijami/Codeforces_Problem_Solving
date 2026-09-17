#include <bits/stdc++.h>
using namespace std;
 
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >>t;
 
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        int i=0;
        int j=1;
        int flag=0;
        while(i<n && j<n)
        {
            if(vec[i] + k == vec[j])
            {
                cout << "YES" << "
";
                flag++;
                break;
            }
            else if(vec[i] + k < vec[j])
            {
                i++;
            }
            else{
                j++;
            }
        }
        if(flag==0){
            cout << "NO" << "
";
        }
 
    }
 
 
    checkmate
 
}