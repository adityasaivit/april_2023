#include <stdio.h>
#include <string.h>
struct play
{
  char na[100];
  int s;

};
int main()
{
  
  struct play g[100];
  int sum=0;
  for(int i=1;i<=11;i++)
    {
      char name[100];
      fgets(name,100,stdin);
      strcpy(g[i-1].na,name);
      //scanf("%s",&g[i-1].na[100]);
      scanf("%d",&g[i-1].s);
      sum+=g[i-1].s;
      
    }
  printf("%d",sum);
  int max=g[0].s;
  char maxn[100]="";
  for(int j=1;j<=11;j++)
    {
      printf("%s",g[j-1].na);

      if(g[j-1].s>=max)
      {
        max=g[j-1].s;
        strcpy(maxn,g[j-1].na);
        
      }
    }
  printf("  %d   %s",max,maxn);
  


}
