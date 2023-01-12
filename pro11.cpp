//5.Scan a string from user and replace every occurrence of 'a' and 'A' by 'Z'.(extra pointer method)
#include<iostream>	
using namespace std;
#include<string.h>

int main()
{
	int i;
	char str[100];
	cin.getline(str,100);
	while(str[i] != '\0')
	{
		if(str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 'Z';
		}
		i++;
	}
	int j=0;
	while(str[j] != '\0')
	{
		cout<<str[j];
		j++;
	}
	return 0;
}
