#include<iostream>
using namespace std;
class CPoint
{
	friend class CRectangle;
	public:
		/*CPoint()
		{
			x=0;
			y=0;
			cout<<"CPoint contstructor with default value(0,0) is called."<<endl;
		}*/
		CPoint(int xc=0,int yc=0)
		{
			x=xc;
			y=yc;
			cout<<"CPoint contstructor with default value(0,0) is called."<<endl;
		}
		CPoint(CPoint &q) 
		{
			x=q.x;
			y=q.y;
			cout<<"CPoint copy contstructor is called."<<endl;
		}
		~CPoint()
		{
		}
	private:
		int x,y;
};
class CRectangle
{
	public:
		CRectangle()
		{
			zs.x=0;
			zs.y=0;
			yx.x=0;
			yx.y=0;
			cout<<"CRectangle default contstructor is called."<<endl;
		}
		CRectangle(CPoint cz,CPoint cy)
		{
			CPoint zs(cz);
			CPoint yx(cy);
			cout<<"CRectangle contstructor with (CPoint,CPoint) is called."<<endl;
		}
		CRectangle(int x1,int y1,int x2,int y2)
		{
			CPoint zs(x1,y1);
			CPoint yx(x2,y2);
			cout<<"CRectangle contstructor with (int,int,int,int) is called."<<endl;
		}
		CRectangle(CRectangle &p)
		{
			CPoint zs(p.zs);
			CPoint yx(p.yx);
			cout<<"CRectangle copy contstructor is called."<<endl;
		}
		int GetArea()
		{
			return((yx.x-zs.x)*(zs.y-yx.y));
		}
		~CRectangle()
		{
		}
	private:
		CPoint zs;
		CPoint yx;
};
int  main() 
{ 
        int  a=1,  b=1,  c=6,  d=11; 
        cout<<"#  Define  p1  ######"<<endl; 
        CPoint  p1; 
        cout<<"#  Define  p2  ######"<<endl; 
        CPoint  p2(10,20); 
        cout<<"#  Define  rect1  ######"<<endl; 
        CRectangle  rect1; 
        cout<<"#  Define  rect2  ######"<<endl; 
        CRectangle  rect2(p1,  p2); 
        cout<<"#  Define  rect3  ######"<<endl; 
        CRectangle  rect3(a,  b,  c,  d); 
        cout<<"#  Define  rect4  ######"<<endl; 
        CRectangle  rect4(rect2); 
        cout<<"#  Calculate  area  ######"<<endl; 
        cout  <<  "rect1???"  <<  rect1.GetArea()  <<  endl; 
        cout  <<  "rect2???"  <<  rect2.GetArea()  <<  endl; 
        cout  <<  "rect3???"  <<  rect3.GetArea()  <<  endl; 
        cout  <<  "rect4???"  <<  rect4.GetArea()  <<  endl; 
        system("pause"); 
        return  0; 
} 
