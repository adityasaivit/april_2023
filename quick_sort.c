#include <stdio.h>
void sort(int arr[],int s,int e)
{
    for(int i=s;i<=e;i++)
    {
        for(int j=s;j<e;j++)
        {
            if(arr[j-1]>arr[j])
            {
                int t=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=t;
            }
        }
    }
    for(int k=s;k<=e;k++)
    {
        printf("%d ",arr[k-1]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int c=0;
    for(int j=1;j<=n;j++)
    {
        if(ar[0]>ar[j-1])
        {
            c++;
        }
    }
    int t=ar[c];
    ar[c]=ar[0];
    ar[0]=t;
    for(int x=0;x<c;x++)
    {
        if(ar[x]>ar[c])
        {
            for(int y=n-1;y>c;y--)
            {
                if(ar[y]<ar[c])
                {
                    int t1=ar[y];
                    ar[y]=ar[x];
                    ar[x]=t1;
                    break;
                }
            }
        }
    }
    //printf("\n");
    sort(ar,1,c);
    sort(ar,c+1,n);
}
