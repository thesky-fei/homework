#include<stdio.h>
int main()
{
   int a[100],i,b=0;
   for(i=0;i<100;i++)
   {
     scanf("%d",&a[i]);
    b++;
     if(a[i]==0)
      break;
   }
   
   for(i=b-2;i>=0;i--)
   printf("%d ",a[i]);
  
   
   return 0;
   
}
