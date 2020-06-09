class Shape
{
	public:
		int getm_ID()
		{
			return m_ID;
		}
		void setm_ID(int x)
		{
			m_ID=x;
		}
		int getArea()
		{
			return 0;
		 } 
		 Shape(int i)
		 {
		 	m_ID=i;
		 	cout<<"Shape constructor called:"<<m_ID<<endl;
		 }
		 ~Shape()
		 {
		 	cout<<"Shape destructor called:"<<m_ID<<endl;
		 }
	private:
		int m_ID;
 };
 class Circle:public Shape
 {
 	public:
 		int getr()
 		{
 			return r;
		 }
		 void setr(int x)
		 {
		 	r=x;
		 }
		 float getArea()
		 {
		 	return pi*r*r;
		 }
		 Circle(int x,int y):Shape(y)
		 {
		 	r=x;
		 	cout<<"Circle constructor called:"<<y<<endl;
		 }
		 ~Circle()
		 {
		 	cout<<"Circle destructor called:"<<getm_ID()<<endl;
		 }
 	private:
 		int r;
 };
 class Rectangle:public Shape
 {
 	public:
 		int geth()
 		{
 			return h;
		 }
		 int getw()
		 {
		 	return w;
		 }
		 void seth(int x)
		 {
		 	h=x;
		 }
		 void setw(int x)
		 {
		 	w=x;
		 }
		 int getArea()
		 {
		 	return w*h;
		 }
		 Rectangle(int x,int y,int z):Shape(z)
		 {
		 	h=x;
		 	w=y;
		 	cout<<"Rectangle constructor called:"<<z<<endl;
		 }
		 ~Rectangle()
		 {
		 	cout<<"Rectangle destructor called:"<<getm_ID()<<endl;
		 }
 	private:
 		int h;
 		int w;
};













class vehicle
{
	public:
		void run()
		{
			cout<<"vehicle run"<<endl;
		}
		void stop()
		{
			cout<<"vehicle stop"<<endl;
		}
		vehicle(int m,int w)
		{
			maxspeed=m;
			weight=w;
			cout<<"vehicle constructor called. maxspeed:"<<maxspeed<<"; weight"<<weight<<endl;
		}
		~vehicle()
		{
			cout<<"vehicle destructor called. maxspeed:"<<maxspeed<<"; weight"<<weight<<endl;
		}
	private:
		int maxspeed;
		int weight;
};
class bicycle:virtual public vehicle
{
	public:
		bicycle(int h,int m,int w):vehicle(m,w)
		{
			height=h;
			cout<<"bicycle constructor called. height:"<<height<<endl;
		}
		~bicycle()
		{
			cout<<"bicycle destructor called. height:"<<height<<endl;
		}
	private:
		int height;
};
class motorcar:virtual public vehicle
{
	public:
		motorcar(int s,int m,int w):vehicle(m,w)
		{
			seatnum=s;
			cout<<"motorcar constructor called. seatnum:"<<seatnum<<endl;
		}
		~motorcar()
		{
			cout<<"motorcar destructor called. seatnum:"<<seatnum<<endl;
		}
	private:
		int seatnum;
};
class motorcycle:public bicycle,public motorcar
{
	public:
		motorcycle(int h,int s,int m,int w):vehicle(m,w),motorcar(s,m,w),bicycle(h,m,w)
		{
			cout<<"motorcycle constructor called"<<endl;
		}
		~motorcycle()
		{
			cout<<"motorcycle destructor called"<<endl;
		}	
};
