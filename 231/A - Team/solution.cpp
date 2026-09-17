#include <bits/Stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a, b ,c;
    int n;
    cin >> n;
 
    int I=0;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        if(a+b+c == 2 || a+b+c == 3){
            I++;
        }
 
    }
    cout << I << "
";
    return 0;
}
 