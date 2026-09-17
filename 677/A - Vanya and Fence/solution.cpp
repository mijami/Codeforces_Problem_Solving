#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int fnumber, height;
    int result;
    int fheight;
 
    cin >> fnumber;
    cin >> height;
 
    result = fnumber;
 
    for(int i = 0; i< fnumber; i++)
    {
        cin >> fheight;
        if(fheight > height){
            result++;
        }
    }
    cout << result << "
";
    return 0;
}