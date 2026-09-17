#include<bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    int k=sqrt(n);
    int f;
    if(k==sqrt(n)){
        cout << k*2 << "
";
    }
    else {
        k=k+1;
        f=k*k;
        if(n<=(f-k) && n>(k-1)*(k-1) ){
            cout << k*2-1 << "
";
        }
        else {
            cout << k*2 << "
";
        }
    }
 
 
    return 0;
}