#include<stdio.h>
#include<malloc.h>
#include<string.h>
void bubble(int *arr);
void swap(int i,int j,int *arr);
int main()
{
  int arr[] ={1,45,678,9654,345,24667};
  //bubble(arr);
  printf("%s\n","program");
   printf("%3s\n","program");
   printf("%12s\n","program");
   printf("%-12s\n","program");
   printf("%.3s\n","program");
   printf("%12.3s\n","program");
   printf("%-12.3s\n","program");
    return 0;
}

void bubble(int *arr)
{
  int i,j;
  int n=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1-i;j++)//last i elements are sorted already
    {
      if(arr[j]>arr[j+1])//swaps if order is broken
      swap(j,j+1,arr);
    }
  }
  for(i=0;i<n;i++)
  {printf("%d ",arr[i]);}

}
void swap(int i,int j,int *arr)
{
  int temp;
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}
