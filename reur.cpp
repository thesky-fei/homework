#include<stdio.h>
int main()
{
    int a,b,c=0,i,x,j;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
    	x=i;
        while(x>0)
        {
        
          j=x%10;
          x=x/10;
          if(j==b)
          {
          c++;}
        }
    }
    printf("%d",c);
    return 0;
}
