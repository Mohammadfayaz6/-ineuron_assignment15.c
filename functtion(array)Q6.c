//6. Write a function in C to read n number of values in an array and display it in reverse
//order.
#include<stdio.h>
void reverse_array(int arr[],int size)
{
    int i; 
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
 int main()
 {
    int n;
    printf("enter size of an array\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter N elments in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in an array are stored is printed in reverse order\n");
     reverse_array(a,n);
     
       return 0;
 }