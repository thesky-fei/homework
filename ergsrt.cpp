#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int is(int m,int n);
	t=t+is(t,t);
	cout<<t;
}
int is(int m,int n)
{
	int i,j; int x=0;
	
	x=x+m/2+n/3;
	
	i=m%2+x;
	
	j=n%3+x;
	
	if(i<2&&j<3)
	return x;
	
	else 
	return is(i,j)+x;
}

