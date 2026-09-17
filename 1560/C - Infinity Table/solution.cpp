#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    long long int a;
    long long int p;
    for(int i=0; i<t; i++){
 
        cin >> a;
        p=0;
        for(int i=0;;)
        {
 
            if(i*i >= a){
                p=i;
                break;
            }
            i++;
        }
        //got the layer
 
        a = a-((p-1)*(p-1));
        //got position on the layer
        if(p >= a){
            //layer >= element means position on the layer == position of the row
            //and p is the column of the element
            cout << a << " " << p << "
";
        }
        else{
            a = a-p;
            //got distance from the middle point = a, middle point is the layer size
            //p here is the row of the element
 
            cout << p << " " << p-a << "
";
        }
 
    }
 
    return 0;
 
 
}