#include <stdio.h>
 
int main()
{
 
 
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int N;
        scanf("%d", &N);
        int a[N];
 
        for(int I=0; I<N; I++)
        {
            scanf("%d", &a[I]);
        }
        a[N]=0;
        for(int I=0; I<N; I++)
        {
            a[N]= a[N] + a[I];
 
        }
 
        if(a[N]>=N)
        {
            printf("%d
", abs(a[N]-N));
        }
 
        else if(N>a[N])
        {
            printf("1
");
        }
 
    }
    return 0;
}