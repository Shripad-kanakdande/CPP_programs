#include <iostream>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	int num[n];
	int ma;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(i=0;i<n;i++)
	{
		ma = max(ma,num[i]);
	}
	int freq[ma+1] = {0};
	
	for(i=0;i<ma+1;i++)
	{
		freq[num[i]]++;
	}
	cout<<"\n\n";
	for(i=0;i<ma+1;i++)
	{
		cout<<freq[i];
	}
}
