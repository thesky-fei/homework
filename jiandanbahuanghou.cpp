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
	
	

	
	for(i=0;i<8;i++)
	{
		t=a[i];
		if(i=x)
		continue;
		
		
		if(abs(x-i)==abs(t-k))
		{
		
		s=1;
		break;}
	}
	if(s)
	cout<<"No Answer";
	
	cout<<a[x];
	
}
