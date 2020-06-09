#include<stdio.h>
int main()
{
    int i,j,k=0,s,a[100];
    scanf("%d",&s);
    printf("\n");
    for(i=0;i<s;i++)
    scanf("%d",&a[i]);
    
    printf("0 ");
    
    
    for(i=1;i<s;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j])
            k++;
        }
        printf("%d ",k);
        k=0;
        
    }
    return 0;
}
