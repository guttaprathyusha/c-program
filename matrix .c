#include<stdio.h>
int main()
{
  int A[10][10],B[10][10],C[10][10],i,j,k,n,m,p,q,
  printf("Enter order of matrix \n");
  scanf("%d%d",&n&n);
  printf("Enter order of martix \n");
  scanf("%d%d",&n&n);
  if(m!=p)
  {
    printf("Matrix Multiplication is not possible\n");
    return 1;
  }
  printf("enter the elements:\n");
   for(i=0;i<n;i++)
   {
     for(j=0;j<M;j++)
     {
       scanf("%d%d",&A[i]&a[j]);
      }
   }
   printf("enter the elements of matrix2:\n");
   for(i=0;i<P;i++)
   {
     for(j=0;j<Q;j++)
     {
      scanf("%d%d",&A[i]&A[j]);
     }
   }
  for(i=0,j<n,i++)
  {
   for(j=0,j<q,i++)
   {
    c[i][j]=0;
    for(k=0,k<p,k++)
    {
     c[i][j]=c[i][j]+(A[i][k]*B[i][k];
    }
   }
  }
  printf("RESULTANT MATRIX");
  for(i=0;i<n;i++)
  {
   for(j=o;j<q;j++)
   {
    printf("%d\t",c[i][j]);
   }
   printf("\n");
  }
  printf("FIRST MATRIX");
  for(i=0;i<n;i++)
  {
   for(j=o;j<q;j++)
   {
    printrf("%d\t",c[i][j]);
   }
   printf("\n");
  }
  printf("SECOND MATRIX");
  for(i=0;i<n;i++)
  {
   for(j=0;j<q;j++)
   {
   printf("%d\t",c[i][j]);
   }
   printf("\n");
  }
  return 0;
}
  printf("\n");
 
        
