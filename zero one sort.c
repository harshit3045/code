#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int i=0,j=0,temp;
    while(j<n){
        //if(arr[j]==arr[i] && arr[i]==0){i++;j++;}
         if(arr[j]==0){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        else {j++;}
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
    
   

    return 0;
}
