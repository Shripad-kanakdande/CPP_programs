#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
int main() 
{
	int i,j;
    char str[100]; 
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
    	cout<<str[i];
    	if(str[i] == ' ')
    	{
    		j = i+1;
    		cout<<"\n";
    		while(str[j] != '\0')
    		{
    			cout<<str[j];
    			if(str[j] == ' ')
    			{
    				break;
				}
				j++;
				break;
			}
		}
	}
	
    return 0;
}

//void printdata(char s1[100])
//{
//	for(i=0;i<strlen(s1);i++)
//	{
//		if(s1[i] == ' ')
//		{
//			
//		}
//	}
//}
