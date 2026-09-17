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
        cin >> n;
        int a;
        int coin=0;
        vector<int > vec;
        int flag=0,flag2=0;
        for(int i=0; i<n; i++){
            cin >> a;
            vec.push_back(a);
        }
        for(int i=0; i<n; i++){
            if(vec[i]==0){
                flag2=i-1;
                break;
            }
        }
        for(int i=n-1; i>-1; i--){
 
            if(vec[i]==0){
                flag=i+1;
                break;
            }
        }
 
        cout << flag-flag2 << "
";
 
 
    }
    checkmate;
 
}