#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n,k;
    cin >> n >> k;
    int a[105];
    double sum=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
 
    double S= sum;
    double l= k;
    double N = n;
    if(round(S/n)==k){
        cout << "0" << "
";
    }
    else{
        int i=1;
        for(;;){
            n++;
            S+=l;
 
            if(round(S/n)==l){
                break;
            }
            i++;
        }
        cout << i << "
";
    }
 
 
 
    return 0;
}