#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char s1[10],s2[10];
	int i,j,m,n=100;
	cin>>s1;cin>>s2;
	
	for(i=0;i<10;i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
			s1[i]=s1[i]+32;
		if(s2[i]>='A' && s2[i]<='Z')
			s2[i]=s2[i]+32;
	}
	
	for(i=0;i<10;i++)
	for(j=0;j<10;j++)
	{
		if(s1[j]=='\0'||s2[i]=='\0')
		continue;
		m=abs(s1[j]-s2[i]);
		if(m<n)
		n=m;
		
	}
	
	cout<<n;
	

}
