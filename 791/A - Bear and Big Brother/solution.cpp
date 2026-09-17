#include <bits/Stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int lamak, bob;
 
    cin >> lamak >> bob;
    int i;
    for(i=0; lamak <= bob; i++){
        lamak = lamak*3;
        bob = bob*2;
    }
    cout << i << "
";
 
    return 0;
}