#include<bits/stdc++.h>
 
using namespace std;
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string b;
 
    cin >> b;
    int len = b.length();
 
    int position=0, moves=0;
    for(int i=0; i<len; i++)
    {
        int bpos= b[i]-97;
        int steps = abs(position-bpos);
 
        if(steps>13){
            moves += 26-steps;
        }
        else {
            moves +=steps;
        }
        position = bpos;
 
    }
    cout << moves << "
";
 
 
}