#include <bits/stdc++.h>
 
using namespace std;
int prime(int &n){
 
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int a,b;
    cin >> a >> b;
    a++;
    while( !prime(a) ){
        a++;
    }
 
    if(a==b){
        cout << "YES" << "
";
    }
    else{
        cout << "NO" << "
";
    }
    return 0;
}