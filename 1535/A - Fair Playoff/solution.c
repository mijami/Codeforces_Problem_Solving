#include <stdio.h>
int main()
{
    int a,b,c,d;
    int n;
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
 
        if(a>b && c>d)
        {
            if(b>c || d>a)
            {
                printf("NO
");
            }
            else
            {
                printf("YES
");
            }
        }
        if(b>a && d>c)
        {
            if(a>d || c>b)
            {
                printf("No
");
            }
            else
            {
                printf("YES
");
            }
        }
        if(a>b && d>c)
        {
            if(b>d || c>a)
            {
                printf("NO
");
            }
            else
            {
                printf("YES
");
            }
        }
        if(b>a && c>d)
        {
            if(a>c || d>b)
            {
                printf("NO
");
            }
            else
            {
                printf("YES
");
            }
        }
 
    }
    return 0;
}