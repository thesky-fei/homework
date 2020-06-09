#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Array
{
//???????
    private:
		vector<T> a;
		
		
	public:
		Array(int n)
		{     } 
		void input(int n)
		{
			int i;
			
			for(i=0;i<n;i++)
			{
				T tmp;
				cin>>tmp;
				a.push_back(tmp);
			}
		}
		T& operator [](int n)
		{
			return a[n];
		}
	
};



class Fract
{
//???????
 	private:
 		int a,b;
 		int flag1,flag2;
 		
 		
  	public://ygyugugoigbub
 		Fract(int x=0,int y=1)
 		{
 			int i,j=1;
 			flag1=0; flag2=0;
 			if(x<0)
 			{
 				flag1=1;
 				x=-1*x;
			 }
			 if(y<0)
			 {
			 	flag2=1;
			 	y=-1*y;
			 }
			 
 			for(i=2;i<=x/2;i++)
 			{
 				if(x%i==0 && y%i==0)
 					j=i;
			}
			 			
			a=x/j;   b=y/j;
		 }
		 void show()//jkvukvyuvukyvukvuvki
		 {
		 	if(a==0 || b==1)
		 	{
		 	if(flag1==0&&flag2==0)
		 			cout<<a<<endl;
		 	if(flag1==1 || flag2==1)
		 			cout<<"-"<<a<<endl;
			}
			 
		   else if(a==b)
		   
			 cout<<"1"<<endl;
		   
			else
			 {
			 	if(flag1==0&&flag2==0)//cvyjyvvkvy
			 		cout<<a<<"/"<<b<<endl;
			 		
			 	if(flag1==1 || flag2==1)//uuyfvuifvif
			 		cout<<"-"<<a<<"/"<<b<<endl;
			 }
		 }
		 Fract & operator += ( Fract &add)//ytyfvugy
		 {
	
			 a=add.a*b+add.b*a;   b=add.b*b;
			 int j;
			 for(int i=2;i<a/2;i++)
			 {
			 	if(a%i==0 && b%i==0)
			 		j=i;
			 }
			 
			 a=a/j;   b=b/j;
		   
			 return *this;
		 }
	
	 friend istream &operator>>(istream &is,Fract &k)//uvytfvyvy
    {
        is>>k.a>>k.b;
        return is;
    }


};

bool linkedList:: remove(int pos,int& value)//hfjyyfkukukugk
 //删除其中一个数据，输出 
{
	if(head==NULL || head->next==NULL)
		return 0;
		
	if(pos>len)
	{
		cout<<"pos > len, failed"<<endl;
		return 0;
	}
	
	if(pos<=0)
	{
		cout<<"pos <= 0, failed"<<endl;
		return 0;
	}
	
	LList *p;  LList *q;

	q=head;  p=head->next;
	
	for(int i=1;i!=pos;i++)
	{  q=q->next;  p=p->next;  }
	
	
	value=p->data;  q->next=p->next;
	
	len=len-1;  delete p;
	
	return 1; 
}
