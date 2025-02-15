// Write a Program to Cyclically Rotate an Array by One


#include <stdio.h>
void main() {
    int n,arr[20],i;
    printf("enter the array size \n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
}
    
    int ar_last=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
        
    }
    arr[0]=ar_last;
    printf("Reverse items \n");
    for(i=0;i<n;i++)
    {
        printf("\t %d",arr[i]);
    }
    
    
}


output

enter the array size 
5
enter the array elements

2 3 5 8 7 
Reverse items 
	 7	 2	 3	 5	 8
