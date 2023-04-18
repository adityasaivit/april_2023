#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int b=n;
    int c=0;
    while(i<=n)
    {
        int j=1;
        int a=1;
        
        while(j<=n)
        {
            if(j>=b)
            {
                cout<<a;
                a++;
            }
            else
            {
                cout<<" ";
            }
            j++;
        }
        int k=1;
        while(k<=n)
        {
            if(k<=c)
            {
                cout<<a-2;
                a--;
            }
          k++;
            
        }
        c++;
        i++;
        cout<<endl;
        b--;
    }
}
