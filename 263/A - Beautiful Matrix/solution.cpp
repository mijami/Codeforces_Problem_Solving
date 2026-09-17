#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int matrix[5][5];
    int I, J;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> matrix[i][j];
            if(matrix[i][j]==1){
                I=i;
                J=j;
            }
        }
    }
  
    int stepsr=0, stepsc=0;
    int sum=0;
    stepsc = abs(2-J);
    stepsr = abs(2-I);
    sum = stepsr+ stepsc;
    cout << sum << "
";
    return 0;
}