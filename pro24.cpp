#include <iostream>
using namespace std;

int main() 
{
    int T;
    int i,N,c=0;
    int A[N];
    cout<<"yes";
    cin>>T;
    for(i=0;i<T;i++)
    {
	   cin>>N;
        for(i=0;i<N;i++)
        {
            cin>>A[i];
            if(A[i]%2 == 0)
            {
                c++;
            }
        } 
        cout<<c;
        
    }
	return 0;
}

