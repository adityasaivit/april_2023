#include <stdio.h>
int main()
{
  int a=0;
  int ps=0;
  int p=0;
  int n=0;
  int ns=0;
  while(a!=-1)
    {
      int d;
      scanf("%d",&d);
      if(d>0)
      {
        ps=ps+d;
        p++;
      }
      else if(d==-1)
      {
        a=-1;
      }
      else
      {
        ns=ns+d;
        n++;
      }
      
    }
  printf("the average of positive %d\n",ps/p);
  printf("the average of negative %d",ns/n);
}
