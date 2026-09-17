#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a;
    int A=0;
    int D=0;
 
    cin >> a;
 
    char game;
 
    for(int i=0; i< a; i++){
 
        cin >> game;
 
        if(game=='A'){
            A++;
        }
        else {
            D++;
        }
 
    }
    if(A>D){
        cout << "Anton
";
 
    }
    else if(D>A) {
        cout << "Danik
";
    }
    else {
        cout << "Friendship
";
    }
 
 
 
    return 0;
}