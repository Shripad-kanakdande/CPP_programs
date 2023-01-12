#include<iostream>	
using namespace std;
#include<string.h>
/*
6.Scan a string from user and copy it in another string.Write whole 
code in main() only.(Use square bracket notation).
*/
int main()
{
	char s1[100];
	char s2[100];
	cin.getline(s1,100);
	strcpy(s2,s1);
	int i = 0;
	while(s2[i] != '\0')
	{
		cout<<s2[i];
		i++;
	}
	
	return 0;	
} 
