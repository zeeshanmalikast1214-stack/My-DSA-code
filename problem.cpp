
#include<iostream>
using namespace std;
int main(){
            int i,j,k,n;
			n=5;
		
			
	for(i=0; i<n; i++) {              //row
		
                                     //print spaces
      for(j=0; j<n-i-1; j++) { 
		cout<<" ";}

		                            //print star
	for(k=0; k<i+1; k++){

		cout<<"*";}
                
	cout<<endl;
	}    
    return 0;
}  
