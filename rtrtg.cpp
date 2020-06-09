#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a[4],b,c;
	for(int i=0;i<4;i++)
	cin>>a[i];
	b=a[0]-a[2];
	c=a[1]-a[3];
	cout<<fixed<<setprecision(2)<<b<<" "<<c<<endl;
	
}
