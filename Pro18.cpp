#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T>>N;
	int num[N];
	int i,c=0;
	for(i=0;i<N;i++)
	{
		cin>>num[i];
	    if(num[i]<0)
	    {
	        c++;
	    }
	    {
	    	if(c%2 == 0)
	    	{
	    	    cout<<0;
	    	    continue;
	    	}
	    	else
	    	{
	    	    cout<<1;
	    	    continue;
	    	}
		}
	}
	
	return 0;
}

