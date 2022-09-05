//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>

int count_duplicatevalue(int a[],int n)
{
    int i,count=0,j;
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(a[i]==a[j])
          {
            count++;
          }
       }
    }
    return count;
}
  int main()
  {
     int n;

     printf("enter size of array\n");
     scanf("%d",&n);
     int arr[n],i;
     printf("enter elements into an array\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     int print=count_duplicatevalue(arr,n);
     printf("duplicate elements stored in array is %d",print);
    return 0;
  }