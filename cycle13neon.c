#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n;
    n=n*n;
    //int a=n;
    int n1=0;
    while(n!=0)
    {
        n1=n1+n%10;
        n=n/10;
    }
    printf("%d",n1);
    if(n1==a)
    {
        printf("neon number");
    }
}
