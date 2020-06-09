










#include <iostream>
#include <iomanip>
using namespace std;

typedef int elementType;
typedef struct node
{
    elementType data;
    node* next;
} LList, *PList;

class linkedList
{
public:
    linkedList();//????
    virtual ~linkedList();//????,?????????????
    void insert( int value );//??:?????????!
    bool initiate();//??????,??new??????????????,???false,????true
    bool isEmpty();//?????????
    //???????pos?????,???????????value??
    //??:?????????????????????????0???,?????????????
    bool remove( int pos, int& value );
    void print();//???????,????????,??? Empty
    int Length();//????????????????,???-1
private:
    LList *head;
    int len;
};

//???????????????



linkedList::linkedList()//ufjyyfkfufujfmyf
//���캯�� 
{ len=0; } 

void linkedList::insert(int value)//yfkukugkugkuf
//�����ʼ������ʹ�� 
{
	LList *r;
	r=new LList();
	r=head;
	
	for(int i=0;i<len;i++)
	{  r=r->next;  }
	
	LList *q;
	q=new LList();  q->data=value;
	r->next=q;  r=q;  r->next=NULL;
	len=len+1;
}

bool linkedList::initiate()//jyfufvjkyufkf
//��ʼ��������ʹ��new��������ͷ�ڵ� 
{
	len=0;
	head=new LList();
	
	if(head!=NULL)
	{ return 1; }
	
	else
		return 0;
}

bool linkedList::remove(int pos, int &value)//ghcjycyjtcy
// ɾ������һ�����ݣ���� 
{
	int count=1;
	PList p=head->next;  PList q=head;
	
	if(pos<=0)
	{ cout<<"pos<=0,failed"<<endl;return false;}
	
	if(isEmpty()||pos>len)
	{	cout<<"pos>len,failed"<<endl;return false;}	
	
	while(p!=NULL)
	{
		if(count==pos)
		{
			 q->next=p->next; value=p->data;
			 delete p;  len--;
			 return true;
		}
		else
		{
			count++;  q=p;
			p=p->next;
		}
	}
}

bool linkedList::isEmpty()//hyffujuyfkudctdcjd
//�жϵ������Ƿ�Ϊ�� 
{
	if(head==NULL || head->next==NULL)
		return 1;
		
	else
		return 0;
}

int linkedList::Length()//tjyyfjyyfkuku
//���ص������� 
{
	if(head==NULL || head->next==NULL)
		return -1;
		
	return len;
}

linkedList::~linkedList()//yfukyfukfujmfyfukyf
//����������ע��Ҫ���������нڵ����Դ 
{
	LList *q;  q=new LList();
	
	for(;head!=NULL;)
	{
		q=new LList();  q=head;
		
		head=head->next;  delete q;
	}
	delete head;
}












//????print
void linkedList::print()
{
    if( isEmpty() )
    {
        cout << "Empty" << endl;
        return;
    }
    LList* tmp = head->next;
    while(tmp)
    {
        cout <<tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


int main(int argc, char* argv[])
{
    linkedList L1;
    int n;
    int val;
    //?????
    if(!L1.initiate())
        return 0;

    cin>>n;//?????????
    for(int i=0; i<n; i++) //??n??,?????
    {
        cin>>val;
        L1.insert(val);
    }
    cout << "Origin Length:" << L1.Length() << endl;//??????
    cout << "data:" ;
    L1.print();//????

    cin>>n;//????????????
    if (L1.remove(n,val))
    {
        //????n???,??????????val?
        cout<<"Delete the data at position("<<n<<"):"<<val<<endl;
        cout<< "New Length:" << L1.Length()<< endl;//??????
        cout<< "data:" ;
        L1.print();//????
    }

    return 0;
}


