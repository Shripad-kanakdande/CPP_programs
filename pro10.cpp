//4.Scan a string from user and count number of digite in the string.(extra pointer method)
#include<iostream>	
using namespace std;
#include<string.h>

int main()
{
	int c = 0;
	char str[100];
	char digit[] = {'1','2','3','4','5','6','7','8','9','0'};
	char *p;
	char *q;
	p = str;
	q = digit;
	cin.getline(p,100);
	int i = 0;
	while(*(p+i) != '\0')
	{
		int j = 0;
		while(*(q+j) != '\0')
		{
			if(*(q+j) == *(p+i))
			{
				c++;
			}
			j++;
		}
		i++;
	}
	cout<<c;
	
	return 0;
}
