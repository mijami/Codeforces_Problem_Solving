#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int y , w, d;
 
    cin >> y >> w;
 
    int x= max(y,w);
    double need = (double) (6-x+1);
 
    double chances = need/6;
 
    int i=1;
    double v;
    int test;
    for(;;){
        v= chances*i;
        test = (int)v;
        if(test == v){
            break;
        }
        i++;
    }
    cout << v << "/" << i << "
";
 
    return 0;
}
 
 