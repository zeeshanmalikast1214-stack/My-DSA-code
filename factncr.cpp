#include<iostream>
using namespace std;

int factorial(int n){
int fact=1;
for(int i=1; i<=n; i++){
    fact=fact * i;
}
return fact ;
}

int nCrFormula(int n, int r){ 
     int nCr;
    
     nCr=factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}

int main(){
    int n,r;
      cout<<"Enter the value of n "<<endl;
    cin>>n;
        cout<<"Enter the value of r"<<endl;
    cin>>r;  

    cout<<"nCr : "<<nCrFormula(n,r);
    return 0;}