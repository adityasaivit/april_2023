#include <stdio.h>
int t=-1;int ar[100];
void push(int n)
{
    t++;
    ar[t]=n;
}
void pop()
{
    printf("The element %d is deleted\n",ar[t]);
    t--;
}
void show()
{
    for(int i=t;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
  printf("\n");
  
}
int main()
{
    //int a[100]=0;
    int c=0;
    int d;
    //int c1=0;
    while(c!=4)
    {
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                scanf("%d",&d);
                
                push(d);
                break;
            case 2:
                if(t==-1)
                {
                  printf("stack underflow");
                }
              else{
                pop();
                break;
              }
            case 3:
                show();
                break;
            default:
                break;
        }
    }
}
