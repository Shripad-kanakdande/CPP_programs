//2.Scan a string from user and count number of words.(extra pointer method)
#include<iostream>	
using namespace std;
#include<string.h>

int main()
{
	int i = 0;
	char str[100];
	char * p;
	p = str;
	cin.getline(p,100);
	while(*(p+i) != '\0')
	{
		i++;
	}
	
	cout<<"Length of string = "<<i;
	
	return 0;
}
