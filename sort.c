#include<stdio.h>
int main()
{
 int a[20],n,i,j,temp;
 printf("Enter the value n");
 scanf("%d",&n);
 printf("Enter %dnQ elements",n);
 for(i=0;i<n;i++)
 { 
   scanf("%d",&a[i]);
 }
  printf("unsortidarry\n");
  for(i=0;i<n;i++)
  { 
    printf("%d\n",a[i]);
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<n-i-1;j++)
   {
     if(a[j]>a[j+1])
     {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
      }
    }
  }
  printf("sortid array\n");
  for(i=0;i<n;i++)
  {
    printf("%d", a[i]);
   }
  return 0;
}
