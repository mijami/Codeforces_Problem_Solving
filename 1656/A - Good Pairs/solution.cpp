#include <bits/stdc++.h>
using namespace std;
#define checkmate return 0;
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
        vector<int> vec,vec2;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
            vec2.push_back(a);
        }
        sort(vec.begin(), vec.end());
        int l,p;
        int i1=vec[0];
        int j1=vec[n-1];
        int k=0;
        for(int i=0; i<n;i++){
            if(vec2[i]==i1){
                l=i+1;
                k++;
            }
            if(vec2[i]==j1)
            {
                p=i+1;
                k++;
            }
 
        }
        
        cout << l << " " << p << "
";
 
 
    }
 
    checkmate
}