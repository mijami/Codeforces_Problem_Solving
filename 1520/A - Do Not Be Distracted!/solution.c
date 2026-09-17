#include <stdio.h>
#include <string.h>
int main()
{
 
 
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int N;
        scanf("%d", &N);
        char s[N];
        scanf(" %[^
]",s);
 
       
 
        int a=0;
        for(int k=0; k<N-2; k++)
        {
            for(int I=k; I<N-2; I++)
            {
 
                if(s[k] == s[I+2])
                {
                    if(s[k] != s[I+1])
                    {
                        
                        a=1;
                        break;
                    }
                }
            }
            if(a==1){
                break;
            }
 
        }
        if(a==1)
        {
            printf("NO
");
        }
        if(a==0)
        {
            printf("YES
");
        }
    }
 
 
 
 
    return 0;
}