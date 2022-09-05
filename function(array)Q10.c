//10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void freq_of_array(int arr[],int visited[],int size)
{
  int i,j,count;
 
      for(i=0;i<size;i++)
      {
        count=1;
      
       for(j=i+1;j<size;j++)
       {
         if(arr[i]==arr[j])
          {
             count++;
             visited[j]=0;
          }
       }
      if(visited[i]!=0)
       {
         visited[i]=count;
       }
      }
}
 void printf_freq_array(int arr[],int visited[],int size)
   {
      for(int i=0;i<size;i++)
       {
        if(visited[i]!=0)
        {
          printf("%d :  %d\n",arr[i],visited[i]);
        }
      }
   }     
int main()
{
  int n;
  printf("Enter size of an array\n");
  scanf("%d",&n);
  int myarr[100];
  int visited[100];
  
  printf("Enter %d elements into an array\n :",n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&myarr[i]);
     visited[i]=-1;
  }
  
    freq_of_array(myarr,visited,n);
    printf("Frequency of each elements in an array :\n");
    printf_freq_array(myarr,visited,n);
     
   return 0;
}