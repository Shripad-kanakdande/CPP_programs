//3.Scan a string from user and count number of vowels in the string.(Square bracket notation)
#include<iostream>	
using namespace std;
#include<string.h>

int main()
{
	int i = 0,j = 0,k = 0;
	char s1[100];
	cin.getline(s1,100);
	char vowels[] = {'a','e','i','o','u'};
	while(s1[i] != '\0')
	{
		while(vowels[j] != '\0')
		{
			if(vowels[j] == s1[i])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	cout<<k;
	return 0;
}
