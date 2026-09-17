#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int k, r;
    cin >> k >> r;
    int re= k%10;
    int p=1;
    int l;
    for(;;){
        l=k*p;
        re= l%10;
 
        if(r==re || re==0)
        {
            break;
        }
        p++;
    }
    cout << p<< "
";
 
}