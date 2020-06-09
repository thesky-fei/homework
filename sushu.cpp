#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k=0,l=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cin>>a[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cin>>b[i][j];
	}
	
	
	
	
	
	
		for(j=0;j<3;j++)
		{
		
		  k=k+a[0][j]*b[j][0];
		  }
		c[0][0]=k;
		k=0;
		
		for(j=0;j<3;j++)
		{
		
		  k=k+a[0][j]*b[j][1];
		  }
		c[0][1]=k;
		k=0;
	
		for(j=0;j<3;j++)
		{
		
		  k=k+a[0][j]*b[j][2];
		  }
		c[0][2]=k;
		k=0;
	
		for(j=0;j<3;j++)
		{
		
		  k=k+a[1][j]*b[j][0];
		  }
		c[1][0]=k;
		k=0;
	
		for(j=0;j<3;j++)
		{
		
		  k=k+a[1][j]*b[j][1];
		  }
		c[1][1]=k;
		k=0;
	
		for(j=0;j<3;j++)
		{
		
		  k=k+a[1][j]*b[j][2];
		  }
		c[1][2]=k;
		k=0;
	
		for(j=0;j<3;j++)
		{
		
		  k=k+a[2][j]*b[j][0];
		  }
		c[2][0]=k;
		k=0;
	
		for(j=0;j<3;j++)
		{
		
		  k=k+a[2][j]*b[j][1];
		  }
		c[2][1]=k;
		k=0;
	
		for(j=0;j<3;j++)
		{
		
		  k=k+a[2][j]*b[j][2];
		  }
		c[2][2]=k;
		k=0;
	
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<c[i][j]<<" ";
		cout<<endl;
	}
	
	
}
