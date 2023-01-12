#include <iostream>
using namespace std;

int main() {
	int t;
	int n;
	int m;
	int a[n];
	int b[n];
    int k;
    
	cin>>t;
	for(int i=0;i<t;i++){
        cin>>n;
        cin>>m;
        int sum=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]>(m/2)){
                b[j]=1;
                k=a[j]-b[j];
            }
            else if(a[j]<=m/2){
                b[j]=m;
                k=b[j]-a[j];

            }
     
            
            int sum=sum+k;
        }
       
        cout<<sum;

    
    }
	return 0;
}
