//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
void print_uniq_elms(int arr[],int n)
{
    int i,j;
     for(i=0;i<n;i++)
   {
       for(j=0;j<i;j++)
       {
          if(arr[i]==arr[j])
          
            break;
       } 
           if(i==j)
           printf("%d ",arr[i]);  
     
  }
}
int main()
{
   int arr[]={1,2,2,1,3,4,5,5,4,3,};
   int size=sizeof(arr)/sizeof(arr[0]);
   printf("Unique elments in array\n");
   print_uniq_elms(arr,size);
   return 0;
}






















