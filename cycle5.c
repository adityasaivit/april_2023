#include <stdio.h>
int main()
{
  char name[10][100];
  int wage[10];
  for(int i=1;i<=2;i++)
    {
      int h;
      
      scanf("%d",&h);
      if((h<5)||(h>8))
      {
        printf("invalid");
      }
      else
      {
        if(h==5)
        {
          wage[i-1]=500;
        }
        else if(h==6)
        {
          wage[i-1]=500+(500*0.1);
        }
        else if(h==7)
        {
          wage[i-1]=500+(500*0.2);
        }
        else 
        {
          wage[i-1]=500+(500*0.3);
        }
      }
    }
  for(int j=1;j<=2;j++)
    {
      printf("%d\n",wage[j-1]);
    }
}
