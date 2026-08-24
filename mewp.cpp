
#include<iostream>
using namespace std;
int main(){
            int i,j,k,n;
			n=5;
		// first half
			
	for(i=0; i<=n; i++) {                                   //row
		
   //---------------- print 1st right triangle---------//

	for(j=0; j<=i; j++) { 
		cout<<"*";}
cout<<endl;
	} 
	for(i=0; i<n; i++){
	for(j=0; j<n-i; j++)   {
		cout<<"*";
	}
	
	cout<<endl;
}

    return 0;
}  
