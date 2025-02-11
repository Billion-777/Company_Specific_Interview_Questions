// Find duplicate elements in an array
#include <stdio.h>
void main() {
    
    int n,arr[20],i,j;
    printf("enter the array size \n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("\t %d",arr[i]);
                break;
            }
            
        }
    }

}
