#include <iostream>
#include<cstdlib>
using namespace std;
/*
 1 1 1 1 1 1 1
 1 2 2 2 2 2 1
 1 2 3 3 3 2 1
 1 2 3 4 3 2 1
 1 2 3 3 3 2 1
 1 2 2 2 2 2 1
 1 1 1 1 1 1 1 
*/
int main()
{
	int i,j,k,l,m,n,o,z;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" "<<j;
		}
		for(k=i;k<=3;k++)
		{
			cout<<" "<<i;
		}  
		for(k=3;k>=i;k--)
		{
			cout<<" "<<i;
		}
		for(l=i-1;l>=1;l--)
		{
			cout<<" "<<l;
		}	
		cout<<"\n";
	}
	for(i=1;i<=3;i++)
	{
		for(l=1;l<=i;l++)
		{
			cout<<" "<<l;
		}
		for(k=i;k<=3;k++)
		{
			cout<<" "<<i;
		}
		for(k=3;k>=i;k--)
		{
			cout<<" "<<i;
		}
		for(l=i-1;l>=1;l--)
		{
			cout<<" "<<l;
		}
		cout<<"\n";
	}
	
}
