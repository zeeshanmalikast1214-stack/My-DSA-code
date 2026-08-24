#include<iostream>
using namespace std;
int funPrimeNum(int n){
  int reminder;
  for(int i=2; i<n; i++){
reminder=n%2;
  }
if(reminder==0){
    cout<<n<<": is composite number "<<endl;
}else {cout<<n<<": is prime number number "<<endl;}
   return 0;
}
int main(){
    int n;
     cout<<"Enter the number you want to check number is prime or composite "<<endl;
     cin>>n;
    cout<< funPrimeNum(n)<<endl;
    return 0;
}