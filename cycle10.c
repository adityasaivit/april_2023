#include <stdio.h>
int fac(int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}
int com(int n,int r1)
{
    int p=(fac(n))/(fac(r1)*fac(n-r1));
    return p;
}
int main()
{
    int n,r1,m,r2;
    scanf("%d",&n);
    scanf("%d",&r1);
    scanf("%d",&m);
    scanf("%d",&r2);
    int r=com(n,r1)*com(m,r2);
    printf("%d",r);
}
