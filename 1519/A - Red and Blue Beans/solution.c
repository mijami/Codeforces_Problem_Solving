#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long int r,b,d;
 
    for(int i=0; i<t; i++)
    {
 
        scanf("%lld%lld%lld", &r, &b, &d);
 
        if(abs(r-b)<=d)
        {
            printf("YES
");
            continue;
        }
 
        if(r > b )
        {
 
            if((d+ 1)*b >= r)
            {
                printf("YES
");
            }
            else
            {
                printf("NO
");
            }
        }
        if(r < b )
        {
 
            if((d+1)*r >= b)
            {
                printf("YES
");
            }
            else
            {
                printf("NO
");
            }
        }
 
 
 
    }
    return 0;
 
}