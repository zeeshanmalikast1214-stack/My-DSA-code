#include <iostream>
using namespace std;

 int main(){

       int size=5;
  
       int num[size]={5,12,14,16,19};
       
       for (int i=0; i<size/2; i++){
           swap(num[i], num[size-i-1]);
           cout<<num[i];
    }
   
      return 0;

} 