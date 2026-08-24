#include<iostream>
using namespace std;

int funPrimeNum(int n){

  int reminder,i;

  for( i=2; i<n-1; i++){
reminder=n%i;
  
  if(reminder!=0){
    cout<<n;}
}
   return 0;
}  
int main(){
    int n;
     cout<<"Enter the nth number you want to check  prime "<<endl;
     cin>>n;
    cout<< funPrimeNum(n)<<endl;
    return 0;
}