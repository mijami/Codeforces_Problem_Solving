#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    long long int n;
    cin >> n;
    if(n==0){
        cout << "1" << "
";
        return 0;
    }
    long long a = n%4;
    if(a==1){
        cout << "8" << "
";
    }
    if(a==2){
        cout << "4" << "
";
    }
    if(a==3){
        cout << "2" << "
";
    }
    if(a==0){
        cout << "6" << "
";
    }
    return 0;
}