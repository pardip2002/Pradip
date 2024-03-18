#include<stdio.h>
int main(){

int i,j,a[50][50],size,size1,sum=0;

   printf("\n eanter fast size of array:");
   scanf("%d",&size);
    printf("\n eanter last size of array:");
   scanf("%d",&size1);
   printf("\n eanter no:");
    scanf("%d",&a[i][j]);
   for (i=0;i<size;i++)
   {
     for (j=0;j<size1;j++)

     {
        scanf("%d",&a[i][j]);
     }
   }
   printf("\n");
   for (i=0;i<size;i++)
   {
     for (j=0;j<size1;j++)

     {  
        if (i==j)
        {
         sum=sum+a[i][j];
        }
        
        printf(" %d",a[i][j]);
     }
    printf("\n");
   }

  printf("sum is %d",sum);

printf("\n -----------------------------------------------------------\n");


   printf("\n eanter fast size of array:");
   scanf("%d",&size);
    printf("\n eanter last size of array:");
   scanf("%d",&size1);
   printf("\n eanter no:");
   for (i=0;i<size;i++)
   {
     for (j=0;j<size1;j++)

     {
        scanf("%d",&a[i][j]);
     }
   }
   printf("\n");
   for (i=0;i<size;i++)
   {
     for (j=0;j<size1;j++)

     {  
        if (i+j==8)
        {
         sum=sum+a[i][j];
        }
        
        printf(" %d",a[i][j]);
     }
    printf("\n");
   }

  printf("sum is %d",sum);

  printf("\n -----------------------------------------------------------\n");


 return 0;
}