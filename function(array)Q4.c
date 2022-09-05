//4. Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
void rotate_an_array(int a[])
{
    int i,j,temp,d=2;
    for(i=0;i<d;i++)
    {
        temp=a[0];
        for(j=0;j<5-1;j++)
        {
           a[j]=a[j+1];
        }
        a[5-1]=temp;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int arr[]={32,29,40,12,70};
    printf("before rotating an array\n");
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);
    printf("\nafter rotating 2 times to an array\n");
    rotate_an_array(arr);
    return 0;
}