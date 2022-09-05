//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort_array(int a[],int size)
{
   int i,j,temp;
   for(i=0;i<size-1;i++)
   {
      for(j=i+1;j<size;j++)
       {
          if(a[i]>a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
       }
   }
      for(int i=0;i<size;i++)
       {
          printf("%d ",a[i]);
       }
      
}
int main()
{   int n;
    printf("size of an array\n");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter N elemets to store in an array\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("elements are stored in an array is sorted\n");
    sort_array(arr,n);
    return 0;
}