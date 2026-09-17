#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n
    ];
 
    int c=0;
 
    int p=0;
 
    for(int i=0;i<n; i++){
        cin >> a[i];
        if(a[i]>0){
            p+=a[i];
        }
        else if(a[i]==-1){
            if(p>0){
 
                p--;
            }
            else{
                c++;
            }
        }
    }
    cout << c << "
";
 
 
    return 0;
}