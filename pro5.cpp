#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	char str[100];
	int i,c=0;
	cin.getline(str,100);
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			c++;
		}
		i++;
	}
	cout<<"No. of words = "<<c+1;
	
	return 0;
}
