#include <stdio.h>
int f=0;
int b=-1;

int ar[100];
void insert(int n)
{
    b++;
    ar[b]=n;
}
void delete()
{
    printf("The element deleted is %d",ar[f]);
    f++;
}
void show()
{
    for(int u=f;u<=b;u++)
    {
        printf("%d ",ar[u]);
    }
}
int main()
{
    int c;
    while(c!=4)
    {
      scanf("%d",&c);
      int d=0;
        switch(c)
        {
            case 1:
                scanf("%d",&d);
                insert(d);
                break;
            case 2:
                if(f==b+1)
                {
                  printf("underflow error");
                }
              else
                {
                delete();
                }
                break;
            case 3:
              if(b+1==f)
              {
                printf("circular queue is empty");
              }
              else{
                show();
              }
                
                break;
            default:
                break;
        }
    }
}
