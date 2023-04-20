#include <stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int d;
    if(n>0)
    {
    d=prime(n);
    if(d==0)
    {
        printf("%x",n);
    }
    else
    {
        while(1)
        {
            int e=n%2;
            printf("%d",e);
            n=n/2;
            if(n==1)
            {
                printf("%d",n);
                break;
            }

        }
    }
    }
    else
    {
        printf("invalid");
    }
}
