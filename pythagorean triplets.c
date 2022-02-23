#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=5;i<n;i++){
        int temp=0;
        for(int j=3;j<i;j++){
            int a=i*i-j*j;
            float f=sqrt(a);
            a=sqrt(a);
            if(a==f && a>j){ count++; printf("%d %d %d\n",j,a,i);}
        }
    }
    
    printf("%d",count);

    return 0;
}
