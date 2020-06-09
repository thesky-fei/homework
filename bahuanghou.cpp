#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,k=36,x,t,s;
	char a[8];
	for(i=0;i<8;i++)
	{
		cin>>a[i];
		if(a[i]!='*')
		k=k-(a[i]-48);
	    
	    else x=i;
		
	}
	a[x]=k+48;
	
	
	if(x!=8)
	{
	
	cout<<k;}
	else
	cout<<"No Answer";
	
	
}
