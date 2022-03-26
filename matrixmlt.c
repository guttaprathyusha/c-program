#include<stdio.h>
int main()
{
  int A[10][20],B[10][10],C[10][10],i,j,k,n,m,p,q;
  printf("Enter order of matrix \n");
  scanf("%d%d",&n,&m);
  printf("Enter order of martix \n");
  scanf("%d%d",&p,&q);
  if(m!=p)
  {
   printf("Matrix Multiplication is not possible\n");
   return 1;
  }
  printf("Enter the elements:\n");
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       scanf("%d",&A[i][j]);
      }
    }
   printf("enter the elements of matrix2:\n");
   for(i=0;i<p;i++)
   {
     for(j=0;j<q;j++)
     {
      scanf("%d",&A[i][j]);
     }
   }
   for(i=0;j<n;i++)
   {
    for(j=0;j<q;i++)
    {
     C[i][j]=0;
     for(k=0;k<p;k++)
     {
      C[i][j]=C[i][j]+(A[i][k]*B[i][k]);
     }
    }
   }
   printf("RESULTANT MATRIX");
   for(i=0;i<n;i++)
   {
    for(j=0;j<q;j++)
    {
     printf("%d\t",C[i][j]);
    }
    printf("\n");
   }
  printf("FIRST MATRIX");
  for(i=0;i<n;i++)
  {
   for(j=0;j<q;j++)
   {
    printrf("%d\t",C[i][j]);
   }
   printf("\n");
  }
  printf("SECOND MATRIX");
  for(i=0;i<n;i++)
  {
   for(j=0;j<q;j++)
   {
   printf("%d\t",C[i][j]);
   }
   printf("\n");
  }
  return 0;
}
  
 
        
