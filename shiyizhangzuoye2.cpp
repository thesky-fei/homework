#include<iostream>
#include<fstream>
using namespace std;


struct student
{
	short int stu_id;
	short int score;
};
int main()
{
	int n,i;
	cin>>n;
	
	student *a=new student[n];
	for(i=0;i<n;i++)
	cin>>a[i].stu_id>>a[i].score;  
	/*vuukvk
	kvbkubku
	vhvkukkuy
	cvkuyvk*/
	
	ofstream file1;
	file1.open("out.txt",ios::out|ios::binary);
	file1.write((char *)a,sizeof(student));
	file1.close();
	/*tvjyvkuvukv
	jvjvkuvyv
	htcjvkvk
	cvulvlvu*/
	
	student *b=new student[n];
	ifstream file2;
	file2.open("out.txt",ios::in|ios::binary);
	for(i=0;i<n;i++)
	file2.read((char *)b+i,sizeof(student));  
	file2.close();
	/*tyvkuvukk
	gcjhvku
	chvkublk
	vvikuviluvbi*/
	
	ofstream file3;
	file3.open("out.txt",ios::ate);
	file3.write((char *)b,sizeof(student));
	file3.close();

}


