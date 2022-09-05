//5. Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.
#include<stdio.h>
int find_duplicatevalue(int var[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(var[i]==var[i+1])
         {
             return var[i];
         }
    }
}
 int main()
 {
    int size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int a[size],i;
    printf("enter n elements to store in array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The adjacent value in array is %d",find_duplicatevalue(a,size));
    return 0;
 }