#include<iostream>
using namespace std;

int printPrimeNum(int n){
int i,j;
    for(i=2; i<=n; i++){  //outer loop
     bool isPrime=true; 
     for(j=2; j<i; j++){
        if(i%j==0){
            isPrime=false;
            break;
        }
    }
       if(isPrime){
            cout<<i<<" ";
            
        } 
  
    }
    return i;  
}
int main(){
    int n;
     cout<<"Enter the nth number to print prime number "<<endl;
     cin>>n;
 cout<<printPrimeNum(n)<<endl;
  return 0;
}