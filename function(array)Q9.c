#include<stdio.h>
//9. Write a function in C to merge two arrays of the same size sorted in descending order.

void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
      printf("%d ",arr[i]);
      
    }
}
void swap(int* p,int* q)
{
    int temp=*p;
        *p=*q;
        *q=temp;
}
void sort_array(int newarr[],int size)
{
  int i,j;

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
           if(newarr[i]<newarr[j])
           {
              swap(&newarr[i],&newarr[j]);
           }
        }
    }
}

int main()
{   
    int n1=5,n2=5,n3,i,j;
 
    int arr1[5]={3,5,7,9,1},
        arr2[5]={10,4,2,6,8};
    
    
    n3=n1+n2;
    int arr3[n3];

    for(i=0;i<n1;i++)
    {
       arr3[i]=arr1[i];
    }
    for(i=0,j=n1;j<n3 && i<n2;i++,j++)
    {
        arr3[j]=arr2[i];
    }
    printf("Merging two arrays in one array\n");
    for(i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }
  
    sort_array(arr3,n3);
    printf("\ntwo arrays which are merge is sorted in descending order\n");
    print_array(arr3,n3);
    
    return 0;
}