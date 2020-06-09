#include<iostream>
#include<iomanip>
using namespace std;
const  long double pi=3.1415926;

class cylinder
{
	private:
		double r,h;
	public:
		cylinder(double x,double y);
		
	     double getvolumn()const;//
		 double getarea()const;//
		
};
cylinder::cylinder(double x,double y)
{
	r=y;
	h=x;
}

double cylinder::getvolumn()const
{
	return pi*r*r*h;
}

double cylinder::getarea()const
{
	return 2*pi*r*r+2*pi*r*h;
}

int main()
{
    double d,h;
    cin>>d>>h;
    cylinder can(h,d/2);
    cout<<"构造函数被调用"<<endl;
    cout<<fixed<<setprecision(6);
    
    cout<<"油桶的容积是"<<can.getvolumn()<<" "<<endl;
    cout<<"铁皮的面积是"<<can.getarea()<<endl;
    cout<<"析构函数被调用"<<endl; 
}
