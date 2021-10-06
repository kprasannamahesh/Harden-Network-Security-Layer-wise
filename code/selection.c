#include<stdio.h>
#include<malloc.h>
void selection(int n,int *arr)
{
  int i,j,min,temp;
  for(i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
    {
      if(arr[j]<arr[min])
      {
        min=j;
      }
    }
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
}
void greater(int a,int b,int c)
{
  int max,min,mid;
  max=a>(b>c?b:c)?a:(b>c?b:c);
  min=a<(b<c?b:c)?a:(b<c?b:c);
  mid=(a+b+c)-min-max;
  printf("max=%d ,mid=%d ,min=%d",max,mid,min);
}
int main()
{
  /*int n,*arr,i;
  scanf("%d",&n);
  arr=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);*/
  //selection(n,arr);
  greater(13,45,67);
return 0;
}
