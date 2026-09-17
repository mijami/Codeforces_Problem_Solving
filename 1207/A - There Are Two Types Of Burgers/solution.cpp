#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int bun,beef,chick;
        cin >> bun >> beef >> chick;
        int ham, cb;
        cin >> ham >> cb;
        long long int profit=0;
        if(ham>=cb)
        {
            while(bun>1 && beef>0)
            {
                profit+=ham;
                bun-=2;
                beef-=1;
            }
            while(bun>1 && chick>0)
            {
                profit+=cb;
                bun-=2;
                chick-=1;
            }
        }
        else{
            while(bun>1 && chick>0)
            {
                profit+=cb;
                bun-=2;
                chick-=1;
            }
            while(bun>1 && beef>0)
            {
                profit+=ham;
                bun-=2;
                beef-=1;
            }
        }
        cout << profit << "
";
 
    }
    return 0;
}
 
 