#include <stdio.h>
int main()
{
  int sal;
  scanf("%d",&sal);
  int tax=0;
  if(sal<=150000)
  {
    tax=0;
  }
  else if((sal>150000)&&(sal<=300000))
  {
    tax=0.1*sal;
  }
  else if((sal>300000)&&(sal<=500000))
  {
    tax=0.2*sal;
  }
  else
  {
    tax=sal*0.3;
  }
  if(tax==0)
  {
    printf("no tax");
    
  }
  else
  {
    printf("%d",tax);
  }
}
