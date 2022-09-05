//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int findgreatestnum(int a[],int n)
{
    int i,min=a[0];
    for(i=0;i<n;i++)
    {
       if(min>a[i])
         {
           min=a[i];
         }
    }
        return min;  
}
int main()
{
    int num[5],i;
    printf("enter 5 elemnts into an array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
   int res=findgreatestnum(num,5);
   printf("the smallest number stored in an array is:%d",res);
    return 0;
}