#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int T,n;
    cin>>T;
    long long int m;
    long long k;

    int i,j,sum = 0;
    for(i=0;i<T;i++)
    {
        cin>>n>>m;
        int A[n];
    	int B[n];
        for(j=0;j<n;j++)
        {
            cin>>A[j];
        }
        for(j=0;j<n;j++)
        {
            if(A[j]<=m/2)
            {
                B[j] = m;
                k = abs(A[j] - B[j]);
            }
            else if(A[j]>m/2)
            {
                B[j] = 1;
                k = abs(B[j] - A[j]);
            }
            sum = sum + k;
        }
        cout<<sum;
    }
    
	return 0;
}

