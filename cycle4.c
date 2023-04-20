#include <stdio.h>
int main()
{
  char c;
  scanf("%c",&c);
  int sal;
  scanf("%d",&sal);
  int p;
  
  if(c=='A')
  {
    p=5;
    if(sal<10000)
    {
      p+=2;
    }
  }
  else if(c=='B')
  {
    p=10;
    if(sal<10000)
    {
      p+=2;
    }
  }
  
  int b=sal*p/100;
  printf("%d\n%d",b,b+sal);
}
