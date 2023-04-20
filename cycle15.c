#include <stdio.h>
void result(int *a,int *b)
{
    int z=*a;
    *a=*a+*b;
    *b=*b*z;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int *p=&m;
    int *q=&n;
    result(p,q);
    printf("%d %d",m,n);
}
