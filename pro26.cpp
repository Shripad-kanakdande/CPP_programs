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
	cout<<"Enter names of three students\n";
	
	cin.getline(S1.name,50);
	cin.getline(S2.name,50);
	cin.getline(S3.name,50);
	
	
	cout<<strlen(S1.name)<<endl;
	cout<<strlen(S2.name)<<endl;
	cout<<strlen(S3.name)<<endl;
	
	return 0;
}
