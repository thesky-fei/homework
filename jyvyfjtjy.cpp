#include<iostream>
using namespace std;
class CPoint
{
     friend class CRectangle;
     private:
       int left,right;
     public:
        CPoint( int  x=0 ,int  y=0)
        {   left=x;     right=y;
         cout<<"CPoint contstructor with default value(0,0) is called."<<endl;}
        CPoint(CPoint  &p)
        {
           left=p.left;
           right=p.right;
           cout<<"CPoint copy contstructor is called."<<endl;
        }
        ~CPoint()
           {      }
     
};
class  CRectangle
{
	private:
      CPoint top;
	  CPoint bottom;
     public:
        CRectangle():top(0,0),bottom(0,0)
        {
           
          cout<<"CRectangle default contstructor is called."<<endl;
        }

        CRectangle(CPoint xx, CPoint yy):top(xx),bottom(yy)
        {
                

                cout<<"CRectangle contstructor with (CPoint,CPoint) is called."<<endl;
         }
        CRectangle(int a, int b, int c, int d):top(a,b),bottom(c,d)
        {
                

                 cout<<"CRectangle contstructor with (int,int,int,int) is called."<<endl;
        }
        CRectangle(CRectangle  &k):top(k.top),bottom(k.bottom)
       {
              
   
           cout<<"CRectangle copy contstructor is called."<<endl;
       }
       int   GetArea()
              {
                   return (bottom.left-top.left)*(bottom.right-top.right);
               }
        ~CRectangle()
               {    }
    
         

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
