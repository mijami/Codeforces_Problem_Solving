#include <stdio.h>
int main()
{
    int t, n, i, j;
    scanf("%d", &t);
 
    for(i=0; i<t; ++i)
    {
        scanf("%d", &n);
        int a[n];
 
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[j]);
 
        }
        for(j = 0; j <= n-3; j++)
        {
            if(a[j] != a[j+1] && a[j] != a[j+2])
            {
                printf("%d
", j+1);
                break;
            }
            else if(a[j] != a[j+1] && a[j+1] != a[j+2])
            {
                printf("%d
", j+2);
                break;
            }
            else if(a[j] != a[j+2] && a[j+1] != a[j+2])
            {
                printf("%d
", j+3);
                break;
            }
        }
    }
    return 0;
    }
 
 
 