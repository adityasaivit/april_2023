#include <stdio.h>
struct off
{
  char name[100];
  int reg;
  int sal;
};
int main()
{
  int n;
  scanf("%d",&n);
  struct off em[n];
  for(int i=1;i<=n;i++)
    {
      scanf("%d",&em[i-1].reg);
      scanf("%d",&em[i-1].sal);
    }
  int a=em[0].sal;
  int b;
  for(int j=1;j<=n;j++)
    {
      if(em[j-1].sal>a)
      {
        a=em[j-1].sal;
        b=j-1;
      }
      
    }
  int c=0;
  for(int k=1;k<=n;k++)
    {
      if(em[k-1].sal==a)
      {
          c++;
      }
    }
  if(c>1)
  {
    printf("not possible");
  }
  else
  {
    printf("reg no         salary\n");
    printf("%d           %d",em[b].reg,a);
  }
}
