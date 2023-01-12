#include <iostream>
using namespace std;

int main() 
{
    int T;
    int i,N,c=0;
   
    cin>>T;
    for(i=0;i<=T;i++)
    {
	    cin>>N;
	    int A[N];
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(i=0;i<N;i++)
        {
        	if(A[i]%2 ==0)
        	{
        		N++;
        		c++;
			}
		}
        cout<<c<<endl;
    }
	return 0;
}
