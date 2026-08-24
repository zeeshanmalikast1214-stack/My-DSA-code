#include<iostream>
using namespace std;
int main(){
int x,n,factorial;
n=5;
factorial=1;


  for( x=1; x<=n; x++)
  {factorial=factorial*x;
     }
  
  cout<<"The factorial of number is : "<<factorial<<endl;
    return 0;
}