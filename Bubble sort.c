#include<stdio.h>
void main()
{
 int a[100],i,j,size,temp=0;
 printf("Enter the size of the array: \n");
 scanf("%d",size);
 printf("Enter %d elements one by one in the array: \n",size);
 for(i=0;i<size;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("Before sorting elements are: \n");
 for(i=0;i<size;i++)
 {
  printf("%d\t",a[i]);
 }
 for(i=0;i<size-1;i++)
 {
  for(j=0;j<size-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("Enter elements after sorting are: \n");
 for(i=0;i<size;i++)
 {
  printf("%d\t",a[i]);
 }
}
