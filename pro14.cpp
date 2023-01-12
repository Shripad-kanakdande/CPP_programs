#include <iostream>
using namespace std;

int main() {
    int T,m,n;
    int A[n];
    int B[n];
    int i,j,k,sum = 0;
    for(i=0;i<T;i++)
    {
        cin>>m>>n;
        for(j=0;j<n;j++)
        {
            ci>>A[j];
        }
        for(j=0;j<n;j++)
        {
            if(A[j]<=m/2)
            {
                B[j] = m;
                k = A[i] - B[j];
            }
            else if(A[j]>m/2)
            {
                B[j] = 1;
                k = B[j] - A[i]; 
            }
        }
        
        sum = sum + k;
        
    }
    
	return 0;
}
