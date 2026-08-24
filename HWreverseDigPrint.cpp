#include<iostream>
using namespace std;

int main(){
    
   int num=125;
  
   
while(num>0){
    int  reminder=num%10;
     num=num/10;
    cout<<reminder<<" "; 
}

     return 0;
}
