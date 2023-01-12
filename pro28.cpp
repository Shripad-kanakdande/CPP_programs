#include <iostream>
using namespace std;
#include<string.h>

class Student
{
	public:
		char name[50];
};

int main()
{
	Student S1,S2,S3;
	
	cout<<"Enter three names = "<<endl;
	cin.getline(S1.name,50);
	cin.getline(S2.name,50);
	cin.getline(S3.name,50);
	cout<<"\n\n";
	if(S1.name[0] == 'A' || S1.name[0] == 'a')
	{
		cout<<S1.name<<endl;
	}
	
	if(S2.name[0] == 'A' || S2.name[0] == 'a')
	{
		cout<<S2.name<<endl;
	}
	
	if(S3.name[0] == 'A' || S3.name[0] == 'a')
	{
		cout<<S3.name<<endl;
	}
	
	return 0;
}
