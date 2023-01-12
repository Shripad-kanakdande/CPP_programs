#include <iostream>
using namespace std;

int main() {
	int T;int A[3];
	int i,j,k,l,c=0;
	cin>>T;
	for(i=0;i<T;i++)
	{
//	    cin>>N;
	    
	    for(j=0;j<4;j++)
	    {
	        cin>>A[j];
	    }
	    for(k=0;k<4;k++)
	    {
	        for(l=0;l<=4;l++)
	        {
	        	if(l == k)
	        	{
	        		continue;
				}
	            if(A[k] == A[l])
	            {
	                c++;
	            }
	        }
	    }
	    cout<<k<<"  "<<c<<endl;
	}
	
	return 0;
}

