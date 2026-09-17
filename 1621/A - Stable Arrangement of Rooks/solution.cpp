#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    double a,b, t;
    cin >> t;
    while(t--)
    {
        int flag=0;
        cin >> a >> b;
        int x=a;
        if( ((x%2!=0 && b*2 > a+1) || (x%2==0 && b*2 > a))  && b != 1){
            cout << "-1" << "
";
        }
        else{
            for(int i=0; i<a; i++){
                for(int I=0; I<a;I++){
                    if(I%2==0 && I==i && flag<b){
                        cout << "R";
                        flag++;
 
                    }
                    else cout << ".";
                }
                cout << "
";
            }
 
        }
    }
 
    return 0;
 
}
 