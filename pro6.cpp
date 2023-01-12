#include<iostream>	
using namespace std;
#include<string.h>

class Number
{
	public:
		int a;
		int b;
		
		void printdata()
		{
			cout<<"Enter two values ";
		}
		
};


int main()
{
	Number T1,T2;
	T1.printdata();
	cin>>T1.a>>T1.b;
	
	cout<<"\n\n"<<T1.a<<" "<<T1.b;
	
	return 0;
}
