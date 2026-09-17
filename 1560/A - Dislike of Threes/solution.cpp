#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    int l[1005];
    int k=0;
    for(int i=1; i<1667; i++)
    {
 
        if(i%10 == 3)
        {
 
        }
        else if(i%3 == 0){
        }
 
        else{
            l[k]=i;
 
            k++;
 
        }
    }
 
 
    cin >> t;
 
 
 
    int n;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        cout << l[n-1] << "
";
    }
 
 
    return 0;
}