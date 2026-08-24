
#include<iostream>
using namespace std;
int main(){
            int i,j,k,n;
			n=5; 
            for(i=1; i<=n; i++){       //row

for(j=1; j<=i; j++){
    cout<<"*";    // 1st triangle print
}
for(j=1; j<=2*(n-i); j++){
    cout<<" ";    //  print space
}
for(k=1; k<=i; k++){
    cout<<"*";    // 2nd triangle print
}

cout<<endl;

            }

//----------------------------------------------------------------------------

            for(i=n; i>=1; i--){       //row

for(j=1; j<=i; j++){
    cout<<"*";    // 1st triangle print
}
for(j=1; j<=2*(n-i); j++){
    cout<<" ";    //  print space
}
for(k=1; k<=i; k++){
    cout<<"*";    // 2nd triangle print
}




cout<<endl;

            }
            return 0;}