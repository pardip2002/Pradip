#include<stdio.h>
int max,i,a[7]= {10,20,30,40,50,60,70},size,b[50],sum=0,malti=1;
int main(){

printf("\n ---------------manuali 1 bay 1----------------------\n");

printf("\n anser is a[o]:%d",a[0]);
printf("\n anser is a[1]:%d",a[1]);
printf("\n anser is a[2]:%d",a[2]);
printf("\n anser is a[3]:%d",a[3]);
printf("\n anser is a[4]:%d",a[4]);
printf("\n anser is a[5]:%d",a[5]);
printf("\n anser is a[6]:%d",a[6]);


printf("\n ------------------ for loop-----------------------\n");


for (i=0;i<100;i++)
{
    printf("\n anser is:%d",a[i]);
}

printf("\n ------------------eanter a arrya-----------------------\n");
   printf("\n eanter a size of arrya:");
   scanf(" %d",&size);
   printf("\n eantere a eliamant:");

   for(i=0;i<size;i++){

    scanf(" %d",&b[i]);

   }

   printf("eanter aealimant: ");

   for (i=0;i<size;i++)
   {
     printf(" %d",b[i]);
   }
   
   printf("\n ------------------eanter a arrya and sum and evean/oad-----------------------\n");
   printf("\n eanter a size of arrya:");
   scanf(" %d",&size);
   printf("\n eantere a eliamant:");

   for(i=0;i<size;i++){

    scanf(" %d",&b[i]);

   }

   printf("eanter aealimant: ");

   for (i=0;i<size;i++)
   sum=sum+b[i];
   {
     printf(" %d",b[i]);
   }
     
   printf("\n sum is : %d",sum);

    if (sum%2<=0)
    {
    printf(" \n number is evean");
    }else{
     printf(" \n number is oad");
    }
    

   printf("\n ------------------eanter a arrya and maltipaland evean/oad-----------------------\n");
   printf("\n eanter a size of arrya:");
   scanf(" %d",&size);
   printf("\n eantere a eliamant:");

   for(i=0;i<size;i++){

    scanf(" %d",&b[i]);

   }

   printf("eanter aealimant: ");

   for (i=0;i<size;i++)
   malti=malti*b[i];
   {
     printf(" %d",b[i]);
   }
     
   printf("\n maltipal is : %d",malti);

   if (malti%2<=0)
    {
    printf(" \n number is evean");
    }else{

     printf(" \n number is oad");
    }


printf("\n ------------------eanter a arrya max find-----------------------\n");
   printf("\n eanter a size of arrya:");
   scanf(" %d",&size);
   printf("\n eantere a eliamant:");

   for(i=0;i<size;i++){

    scanf(" %d",&b[i]);

   }
      max=b[0];
      for (i=0;i<size; i++)
      {
        if (b[i]>max)
        {
           max=b[i];
        }
        
      }
      printf("\n maximam no is :%d",max);
      
return 0;
}
