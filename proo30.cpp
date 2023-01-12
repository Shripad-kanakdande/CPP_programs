#include <iostream>
using namespace std;
#include<string.h>

class Student
{
	public:
		char* ptrname;
		int age;
};

int main()
{
	Student S1,S2,S3;
	S1.ptrname = new char [50];
	S2.ptrname = new char [50];
	cout<<"Enter name\n";
	cin.getline(S1.ptrname,50);
	cout<<"Enter age = ";
	cin>>S1.age;
	cout<<"Enter name\n";
	cin.ignore(1);
	cin.getline(S2.ptrname,50);
	cout<<"Enter age = ";
	cin>>S2.age;
	
	cout<<"name = "<<S1.ptrname<<"   age = "<<S1.age<<endl;
	cout<<"name = "<<S2.ptrname<<"   age = "<<S2.age<<endl;
//	cin>>S1.age>>S2.age;
}
