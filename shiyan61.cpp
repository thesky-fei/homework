#include<stdio.h>
main()
{
	int i,n,s;
	printf("Please enter n:");
	scanf("%d",&n);
	s=1;
	for(i=1;i<=n;i++)
		s=s*i;
		printf("%d!=%d\n",n,s);		
 } 
