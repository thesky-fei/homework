#include <iostream>
#include<cmath>
using namespace std;


class CTime {
	public:
		
		CTime(int a,int b,int c,int d,int e,int f);
		void showTime();
		~CTime();
		int isvalid();
		CTime(CTime &p);
		int dayDiff(CTime p);
		
	private:
		
		int nian,yue,ri,shi,fen,miao;
};


int panding1(int nian) 
{
	if((nian%4==0&&nian%100!=0)||nian%400==0)
	
	     return 1;
	
	else return 0;
}

int panding2(int shi,int fen,int miao) 
{
	if(shi<24&&fen<60&&miao<60)
	     return 1;
	else return 0;
}



int panding3(int nian,int yue,int ri) 
{
	if(!panding1(nian)) 
	{
		if(((yue==12||yue==10||yue==8||yue==7||yue==5||yue==3||yue==1)&&ri<=31)||
		((yue==2)&&ri<=28)||((yue==4||yue==6||yue==9||yue==11)&&ri<=30))
		     return 1;
		else 
		     return 0;
	} 
	else 
	{
		if(((yue==12||yue==10||yue==8||yue==7||yue==5||yue==3||yue==1)&&ri<=31)||
		((yue==2)&&ri<=29)||((yue==4||yue==6||yue==9||yue==11)&&ri<=30))
		     return 1;
		else 
		     return 0;
	}
}








CTime::CTime(int a,int b,int c,int d=0,int e=0,int f=0) {
	int i,j;
	i=panding3(a,b,c),j=panding2(d,e,f);
	if(i==0&&j==0) 
	{
		nian=yue=ri=shi=fen=miao=0;
		
	} 
	else 
	{
		if(i==1&&j==0)cout<<"time error!"<<endl;
		if(i==0&&j==1)cout<<"date error!"<<endl;
		if(i==0&&j==0) cout<<"date and time error!"<<endl;
		if(i==1&&j==1)nian=a;yue=b;ri=c;shi=d;fen=e;miao=f;
	}
	cout<<"构造函数被调用"<<endl;
}



void CTime::showTime() 
{
	
	cout<<nian<<'/'<<yue<<'/'<<ri<<' '<<shi<<':'<<fen<<':'<<miao<<endl;
}
CTime::CTime(CTime &p) 
{
	nian=p.nian;yue=p.yue;ri=p.ri;
	
	shi=p.shi;fen=p.fen;miao=p.miao;
	
	cout<<"拷贝构造函数被调用"<<endl;
}


CTime::~CTime() 
{
	cout<<"析构函数被调用"<<endl;
}



int CTime::isvalid() 
{
	if(shi<24&&fen<60&&miao<60) 
	{
		if(!panding1(nian)) 
		{
		    if(((yue==1||yue==3||yue==5||yue==7||yue==8||yue==10||yue==12)&&ri<=31)
			||((yue==2)&&ri<=28)
			||((yue==4||yue==6||yue==9||yue==11)&&ri<=30))
			     return 1;
			     
			else 
			     return 0;
		} 
		else 
		{
			if(((yue==1||yue==3||yue==5||yue==7||yue==8||yue==10||yue==12)&&ri<=31)
			||((yue==2)&&ri<=28)
			||((yue==4||yue==6||yue==9||yue==11)&&ri<=30))
			     return 1;
			else 
			     return 0;
		}
	} else return 0;
}
int CTime::dayDiff(CTime p) 
{
	int s1=0,s2=0,sum=0,i,j;
	
	for(i=1999;i<nian;i++)
	{
		if(panding1(i))
		  s1=s1+366;
		else 
		  s1=s1+365;	
	}
	for(j=1;j<yue;j++)
	{
		if(j==12||j==10||j==8||j==7||j==5||j==13||j==1)
		s1=s1+31;
		else if(j==2)
		{
			if(panding1(i))
			     s1=s1+29;
			else s1=s1+28;
		}
		else s1=s1+30;
	}
	s1=s1+ri;
	for(i=1999;i<p.nian;i++)
	{
		if(panding1(i))
		s2+=366;
		else s2+=365;	
	}
	for(j=1;j<p.yue;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
		s2+=31;
		else if(j==2)
		{
			if(panding1(i))
			s2=s2+29;
			else s2=s2+28;
		}
		else s2+=30;
	}
	s2=s2+p.ri;
	
	sum=abs(s2-s1);

	return sum;
}
int  main() 
{ 
        int  year,  month,  day,  hour,  minute,  second; 
        cin  >>  year  >>  month  >>  day  >>  hour  >>  minute  >>  second; 
        CTime  t1(year,  month,  day,  hour,  minute,  second); 
        t1.showTime(); 
        CTime  t2(2000,  1,  1);  //?????????????00:00:00 
        if  (t1.isvalid())          //?????????,????? 
        { 
                int  days=0; 
                days=t1.dayDiff(t2); 
                cout  <<  "????????"  <<  days  <<  "?"  <<  endl; 
                days=t2.dayDiff(t1); 
                cout  <<  "????????"  <<  days  <<  "?"  <<  endl; 
        } 
}



