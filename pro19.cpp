#include <iostream>
using namespace std;

int main() {
	int T,x,i;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>x;
	    if(x<=25)
	    {
	        cout<<1<<endl;
	    }
	    if(x>25)
		{
			cout<<x/25<<endl;
		}
	    
	}
	return 0;
}
