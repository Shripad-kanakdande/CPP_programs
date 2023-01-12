#include <iostream>
using namespace std;
#include<string.h>

class Number
{
	public:
		int num[5];
		int i;
		void getdata()
		{
			cout<<"Enter 5 ints";
			for(i=0;i<5;i++)
			{
				cin>>num[i];
			}
		}
		int findmax()
			{
				int x;
				x = num[0];
				for(i=0;i<5;i++)
				{
					if(x<num[i])
					{
						x = num[i];
						return x;
					}
				}
			}
};

int main()
{
	int m1,m2,m3;
	Number T1,T2,T3;
	T1.getdata();
	T2.getdata();
	T3.getdata();
	
	m1 = T1.findmax();
	m2 = T2.findmax();
	m3 = T3.findmax();
	
	int max;
	if(m1>m2 && m1>m3)
	{
		cout<<"Max = "<<m1;
	}
	
	if(m2>m1 && m2>m3)
	{
		cout<<"Max = "<<m2;
	}
	
	if(m3>m2 && m3>m1)
	{
		cout<<"Max = "<<m3;
	}
	
//	cout<<"max = "<<max<<endl;
}











