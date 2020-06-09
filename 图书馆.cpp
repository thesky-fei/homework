#include  <iostream> 
#include  <vector> 
using  namespace  std; 
class  Book 
{ 
private:
   unsigned int m_ID;
    string m_Name;
    string m_Introduction;
    string m_Author;
    string m_Date;
     int m_Page;
public:
   Book()       {m_ID=0;m_Page=0;}
    void SetID(int id)     {m_ID=id;}
   void SetName(string name)   {m_Name=name;}
   void SetIntroduction(string introduction)     {m_Introduction=introduction;}
   void SetAuthor(string author)   {m_Author=author;}
   void SetDate(string date)    {m_Date=date;}
   void SetPage(int page)    {m_Page=page;}
   Book(const Book &b);
   int GetID();
   string GetAuthor();
   string GetName();
   string GetDate();

   ~Book(){    }
};
Book::Book(const Book &b)
{
      m_ID=b.m_ID;
     m_Name=b.m_Name;
     m_Introduction=b.m_Introduction;
     m_Author=b.m_Author;
     m_Date=b.m_Date;
     m_Page=b.m_Page;
}

int Book::GetID()
{
  return m_ID;
}

string Book::GetName()
{
  return m_Name;
}

string Book::GetAuthor()
{
  return m_Author;
}

string Book::GetDate()
{
  return m_Date;
}


class  Store 
{ 
private://htjhjvhvvkvukkvkuvv
    Book* m_pBook;
    int m_Count;
    Book* book1;  
public://hcjycyjjjvvvjvvj
     Store()
{
    m_Count= 0;
    m_pBook = 0;
    book1 = 0;
    cout << "Store default constructor called!" << endl;
}
Store(int x)
{
    m_Count = x;
    m_pBook = new Book[x];
    book1 = 0;
    cout << "Store constructor with (int x) called!" << endl;
}

    void in(Book& b);
    void out(string name);
    int  GetCount()       { return m_Count; }
    Book findbyID(int ID);
    Book findbyName(string name);
    void printList();
    void GetID();
    Store(const Store& other);
    virtual ~Store()
{
     m_Count = 0;
     book1 = 0;
     cout << "Store destructor called!" << endl;
}
}; 
void Store::in(Book& b)
{
    int i;
    book1 = new Book[m_Count + 1];

    for (  i = 0; i < m_Count; i++)
        book1[i] = m_pBook[i];
    
    book1[i] = b;    m_pBook = book1;    m_Count += 1;
}

void Store::out(string name)
{
    book1 = new Book[m_Count - 1];
    for (int  i = 0; i < m_Count - 1; i++)
    {
        if (m_pBook[i].GetName() == name)
            book1[i] = m_pBook[i +1];
        else
            book1[i] = m_pBook[i];
    }
    m_pBook = book1;    m_Count -=  1;
}


Book Store::findbyID(int ID)
{
int i;
Book book2;
    for ( i = 0; i < m_Count; i++)
        if (m_pBook[i].GetID() == ID)
        {
            return m_pBook[i];
            break;
        }
    return book2;
}

Book Store::findbyName(string name)
{
int i;
Book book1;
    for ( i = 0; i < m_Count; i++)
        if (m_pBook[i].GetName() == name)
         {
            return m_pBook[i];      break;
         }
    return book1;
}

void Store::printList()
{
        cout<<"There are totally "<< m_Count <<" Books:"<<endl;

        for (int i = 0; i < m_Count; i++)
        if (m_pBook[i].GetID() != 0)
            cout << "ID=" << m_pBook[i].GetID() << ";  " 
           << "Name:" << m_pBook[i].GetName() << ";  " 
           << "Author:" << m_pBook[i].GetAuthor() << ";  " 
           << "Date:" << m_pBook[i].GetDate() << ";  " << endl;
}

Store::Store(const Store &k )
{
    m_pBook = k.m_pBook;
    m_Count = k.m_Count;
    book1 = k.book1;
}
int  main() 
{ 
        Store  s; 
        Book  b1,b2,b3; 
        b1.SetID(1); 
        b1.SetName("C++  ??????(?4?)"); 
        b1.SetAuthor("??"); 
        b1.SetIntroduction("??C++????????"); 
        b1.SetDate("201007"); 
        b1.SetPage(529); 
        b2.SetID(2); 
        b2.SetName("????"); 
        b2.SetAuthor("???"); 
        b2.SetIntroduction("???????????????????????"); 
        b2.SetDate("198209"); 
        b2.SetPage(305); 
        b3.SetID(3); 
        b3.SetName("c????"); 
        b3.SetAuthor("???"); 
        b3.SetIntroduction("??C??????????,?????????"); 
        b3.SetDate("201006"); 
        b3.SetPage(355); 

        cout<<"??????"<<endl; 
        s.in(b1); 
        cout<<"??????"<<endl; 
        s.in(b2); 
        cout<<"??????"<<endl; 
        s.in(b3); 
        cout  <<"????????:"<<s.GetCount()  <<  endl; 
        cout  <<"???????:????"  <<  endl; 
        Book  tmpbook=s.findbyName("????"); 
        if(tmpbook.GetID()!=0) 
        { 
                s.out("????"); 
                cout  <<"????  ?????"  <<  endl; 
        } 
        else 
                cout<<"????name???????"<<endl; 
        cout  <<"????????:"<<s.GetCount()  <<  endl; 

        cout  <<"????  ID:3"  <<  endl; 
        tmpbook=s.findbyID(3); 
        if(tmpbook.GetID()!=0) 
                cout<<"??ID?"<<3<<"??,??:"<<tmpbook.GetName()<<endl; 
        else 
                cout<<"????ID?"<<3<<"??"<<endl; 

        cout  <<"????  name:????"  <<  endl; 
        tmpbook=s.findbyName("????"); 
        if(tmpbook.GetID()!=0) 
                cout<<"??name???????,ID:"<<tmpbook.GetID()<<endl; 
        else 
                cout<<"????name???????"<<endl; 

        cout<<"???????????"<<endl; 
        s.printList(); 
        cout<<"??????"<<endl; 
        return  0; 
} 








