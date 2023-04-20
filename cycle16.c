#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    fgets(c,100,stdin);
    char c1;
    scanf("%c",&c1);
    //printf("%s",c);
    int l=strlen(c)-1;
    for(int i=1;i<=l;i++)
    {
        if(c[i-1]==c1)
        {
            //printf("%c",c[i]);
            continue;
        }
        else
        {
            printf("%c",c[i-1]);
        }
    }
}
