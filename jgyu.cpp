#include<stdio.h>
int main()
{
    int a,b[32],i,k,j;
    scanf("%d",&a);
    for(i=0;i<32;i++)
    {
        b[i]=a%10;
        a=a/10;
        if(a=0)
        {
		
        k=i;
        break;}
    }
    for(j=0;j<k;j++)
    printf("%d",b[j]);
    return 0;
}
