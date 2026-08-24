#include<iostream>
using namespace std;

int factorial(int n){
factorial=1;
for(int i=1; i<=n; i++){
    factorial=factorial * i;
}

return factorial ;
} 


int main(){
    int num;
    cout<<"Enter the number you want facttorial"<<endl;
    cin>>num;

    cout<<"factorial : "<<factorial(num);
    return 0;}