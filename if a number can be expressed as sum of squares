#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int a;
    float b;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j <= sqrt(i);j++)
        {
            b=i-j*j;
            b=sqrt(b);
            a=b;
            if(a==b)
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}
