#include<iostream>
using namespace std;

int main()
{
	int a,b,i;
	a = 0;
	b = 1;
	int n;
	cout<<"Enter n";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		int nextN = a + b;
		cout<<" "<<nextN;
		a = b;
		b = nextN;
		
	}
	return 0;
}
