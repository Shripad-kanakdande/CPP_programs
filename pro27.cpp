#include <iostream>
using namespace std;
#include<string.h>

class Student
{
	char name[50];
	public:
		void scandata()
		{
			cin.getline(name,50);
		}
		void findlength()
		{
			cout<<"Length of name = ";
			cout<<strlen(name)<<endl;
		}
};

int main()
{
	Student S1,S2,S3;
	
	cout<<"Enter names of three students\n";
	S1.scandata();
	S2.scandata();
	S3.scandata();
	
	S1.findlength();
	S2.findlength();
	S3.findlength();
	
	return 0;
	
}
